// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "CanvasItem.h"
#include "Engine/Canvas.h"
#include "DebugHUD.generated.h"

/**
 * 
 */
UCLASS()
class FOOTALGORITHM_API ADebugHUD : public AHUD
{
	GENERATED_BODY()

public:

	ADebugHUD();

	void AddText(const TCHAR* title,const FText& value)
	{
		RenderStatistics(title,value);
	}

	void AddInt(const TCHAR* title,int32 value)
	{
		RenderStatistics(title,FText::AsNumber(value),(value <= 0) ? FLinearColor::Red : FLinearColor::Yellow);
	}

	void AddFloat(const TCHAR* title, float value)
	{
		RenderStatistics(title,FText::AsNumber(value),(value <= 0) ? FLinearColor::Red : FLinearColor::Yellow);
	}

	void AddBool(const TCHAR* title, bool value)
	{
		RenderStatistics(title,ConvertBoolToText(value),(value == true) ? FLinearColor::Green : FLinearColor::Red);
	}

	virtual void DrawHUD() override
	{
		X = Y = 50.0f;
	}


	float horizontalOffset = 150.0f;

private:
	
	FText ConvertStringToText(const TCHAR* text)
	{
		return FText::FromString(text);
	}


	FText ConvertBoolToText(bool value)
	{
		return ConvertStringToText((value == true) ? TEXT("true") : TEXT("false"));
	}


	void RenderStatistics(const TCHAR* title, const FText& value, const FLinearColor& color = FLinearColor::Yellow)
	{
		FCanvasTextItem item0(FVector2D(X,Y),ConvertStringToText(title),MainFont,FLinearColor::White);
		//item0.EnableShadow(FLinearColor(0,0,0));
		Canvas->DrawItem(item0);

		FCanvasTextItem item1(FVector2D(X+horizontalOffset,Y),value,MainFont,color);
		//item1.EnableShadow(FLinearColor(0,0,0));
		Canvas->DrawItem(item1);

		Y += lineHeight;
		
	}

	UPROPERTY(Transient)
	UFont* MainFont;

	float X = 150.0f;

	float Y = 150.0f;

	float lineHeight = 30.0f;
	
};
