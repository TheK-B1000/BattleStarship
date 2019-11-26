// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BattleStarship/Public/StarshipPlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStarshipPlayerController() {}
// Cross Module References
	BATTLESTARSHIP_API UClass* Z_Construct_UClass_AStarshipPlayerController_NoRegister();
	BATTLESTARSHIP_API UClass* Z_Construct_UClass_AStarshipPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_BattleStarship();
// End Cross Module References
	void AStarshipPlayerController::StaticRegisterNativesAStarshipPlayerController()
	{
	}
	UClass* Z_Construct_UClass_AStarshipPlayerController_NoRegister()
	{
		return AStarshipPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AStarshipPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AStarshipPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_BattleStarship,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStarshipPlayerController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "StarshipPlayerController.h" },
		{ "ModuleRelativePath", "Public/StarshipPlayerController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AStarshipPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AStarshipPlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AStarshipPlayerController_Statics::ClassParams = {
		&AStarshipPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AStarshipPlayerController_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AStarshipPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AStarshipPlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AStarshipPlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AStarshipPlayerController, 2117483144);
	template<> BATTLESTARSHIP_API UClass* StaticClass<AStarshipPlayerController>()
	{
		return AStarshipPlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AStarshipPlayerController(Z_Construct_UClass_AStarshipPlayerController, &AStarshipPlayerController::StaticClass, TEXT("/Script/BattleStarship"), TEXT("AStarshipPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AStarshipPlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
