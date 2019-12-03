// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BATTLESTARSHIP_Starship_generated_h
#error "Starship.generated.h already included, missing '#pragma once' in Starship.h"
#endif
#define BATTLESTARSHIP_Starship_generated_h

#define BattleStarship_Source_BattleStarship_Public_Starship_h_12_RPC_WRAPPERS
#define BattleStarship_Source_BattleStarship_Public_Starship_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define BattleStarship_Source_BattleStarship_Public_Starship_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAStarship(); \
	friend struct Z_Construct_UClass_AStarship_Statics; \
public: \
	DECLARE_CLASS(AStarship, APawn, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BattleStarship"), NO_API) \
	DECLARE_SERIALIZER(AStarship)


#define BattleStarship_Source_BattleStarship_Public_Starship_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAStarship(); \
	friend struct Z_Construct_UClass_AStarship_Statics; \
public: \
	DECLARE_CLASS(AStarship, APawn, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BattleStarship"), NO_API) \
	DECLARE_SERIALIZER(AStarship)


#define BattleStarship_Source_BattleStarship_Public_Starship_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AStarship(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AStarship) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AStarship); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AStarship); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AStarship(AStarship&&); \
	NO_API AStarship(const AStarship&); \
public:


#define BattleStarship_Source_BattleStarship_Public_Starship_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AStarship(AStarship&&); \
	NO_API AStarship(const AStarship&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AStarship); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AStarship); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AStarship)


#define BattleStarship_Source_BattleStarship_Public_Starship_h_12_PRIVATE_PROPERTY_OFFSET
#define BattleStarship_Source_BattleStarship_Public_Starship_h_9_PROLOG
#define BattleStarship_Source_BattleStarship_Public_Starship_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BattleStarship_Source_BattleStarship_Public_Starship_h_12_PRIVATE_PROPERTY_OFFSET \
	BattleStarship_Source_BattleStarship_Public_Starship_h_12_RPC_WRAPPERS \
	BattleStarship_Source_BattleStarship_Public_Starship_h_12_INCLASS \
	BattleStarship_Source_BattleStarship_Public_Starship_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BattleStarship_Source_BattleStarship_Public_Starship_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BattleStarship_Source_BattleStarship_Public_Starship_h_12_PRIVATE_PROPERTY_OFFSET \
	BattleStarship_Source_BattleStarship_Public_Starship_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	BattleStarship_Source_BattleStarship_Public_Starship_h_12_INCLASS_NO_PURE_DECLS \
	BattleStarship_Source_BattleStarship_Public_Starship_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BATTLESTARSHIP_API UClass* StaticClass<class AStarship>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BattleStarship_Source_BattleStarship_Public_Starship_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS