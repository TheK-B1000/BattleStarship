// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BattleStarship/Public/StarshipCannon.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStarshipCannon() {}
// Cross Module References
	BATTLESTARSHIP_API UClass* Z_Construct_UClass_UStarshipCannon_NoRegister();
	BATTLESTARSHIP_API UClass* Z_Construct_UClass_UStarshipCannon();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent();
	UPackage* Z_Construct_UPackage__Script_BattleStarship();
// End Cross Module References
	void UStarshipCannon::StaticRegisterNativesUStarshipCannon()
	{
	}
	UClass* Z_Construct_UClass_UStarshipCannon_NoRegister()
	{
		return UStarshipCannon::StaticClass();
	}
	struct Z_Construct_UClass_UStarshipCannon_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinElevationInDegrees_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinElevationInDegrees;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxElevationInDegrees_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxElevationInDegrees;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxDegreesPerSeconds_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxDegreesPerSeconds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStarshipCannon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UStaticMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_BattleStarship,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStarshipCannon_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Object Activation Components|Activation Trigger" },
		{ "IncludePath", "StarshipCannon.h" },
		{ "ModuleRelativePath", "Public/StarshipCannon.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStarshipCannon_Statics::NewProp_MinElevationInDegrees_MetaData[] = {
		{ "Category", "Setup" },
		{ "Comment", "// Sensible Default\n" },
		{ "ModuleRelativePath", "Public/StarshipCannon.h" },
		{ "ToolTip", "Sensible Default" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStarshipCannon_Statics::NewProp_MinElevationInDegrees = { "MinElevationInDegrees", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStarshipCannon, MinElevationInDegrees), METADATA_PARAMS(Z_Construct_UClass_UStarshipCannon_Statics::NewProp_MinElevationInDegrees_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStarshipCannon_Statics::NewProp_MinElevationInDegrees_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStarshipCannon_Statics::NewProp_MaxElevationInDegrees_MetaData[] = {
		{ "Category", "Setup" },
		{ "Comment", "// Sensible Default\n" },
		{ "ModuleRelativePath", "Public/StarshipCannon.h" },
		{ "ToolTip", "Sensible Default" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStarshipCannon_Statics::NewProp_MaxElevationInDegrees = { "MaxElevationInDegrees", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStarshipCannon, MaxElevationInDegrees), METADATA_PARAMS(Z_Construct_UClass_UStarshipCannon_Statics::NewProp_MaxElevationInDegrees_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStarshipCannon_Statics::NewProp_MaxElevationInDegrees_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStarshipCannon_Statics::NewProp_MaxDegreesPerSeconds_MetaData[] = {
		{ "Category", "Setup" },
		{ "ModuleRelativePath", "Public/StarshipCannon.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStarshipCannon_Statics::NewProp_MaxDegreesPerSeconds = { "MaxDegreesPerSeconds", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStarshipCannon, MaxDegreesPerSeconds), METADATA_PARAMS(Z_Construct_UClass_UStarshipCannon_Statics::NewProp_MaxDegreesPerSeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStarshipCannon_Statics::NewProp_MaxDegreesPerSeconds_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStarshipCannon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStarshipCannon_Statics::NewProp_MinElevationInDegrees,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStarshipCannon_Statics::NewProp_MaxElevationInDegrees,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStarshipCannon_Statics::NewProp_MaxDegreesPerSeconds,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStarshipCannon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStarshipCannon>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UStarshipCannon_Statics::ClassParams = {
		&UStarshipCannon::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UStarshipCannon_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UStarshipCannon_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UStarshipCannon_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStarshipCannon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStarshipCannon()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UStarshipCannon_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UStarshipCannon, 4123429244);
	template<> BATTLESTARSHIP_API UClass* StaticClass<UStarshipCannon>()
	{
		return UStarshipCannon::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UStarshipCannon(Z_Construct_UClass_UStarshipCannon, &UStarshipCannon::StaticClass, TEXT("/Script/BattleStarship"), TEXT("UStarshipCannon"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStarshipCannon);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
