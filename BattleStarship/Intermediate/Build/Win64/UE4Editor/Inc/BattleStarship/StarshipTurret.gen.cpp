// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BattleStarship/Public/StarshipTurret.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStarshipTurret() {}
// Cross Module References
	BATTLESTARSHIP_API UClass* Z_Construct_UClass_UStarshipTurret_NoRegister();
	BATTLESTARSHIP_API UClass* Z_Construct_UClass_UStarshipTurret();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent();
	UPackage* Z_Construct_UPackage__Script_BattleStarship();
// End Cross Module References
	void UStarshipTurret::StaticRegisterNativesUStarshipTurret()
	{
	}
	UClass* Z_Construct_UClass_UStarshipTurret_NoRegister()
	{
		return UStarshipTurret::StaticClass();
	}
	struct Z_Construct_UClass_UStarshipTurret_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxDegreesPerSeconds_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxDegreesPerSeconds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStarshipTurret_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UStaticMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_BattleStarship,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStarshipTurret_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Object Activation Components|Activation Trigger" },
		{ "IncludePath", "StarshipTurret.h" },
		{ "ModuleRelativePath", "Public/StarshipTurret.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStarshipTurret_Statics::NewProp_MaxDegreesPerSeconds_MetaData[] = {
		{ "Category", "Setup" },
		{ "ModuleRelativePath", "Public/StarshipTurret.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStarshipTurret_Statics::NewProp_MaxDegreesPerSeconds = { "MaxDegreesPerSeconds", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStarshipTurret, MaxDegreesPerSeconds), METADATA_PARAMS(Z_Construct_UClass_UStarshipTurret_Statics::NewProp_MaxDegreesPerSeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStarshipTurret_Statics::NewProp_MaxDegreesPerSeconds_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStarshipTurret_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStarshipTurret_Statics::NewProp_MaxDegreesPerSeconds,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStarshipTurret_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStarshipTurret>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UStarshipTurret_Statics::ClassParams = {
		&UStarshipTurret::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UStarshipTurret_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UStarshipTurret_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UStarshipTurret_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStarshipTurret_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStarshipTurret()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UStarshipTurret_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UStarshipTurret, 2819949747);
	template<> BATTLESTARSHIP_API UClass* StaticClass<UStarshipTurret>()
	{
		return UStarshipTurret::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UStarshipTurret(Z_Construct_UClass_UStarshipTurret, &UStarshipTurret::StaticClass, TEXT("/Script/BattleStarship"), TEXT("UStarshipTurret"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStarshipTurret);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
