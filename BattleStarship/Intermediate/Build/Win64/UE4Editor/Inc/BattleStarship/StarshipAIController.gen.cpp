// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BattleStarship/Public/StarshipAIController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStarshipAIController() {}
// Cross Module References
	BATTLESTARSHIP_API UClass* Z_Construct_UClass_AStarshipAIController_NoRegister();
	BATTLESTARSHIP_API UClass* Z_Construct_UClass_AStarshipAIController();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	UPackage* Z_Construct_UPackage__Script_BattleStarship();
// End Cross Module References
	void AStarshipAIController::StaticRegisterNativesAStarshipAIController()
	{
	}
	UClass* Z_Construct_UClass_AStarshipAIController_NoRegister()
	{
		return AStarshipAIController::StaticClass();
	}
	struct Z_Construct_UClass_AStarshipAIController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AStarshipAIController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_BattleStarship,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStarshipAIController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "StarshipAIController.h" },
		{ "ModuleRelativePath", "Public/StarshipAIController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AStarshipAIController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AStarshipAIController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AStarshipAIController_Statics::ClassParams = {
		&AStarshipAIController::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002A0u,
		METADATA_PARAMS(Z_Construct_UClass_AStarshipAIController_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AStarshipAIController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AStarshipAIController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AStarshipAIController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AStarshipAIController, 2630274331);
	template<> BATTLESTARSHIP_API UClass* StaticClass<AStarshipAIController>()
	{
		return AStarshipAIController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AStarshipAIController(Z_Construct_UClass_AStarshipAIController, &AStarshipAIController::StaticClass, TEXT("/Script/BattleStarship"), TEXT("AStarshipAIController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AStarshipAIController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
