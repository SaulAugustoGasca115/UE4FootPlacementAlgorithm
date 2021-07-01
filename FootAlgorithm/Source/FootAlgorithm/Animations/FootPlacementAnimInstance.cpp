// Fill out your copyright notice in the Description page of Project Settings.


#include "FootPlacementAnimInstance.h"


UFootPlacementAnimInstance::UFootPlacementAnimInstance()
{
	JointTargetLeft = FVector(50.0f,217.50296f,-38.598057f);
	JointTargetRight = FVector(50.0f, 217.f, -38.f);
}


void UFootPlacementAnimInstance::SetLeftEffectorLocation(FVector NewEffectorLocation)
{
	LeftFootEffectorLocation = NewEffectorLocation;
}

void UFootPlacementAnimInstance::SetRightEffectorLocation(FVector NewEffectorLocation)
{
	RightFootEffectorLocation = NewEffectorLocation;
}

void UFootPlacementAnimInstance::SetLeftFootAlpha(float NewAlpha)
{
	LeftFootAlpha = NewAlpha;
}

void UFootPlacementAnimInstance::SetRightFootAlpha(float NewAlpha)
{
	RightFootAlpha = NewAlpha;

	

}
