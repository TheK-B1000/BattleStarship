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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LineTraceRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LineTraceRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrossHairYLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CrossHairYLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrossHairXLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CrossHairXLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStarshipPlayerController_Statics::NewProp_LineTraceRange_MetaData[] = {
		{ "Category", "StarshipPlayerController" },
		{ "ModuleRelativePath", "Public/StarshipPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AStarshipPlayerController_Statics::NewProp_LineTraceRange = { "LineTraceRange", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStarshipPlayerController, LineTraceRange), METADATA_PARAMS(Z_Construct_UClass_AStarshipPlayerController_Statics::NewProp_LineTraceRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStarshipPlayerController_Statics::NewProp_LineTraceRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStarshipPlayerController_Statics::NewProp_CrossHairYLocation_MetaData[] = {
		{ "Category", "StarshipPlayerController" },
		{ "ModuleRelativePath", "Public/StarshipPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AStarshipPlayerController_Statics::NewProp_CrossHairYLocation = { "CrossHairYLocation", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStarshipPlayerController, CrossHairYLocation), METADATA_PARAMS(Z_Construct_UClass_AStarshipPlayerController_Statics::NewProp_CrossHairYLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStarshipPlayerController_Statics::NewProp_CrossHairYLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStarshipPlayerController_Statics::NewProp_CrossHairXLocation_MetaData[] = {
		{ "Category", "StarshipPlayerController" },
		{ "ModuleRelativePath", "Public/StarshipPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AStarshipPlayerController_Statics::NewProp_CrossHairXLocation = { "CrossHairXLocation", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStarshipPlayerController, CrossHairXLocation), METADATA_PARAMS(Z_Construct_UClass_AStarshipPlayerController_Statics::NewProp_CrossHairXLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStarshipPlayerController_Statics::NewProp_CrossHairXLocation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AStarshipPlayerController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStarshipPlayerController_Statics::NewProp_LineTraceRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStarshipPlayerController_Statics::NewProp_CrossHairYLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStarshipPlayerController_Statics::NewProp_CrossHairXLocation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AStarshipPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AStarshipPlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AStarshipPlayerController_Statics::ClassParams = {
		&AStarshipPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AStarshipPlayerController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AStarshipPlayerController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AStarshipPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AStarshipPlayerController_Statics::Class_MetaDataParams))
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
	IMPLEMENT_CLASS(AStarshipPlayerController, 1673746096);
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
