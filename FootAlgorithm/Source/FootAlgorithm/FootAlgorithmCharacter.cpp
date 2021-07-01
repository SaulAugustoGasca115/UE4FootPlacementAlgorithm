// Copyright Epic Games, Inc. All Rights Reserved.

#include "FootAlgorithmCharacter.h"
#include "HeadMountedDisplayFunctionLibrary.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/Controller.h"
#include "GameFramework/SpringArmComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Kismet/KismetSystemLibrary.h"
#include "./Animations/FootPlacementAnimInstance.h"

//////////////////////////////////////////////////////////////////////////
// AFootAlgorithmCharacter

AFootAlgorithmCharacter::AFootAlgorithmCharacter()
{
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);

	// set our turn rates for input
	BaseTurnRate = 45.f;
	BaseLookUpRate = 45.f;

	// Don't rotate when the controller rotates. Let that just affect the camera.
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	// Configure character movement
	GetCharacterMovement()->bOrientRotationToMovement = true; // Character moves in the direction of input...	
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 540.0f, 0.0f); // ...at this rotation rate
	GetCharacterMovement()->JumpZVelocity = 600.f;
	GetCharacterMovement()->AirControl = 0.2f;

	// Create a camera boom (pulls in towards the player if there is a collision)
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->TargetArmLength = 300.0f; // The camera follows at this distance behind the character	
	CameraBoom->bUsePawnControlRotation = true; // Rotate the arm based on the controller

	// Create a follow camera
	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName); // Attach the camera to the end of the boom and let the boom adjust to match the controller orientation
	FollowCamera->bUsePawnControlRotation = false; // Camera does not rotate relative to arm

	// Note: The skeletal mesh and anim blueprint references on the Mesh component (inherited from Character) 
	// are set in the derived blueprint asset named MyCharacter (to avoid direct content references in C++)
}

//////////////////////////////////////////////////////////////////////////
// Input




void AFootAlgorithmCharacter::BeginPlay()
{
	Super::BeginPlay();

	//Get the skeletal mesh to get the foot bones location
	if (GetMesh()->SkeletalMesh)
	{
		const FVector LeftFootBoneWorldLocation = GetMesh()->GetBoneLocation(LeftFootBoneName);
		LeftFootBoneRelativeLocation = GetActorTransform().InverseTransformPosition(LeftFootBoneWorldLocation);

		const FVector RightFootBoneWorldLocation = GetMesh()->GetBoneLocation(RightFootBoneName);
		RightFootBoneRelativeLocation = GetActorTransform().InverseTransformPosition(RightFootBoneWorldLocation);

		InitialMeshRelativeLocation = GetMesh()->GetRelativeTransform().GetLocation();
	}

}

void AFootAlgorithmCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	UFootPlacementAnimInstance* FPAnimation = Cast<UFootPlacementAnimInstance>(GetMesh()->GetAnimInstance());

	if (!FPAnimation)
	{
		return;
	}

	if (GetVelocity().Size() == 0)
	{
		TArray<AActor*> ActorsToIgnore;

		FHitResult LeftTraceHit;
		const FVector LeftFootLocation = GetTransform().TransformPosition(LeftFootBoneRelativeLocation);
		bool bLeftFootTraceHit = UKismetSystemLibrary::SphereTraceSingle(this, LeftFootLocation + FVector(0.0f, 0.0f, 50.0f), LeftFootLocation + FVector(0.0f, 0.0f, -100.0f),
																		10.0f,ETraceTypeQuery::TraceTypeQuery1,false, ActorsToIgnore,EDrawDebugTrace::ForOneFrame,LeftTraceHit,true);

		
		FHitResult RightTraceHit;
		const FVector RightFootLocation = GetTransform().TransformPosition(RightFootBoneRelativeLocation);
		bool bRightFootTraceHit = UKismetSystemLibrary::SphereTraceSingle(this, RightFootLocation + FVector(0.0f, 0.0f, 50.0f), RightFootLocation + FVector(0.0f, 0.0f, -100.0f),
			10.0f, ETraceTypeQuery::TraceTypeQuery1, false, ActorsToIgnore, EDrawDebugTrace::ForOneFrame, RightTraceHit, true);


		float zOffset = 0.0f;

		if (LeftTraceHit.ImpactPoint.Z < RightTraceHit.ImpactPoint.Z)
		{
			zOffset = LeftFootLocation.Z - LeftTraceHit.ImpactPoint.Z;

			//animation isntance values
			FPAnimation->SetRightEffectorLocation(RightTraceHit.ImpactPoint + FVector(0.0f,0.0f,13.0f));
			FPAnimation->SetLeftFootAlpha(0.0f);
			FPAnimation->SetRightFootAlpha(1.0f);
		}
		else 
		{
			zOffset = RightFootLocation.Z - RightTraceHit.ImpactPoint.Z;

			//animation isntance values
			FPAnimation->SetLeftEffectorLocation(LeftTraceHit.ImpactPoint + FVector(0.0f, 0.0f, 13.0f));
			FPAnimation->SetLeftFootAlpha(1.0f);
			FPAnimation->SetRightFootAlpha(0.0f);
		}

		GetMesh()->SetRelativeLocation(InitialMeshRelativeLocation + FVector(0.0f,0.0f,-zOffset + 13.0f));

	}
	else
	{
		GetMesh()->SetRelativeLocation(InitialMeshRelativeLocation);

		//animation instance values
		FPAnimation->SetLeftFootAlpha(0.0f);
		FPAnimation->SetRightFootAlpha(0.0f);
	}
}

void AFootAlgorithmCharacter::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	// Set up gameplay key bindings
	check(PlayerInputComponent);
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);

	PlayerInputComponent->BindAxis("MoveForward", this, &AFootAlgorithmCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &AFootAlgorithmCharacter::MoveRight);

	// We have 2 versions of the rotation bindings to handle different kinds of devices differently
	// "turn" handles devices that provide an absolute delta, such as a mouse.
	// "turnrate" is for devices that we choose to treat as a rate of change, such as an analog joystick
	PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("TurnRate", this, &AFootAlgorithmCharacter::TurnAtRate);
	PlayerInputComponent->BindAxis("LookUp", this, &APawn::AddControllerPitchInput);
	PlayerInputComponent->BindAxis("LookUpRate", this, &AFootAlgorithmCharacter::LookUpAtRate);

	// handle touch devices
	PlayerInputComponent->BindTouch(IE_Pressed, this, &AFootAlgorithmCharacter::TouchStarted);
	PlayerInputComponent->BindTouch(IE_Released, this, &AFootAlgorithmCharacter::TouchStopped);

	// VR headset functionality
	PlayerInputComponent->BindAction("ResetVR", IE_Pressed, this, &AFootAlgorithmCharacter::OnResetVR);
}


void AFootAlgorithmCharacter::OnResetVR()
{
	// If FootAlgorithm is added to a project via 'Add Feature' in the Unreal Editor the dependency on HeadMountedDisplay in FootAlgorithm.Build.cs is not automatically propagated
	// and a linker error will result.
	// You will need to either:
	//		Add "HeadMountedDisplay" to [YourProject].Build.cs PublicDependencyModuleNames in order to build successfully (appropriate if supporting VR).
	// or:
	//		Comment or delete the call to ResetOrientationAndPosition below (appropriate if not supporting VR)
	UHeadMountedDisplayFunctionLibrary::ResetOrientationAndPosition();
}

void AFootAlgorithmCharacter::TouchStarted(ETouchIndex::Type FingerIndex, FVector Location)
{
		Jump();
}

void AFootAlgorithmCharacter::TouchStopped(ETouchIndex::Type FingerIndex, FVector Location)
{
		StopJumping();
}


void AFootAlgorithmCharacter::TurnAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerYawInput(Rate * BaseTurnRate * GetWorld()->GetDeltaSeconds());
}

void AFootAlgorithmCharacter::LookUpAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerPitchInput(Rate * BaseLookUpRate * GetWorld()->GetDeltaSeconds());
}

void AFootAlgorithmCharacter::MoveForward(float Value)
{
	if ((Controller != nullptr) && (Value != 0.0f))
	{
		// find out which way is forward
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		// get forward vector
		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
		AddMovementInput(Direction, Value);
	}
}

void AFootAlgorithmCharacter::MoveRight(float Value)
{
	if ( (Controller != nullptr) && (Value != 0.0f) )
	{
		// find out which way is right
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);
	
		// get right vector 
		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
		// add movement in that direction
		AddMovementInput(Direction, Value);
	}
}
