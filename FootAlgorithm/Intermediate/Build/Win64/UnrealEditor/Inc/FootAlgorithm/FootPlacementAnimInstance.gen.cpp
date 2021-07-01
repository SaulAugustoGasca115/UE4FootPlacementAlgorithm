// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FootAlgorithm/Animations/FootPlacementAnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFootPlacementAnimInstance() {}
// Cross Module References
	FOOTALGORITHM_API UClass* Z_Construct_UClass_UFootPlacementAnimInstance_NoRegister();
	FOOTALGORITHM_API UClass* Z_Construct_UClass_UFootPlacementAnimInstance();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	UPackage* Z_Construct_UPackage__Script_FootAlgorithm();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void UFootPlacementAnimInstance::StaticRegisterNativesUFootPlacementAnimInstance()
	{
	}
	UClass* Z_Construct_UClass_UFootPlacementAnimInstance_NoRegister()
	{
		return UFootPlacementAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UFootPlacementAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeftFootEffectorLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LeftFootEffectorLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JointTargetLeft_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_JointTargetLeft;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeftFootAlpha_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LeftFootAlpha;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RightFootEffectorLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RightFootEffectorLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JointTargetRight_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_JointTargetRight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RightFootAlpha_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RightFootAlpha;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFootPlacementAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_FootAlgorithm,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFootPlacementAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "Animations/FootPlacementAnimInstance.h" },
		{ "ModuleRelativePath", "Animations/FootPlacementAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFootPlacementAnimInstance_Statics::NewProp_LeftFootEffectorLocation_MetaData[] = {
		{ "BlueprintProtected", "TRUE" },
		{ "Category", "IK" },
		{ "Comment", "//left foot effector location\n" },
		{ "ModuleRelativePath", "Animations/FootPlacementAnimInstance.h" },
		{ "ToolTip", "left foot effector location" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFootPlacementAnimInstance_Statics::NewProp_LeftFootEffectorLocation = { "LeftFootEffectorLocation", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFootPlacementAnimInstance, LeftFootEffectorLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UFootPlacementAnimInstance_Statics::NewProp_LeftFootEffectorLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFootPlacementAnimInstance_Statics::NewProp_LeftFootEffectorLocation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFootPlacementAnimInstance_Statics::NewProp_JointTargetLeft_MetaData[] = {
		{ "BlueprintProtected", "TRUE" },
		{ "Category", "IK" },
		{ "Comment", "//joint target left\n" },
		{ "ModuleRelativePath", "Animations/FootPlacementAnimInstance.h" },
		{ "ToolTip", "joint target left" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFootPlacementAnimInstance_Statics::NewProp_JointTargetLeft = { "JointTargetLeft", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFootPlacementAnimInstance, JointTargetLeft), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UFootPlacementAnimInstance_Statics::NewProp_JointTargetLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFootPlacementAnimInstance_Statics::NewProp_JointTargetLeft_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFootPlacementAnimInstance_Statics::NewProp_LeftFootAlpha_MetaData[] = {
		{ "BlueprintProtected", "TRUE" },
		{ "Category", "IK" },
		{ "ModuleRelativePath", "Animations/FootPlacementAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFootPlacementAnimInstance_Statics::NewProp_LeftFootAlpha = { "LeftFootAlpha", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFootPlacementAnimInstance, LeftFootAlpha), METADATA_PARAMS(Z_Construct_UClass_UFootPlacementAnimInstance_Statics::NewProp_LeftFootAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFootPlacementAnimInstance_Statics::NewProp_LeftFootAlpha_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFootPlacementAnimInstance_Statics::NewProp_RightFootEffectorLocation_MetaData[] = {
		{ "BlueprintProtected", "TRUE" },
		{ "Category", "IK" },
		{ "Comment", "//Right foot effector location\n" },
		{ "ModuleRelativePath", "Animations/FootPlacementAnimInstance.h" },
		{ "ToolTip", "Right foot effector location" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFootPlacementAnimInstance_Statics::NewProp_RightFootEffectorLocation = { "RightFootEffectorLocation", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFootPlacementAnimInstance, RightFootEffectorLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UFootPlacementAnimInstance_Statics::NewProp_RightFootEffectorLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFootPlacementAnimInstance_Statics::NewProp_RightFootEffectorLocation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFootPlacementAnimInstance_Statics::NewProp_JointTargetRight_MetaData[] = {
		{ "BlueprintProtected", "TRUE" },
		{ "Category", "IK" },
		{ "Comment", "//joint target Right\n" },
		{ "ModuleRelativePath", "Animations/FootPlacementAnimInstance.h" },
		{ "ToolTip", "joint target Right" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFootPlacementAnimInstance_Statics::NewProp_JointTargetRight = { "JointTargetRight", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFootPlacementAnimInstance, JointTargetRight), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UFootPlacementAnimInstance_Statics::NewProp_JointTargetRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFootPlacementAnimInstance_Statics::NewProp_JointTargetRight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFootPlacementAnimInstance_Statics::NewProp_RightFootAlpha_MetaData[] = {
		{ "BlueprintProtected", "TRUE" },
		{ "Category", "IK" },
		{ "ModuleRelativePath", "Animations/FootPlacementAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFootPlacementAnimInstance_Statics::NewProp_RightFootAlpha = { "RightFootAlpha", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFootPlacementAnimInstance, RightFootAlpha), METADATA_PARAMS(Z_Construct_UClass_UFootPlacementAnimInstance_Statics::NewProp_RightFootAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFootPlacementAnimInstance_Statics::NewProp_RightFootAlpha_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFootPlacementAnimInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFootPlacementAnimInstance_Statics::NewProp_LeftFootEffectorLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFootPlacementAnimInstance_Statics::NewProp_JointTargetLeft,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFootPlacementAnimInstance_Statics::NewProp_LeftFootAlpha,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFootPlacementAnimInstance_Statics::NewProp_RightFootEffectorLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFootPlacementAnimInstance_Statics::NewProp_JointTargetRight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFootPlacementAnimInstance_Statics::NewProp_RightFootAlpha,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFootPlacementAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFootPlacementAnimInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFootPlacementAnimInstance_Statics::ClassParams = {
		&UFootPlacementAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFootPlacementAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFootPlacementAnimInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UFootPlacementAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFootPlacementAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFootPlacementAnimInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFootPlacementAnimInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFootPlacementAnimInstance, 3142541853);
	template<> FOOTALGORITHM_API UClass* StaticClass<UFootPlacementAnimInstance>()
	{
		return UFootPlacementAnimInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFootPlacementAnimInstance(Z_Construct_UClass_UFootPlacementAnimInstance, &UFootPlacementAnimInstance::StaticClass, TEXT("/Script/FootAlgorithm"), TEXT("UFootPlacementAnimInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFootPlacementAnimInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
