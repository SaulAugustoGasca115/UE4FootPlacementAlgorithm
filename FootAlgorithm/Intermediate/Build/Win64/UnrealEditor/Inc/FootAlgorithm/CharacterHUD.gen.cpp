// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FootAlgorithm/HUD/CharacterHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterHUD() {}
// Cross Module References
	FOOTALGORITHM_API UClass* Z_Construct_UClass_ACharacterHUD_NoRegister();
	FOOTALGORITHM_API UClass* Z_Construct_UClass_ACharacterHUD();
	FOOTALGORITHM_API UClass* Z_Construct_UClass_ADebugHUD();
	UPackage* Z_Construct_UPackage__Script_FootAlgorithm();
// End Cross Module References
	void ACharacterHUD::StaticRegisterNativesACharacterHUD()
	{
	}
	UClass* Z_Construct_UClass_ACharacterHUD_NoRegister()
	{
		return ACharacterHUD::StaticClass();
	}
	struct Z_Construct_UClass_ACharacterHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACharacterHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ADebugHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_FootAlgorithm,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterHUD_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "HUD/CharacterHUD.h" },
		{ "ModuleRelativePath", "HUD/CharacterHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACharacterHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACharacterHUD>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACharacterHUD_Statics::ClassParams = {
		&ACharacterHUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ACharacterHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACharacterHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACharacterHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACharacterHUD, 3793410301);
	template<> FOOTALGORITHM_API UClass* StaticClass<ACharacterHUD>()
	{
		return ACharacterHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACharacterHUD(Z_Construct_UClass_ACharacterHUD, &ACharacterHUD::StaticClass, TEXT("/Script/FootAlgorithm"), TEXT("ACharacterHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACharacterHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
