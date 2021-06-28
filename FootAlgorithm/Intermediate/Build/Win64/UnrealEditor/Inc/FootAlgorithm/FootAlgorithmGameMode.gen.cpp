// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FootAlgorithm/FootAlgorithmGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFootAlgorithmGameMode() {}
// Cross Module References
	FOOTALGORITHM_API UClass* Z_Construct_UClass_AFootAlgorithmGameMode_NoRegister();
	FOOTALGORITHM_API UClass* Z_Construct_UClass_AFootAlgorithmGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_FootAlgorithm();
// End Cross Module References
	void AFootAlgorithmGameMode::StaticRegisterNativesAFootAlgorithmGameMode()
	{
	}
	UClass* Z_Construct_UClass_AFootAlgorithmGameMode_NoRegister()
	{
		return AFootAlgorithmGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AFootAlgorithmGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFootAlgorithmGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_FootAlgorithm,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFootAlgorithmGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering LOD WorldPartition DataLayers Utilities|Transformation" },
		{ "IncludePath", "FootAlgorithmGameMode.h" },
		{ "ModuleRelativePath", "FootAlgorithmGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFootAlgorithmGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFootAlgorithmGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AFootAlgorithmGameMode_Statics::ClassParams = {
		&AFootAlgorithmGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AFootAlgorithmGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFootAlgorithmGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFootAlgorithmGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFootAlgorithmGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFootAlgorithmGameMode, 1908103529);
	template<> FOOTALGORITHM_API UClass* StaticClass<AFootAlgorithmGameMode>()
	{
		return AFootAlgorithmGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFootAlgorithmGameMode(Z_Construct_UClass_AFootAlgorithmGameMode, &AFootAlgorithmGameMode::StaticClass, TEXT("/Script/FootAlgorithm"), TEXT("AFootAlgorithmGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFootAlgorithmGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
