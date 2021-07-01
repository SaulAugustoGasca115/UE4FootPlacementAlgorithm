// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "FootPlacementAnimInstance.generated.h"

/**
 * 
 */
UCLASS()
class FOOTALGORITHM_API UFootPlacementAnimInstance : public UAnimInstance
{
	GENERATED_BODY()

public:

	UFootPlacementAnimInstance();

	void SetLeftEffectorLocation(FVector NewEffectorLocation);
	
	void SetRightEffectorLocation(FVector NewEffectorLocation);

	void SetLeftFootAlpha(float NewAlpha);

	void SetRightFootAlpha(float NewAlpha);

protected:
	
	//left foot effector location
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category = IK ,meta = (BlueprintProtected = true))
	FVector LeftFootEffectorLocation;

	//joint target left
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = IK, meta = (BlueprintProtected = true))
	FVector JointTargetLeft;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = IK, meta = (BlueprintProtected = true))
	float LeftFootAlpha;


	//Right foot effector location
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = IK, meta = (BlueprintProtected = true))
		FVector RightFootEffectorLocation;

	//joint target Right
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = IK, meta = (BlueprintProtected = true))
		FVector JointTargetRight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = IK, meta = (BlueprintProtected = true))
		float RightFootAlpha;

};
