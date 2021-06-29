// Fill out your copyright notice in the Description page of Project Settings.


#include "CharacterHUD.h"
#include "../FootAlgorithmCharacter.h"

void ACharacterHUD::DrawHUD()
{

	Super::DrawHUD();
	AFootAlgorithmCharacter* character = Cast<AFootAlgorithmCharacter>(GetOwningPawn());

	//ATestPawn* character = Cast<ATestPawn>(GetOwningPawn());

	if (character != nullptr)
	{
		AddFloat(L"Mesh Location X: ",character->InitialMeshRelativeLocation.X);
		AddFloat(L"Mesh Location Y: ", character->InitialMeshRelativeLocation.Y);
		AddFloat(L"Mesh Location Z: ", character->InitialMeshRelativeLocation.Z);
		//AddFloat(L"Mesh Location X: ", character->TestNumber);
	}

}

