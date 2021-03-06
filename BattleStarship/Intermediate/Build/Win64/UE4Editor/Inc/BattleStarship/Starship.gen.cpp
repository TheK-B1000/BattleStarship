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
	BATTLESTARSHIP_API UFunction* Z_Construct_UFunction_AStarship_Fire();
	BATTLESTARSHIP_API UFunction* Z_Construct_UFunction_AStarship_SetCannonReference();
	BATTLESTARSHIP_API UClass* Z_Construct_UClass_UStarshipCannon_NoRegister();
	BATTLESTARSHIP_API UFunction* Z_Construct_UFunction_AStarship_SetTurretReference();
	BATTLESTARSHIP_API UClass* Z_Construct_UClass_UStarshipTurret_NoRegister();
// End Cross Module References
	void AStarship::StaticRegisterNativesAStarship()
	{
		UClass* Class = AStarship::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Fire", &AStarship::execFire },
			{ "SetCannonReference", &AStarship::execSetCannonReference },
			{ "SetTurretReference", &AStarship::execSetTurretReference },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AStarship_Fire_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStarship_Fire_Statics::Function_MetaDataParams[] = {
		{ "Category", "Setup" },
		{ "ModuleRelativePath", "Public/Starship.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AStarship_Fire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AStarship, nullptr, "Fire", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AStarship_Fire_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AStarship_Fire_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AStarship_Fire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AStarship_Fire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AStarship_SetCannonReference_Statics
	{
		struct Starship_eventSetCannonReference_Parms
		{
			UStarshipCannon* CannonToSet;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CannonToSet_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CannonToSet;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStarship_SetCannonReference_Statics::NewProp_CannonToSet_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AStarship_SetCannonReference_Statics::NewProp_CannonToSet = { "CannonToSet", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Starship_eventSetCannonReference_Parms, CannonToSet), Z_Construct_UClass_UStarshipCannon_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AStarship_SetCannonReference_Statics::NewProp_CannonToSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AStarship_SetCannonReference_Statics::NewProp_CannonToSet_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AStarship_SetCannonReference_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStarship_SetCannonReference_Statics::NewProp_CannonToSet,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStarship_SetCannonReference_Statics::Function_MetaDataParams[] = {
		{ "Category", "Setup" },
		{ "ModuleRelativePath", "Public/Starship.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AStarship_SetCannonReference_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AStarship, nullptr, "SetCannonReference", nullptr, nullptr, sizeof(Starship_eventSetCannonReference_Parms), Z_Construct_UFunction_AStarship_SetCannonReference_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AStarship_SetCannonReference_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AStarship_SetCannonReference_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AStarship_SetCannonReference_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AStarship_SetCannonReference()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AStarship_SetCannonReference_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AStarship_SetTurretReference_Statics
	{
		struct Starship_eventSetTurretReference_Parms
		{
			UStarshipTurret* TurretToSet;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TurretToSet_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TurretToSet;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStarship_SetTurretReference_Statics::NewProp_TurretToSet_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AStarship_SetTurretReference_Statics::NewProp_TurretToSet = { "TurretToSet", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Starship_eventSetTurretReference_Parms, TurretToSet), Z_Construct_UClass_UStarshipTurret_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AStarship_SetTurretReference_Statics::NewProp_TurretToSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AStarship_SetTurretReference_Statics::NewProp_TurretToSet_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AStarship_SetTurretReference_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStarship_SetTurretReference_Statics::NewProp_TurretToSet,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStarship_SetTurretReference_Statics::Function_MetaDataParams[] = {
		{ "Category", "Setup" },
		{ "ModuleRelativePath", "Public/Starship.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AStarship_SetTurretReference_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AStarship, nullptr, "SetTurretReference", nullptr, nullptr, sizeof(Starship_eventSetTurretReference_Parms), Z_Construct_UFunction_AStarship_SetTurretReference_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AStarship_SetTurretReference_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AStarship_SetTurretReference_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AStarship_SetTurretReference_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AStarship_SetTurretReference()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AStarship_SetTurretReference_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AStarship_NoRegister()
	{
		return AStarship::StaticClass();
	}
	struct Z_Construct_UClass_AStarship_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LaunchSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LaunchSpeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AStarship_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_BattleStarship,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AStarship_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AStarship_Fire, "Fire" }, // 3010785135
		{ &Z_Construct_UFunction_AStarship_SetCannonReference, "SetCannonReference" }, // 1394481736
		{ &Z_Construct_UFunction_AStarship_SetTurretReference, "SetTurretReference" }, // 2768203469
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStarship_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Starship.h" },
		{ "ModuleRelativePath", "Public/Starship.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStarship_Statics::NewProp_LaunchSpeed_MetaData[] = {
		{ "Category", "Firing" },
		{ "ModuleRelativePath", "Public/Starship.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AStarship_Statics::NewProp_LaunchSpeed = { "LaunchSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStarship, LaunchSpeed), METADATA_PARAMS(Z_Construct_UClass_AStarship_Statics::NewProp_LaunchSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStarship_Statics::NewProp_LaunchSpeed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AStarship_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStarship_Statics::NewProp_LaunchSpeed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AStarship_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AStarship>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AStarship_Statics::ClassParams = {
		&AStarship::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AStarship_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AStarship_Statics::PropPointers),
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
	IMPLEMENT_CLASS(AStarship, 4027591398);
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
