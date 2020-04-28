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
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStarshipCannon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UStaticMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_BattleStarship,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStarshipCannon_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Object Activation Components|Activation Trigger" },
		{ "IncludePath", "StarshipCannon.h" },
		{ "ModuleRelativePath", "Public/StarshipCannon.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStarshipCannon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStarshipCannon>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UStarshipCannon_Statics::ClassParams = {
		&UStarshipCannon::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
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
	IMPLEMENT_CLASS(UStarshipCannon, 756401967);
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
