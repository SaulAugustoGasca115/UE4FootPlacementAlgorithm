// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FootAlgorithm/HUD/DebugHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDebugHUD() {}
// Cross Module References
	FOOTALGORITHM_API UClass* Z_Construct_UClass_ADebugHUD_NoRegister();
	FOOTALGORITHM_API UClass* Z_Construct_UClass_ADebugHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_FootAlgorithm();
	ENGINE_API UClass* Z_Construct_UClass_UFont_NoRegister();
// End Cross Module References
	void ADebugHUD::StaticRegisterNativesADebugHUD()
	{
	}
	UClass* Z_Construct_UClass_ADebugHUD_NoRegister()
	{
		return ADebugHUD::StaticClass();
	}
	struct Z_Construct_UClass_ADebugHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MainFont_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MainFont;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADebugHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_FootAlgorithm,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADebugHUD_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "HUD/DebugHUD.h" },
		{ "ModuleRelativePath", "HUD/DebugHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADebugHUD_Statics::NewProp_MainFont_MetaData[] = {
		{ "ModuleRelativePath", "HUD/DebugHUD.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADebugHUD_Statics::NewProp_MainFont = { "MainFont", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADebugHUD, MainFont), Z_Construct_UClass_UFont_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADebugHUD_Statics::NewProp_MainFont_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADebugHUD_Statics::NewProp_MainFont_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADebugHUD_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADebugHUD_Statics::NewProp_MainFont,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADebugHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADebugHUD>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ADebugHUD_Statics::ClassParams = {
		&ADebugHUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ADebugHUD_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ADebugHUD_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ADebugHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADebugHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADebugHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADebugHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADebugHUD, 1114684751);
	template<> FOOTALGORITHM_API UClass* StaticClass<ADebugHUD>()
	{
		return ADebugHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADebugHUD(Z_Construct_UClass_ADebugHUD, &ADebugHUD::StaticClass, TEXT("/Script/FootAlgorithm"), TEXT("ADebugHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADebugHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
