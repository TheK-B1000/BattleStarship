// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BattleStarship/Public/Starship.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStarship() {}
// Cross Module References
	BATTLESTARSHIP_API UClass* Z_Construct_UClass_AStarship_NoRegister();
	BATTLESTARSHIP_API UClass* Z_Construct_UClass_AStarship();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_BattleStarship();
// End Cross Module References
	void AStarship::StaticRegisterNativesAStarship()
	{
	}
	UClass* Z_Construct_UClass_AStarship_NoRegister()
	{
		return AStarship::StaticClass();
	}
	struct Z_Construct_UClass_AStarship_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AStarship_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_BattleStarship,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStarship_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Starship.h" },
		{ "ModuleRelativePath", "Public/Starship.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AStarship_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AStarship>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AStarship_Statics::ClassParams = {
		&AStarship::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AStarship_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AStarship_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AStarship()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AStarship_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AStarship, 770496939);
	template<> BATTLESTARSHIP_API UClass* StaticClass<AStarship>()
	{
		return AStarship::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AStarship(Z_Construct_UClass_AStarship, &AStarship::StaticClass, TEXT("/Script/BattleStarship"), TEXT("AStarship"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AStarship);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
