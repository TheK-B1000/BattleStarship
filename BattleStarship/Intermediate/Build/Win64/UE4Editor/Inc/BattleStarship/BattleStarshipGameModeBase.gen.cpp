// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BattleStarship/BattleStarshipGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBattleStarshipGameModeBase() {}
// Cross Module References
	BATTLESTARSHIP_API UClass* Z_Construct_UClass_ABattleStarshipGameModeBase_NoRegister();
	BATTLESTARSHIP_API UClass* Z_Construct_UClass_ABattleStarshipGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_BattleStarship();
// End Cross Module References
	void ABattleStarshipGameModeBase::StaticRegisterNativesABattleStarshipGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ABattleStarshipGameModeBase_NoRegister()
	{
		return ABattleStarshipGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ABattleStarshipGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABattleStarshipGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_BattleStarship,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABattleStarshipGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "BattleStarshipGameModeBase.h" },
		{ "ModuleRelativePath", "BattleStarshipGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABattleStarshipGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABattleStarshipGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABattleStarshipGameModeBase_Statics::ClassParams = {
		&ABattleStarshipGameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ABattleStarshipGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABattleStarshipGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABattleStarshipGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABattleStarshipGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABattleStarshipGameModeBase, 1298159120);
	template<> BATTLESTARSHIP_API UClass* StaticClass<ABattleStarshipGameModeBase>()
	{
		return ABattleStarshipGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABattleStarshipGameModeBase(Z_Construct_UClass_ABattleStarshipGameModeBase, &ABattleStarshipGameModeBase::StaticClass, TEXT("/Script/BattleStarship"), TEXT("ABattleStarshipGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABattleStarshipGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
