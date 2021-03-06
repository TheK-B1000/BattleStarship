// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BATTLESTARSHIP_Projectile_generated_h
#error "Projectile.generated.h already included, missing '#pragma once' in Projectile.h"
#endif
#define BATTLESTARSHIP_Projectile_generated_h

#define BattleStarship_Source_BattleStarship_Public_Projectile_h_12_SPARSE_DATA
#define BattleStarship_Source_BattleStarship_Public_Projectile_h_12_RPC_WRAPPERS
#define BattleStarship_Source_BattleStarship_Public_Projectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define BattleStarship_Source_BattleStarship_Public_Projectile_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAProjectile(); \
	friend struct Z_Construct_UClass_AProjectile_Statics; \
public: \
	DECLARE_CLASS(AProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BattleStarship"), NO_API) \
	DECLARE_SERIALIZER(AProjectile)


#define BattleStarship_Source_BattleStarship_Public_Projectile_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAProjectile(); \
	friend struct Z_Construct_UClass_AProjectile_Statics; \
public: \
	DECLARE_CLASS(AProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BattleStarship"), NO_API) \
	DECLARE_SERIALIZER(AProjectile)


#define BattleStarship_Source_BattleStarship_Public_Projectile_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProjectile(AProjectile&&); \
	NO_API AProjectile(const AProjectile&); \
public:


#define BattleStarship_Source_BattleStarship_Public_Projectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProjectile(AProjectile&&); \
	NO_API AProjectile(const AProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AProjectile)


#define BattleStarship_Source_BattleStarship_Public_Projectile_h_12_PRIVATE_PROPERTY_OFFSET
#define BattleStarship_Source_BattleStarship_Public_Projectile_h_9_PROLOG
#define BattleStarship_Source_BattleStarship_Public_Projectile_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BattleStarship_Source_BattleStarship_Public_Projectile_h_12_PRIVATE_PROPERTY_OFFSET \
	BattleStarship_Source_BattleStarship_Public_Projectile_h_12_SPARSE_DATA \
	BattleStarship_Source_BattleStarship_Public_Projectile_h_12_RPC_WRAPPERS \
	BattleStarship_Source_BattleStarship_Public_Projectile_h_12_INCLASS \
	BattleStarship_Source_BattleStarship_Public_Projectile_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BattleStarship_Source_BattleStarship_Public_Projectile_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BattleStarship_Source_BattleStarship_Public_Projectile_h_12_PRIVATE_PROPERTY_OFFSET \
	BattleStarship_Source_BattleStarship_Public_Projectile_h_12_SPARSE_DATA \
	BattleStarship_Source_BattleStarship_Public_Projectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	BattleStarship_Source_BattleStarship_Public_Projectile_h_12_INCLASS_NO_PURE_DECLS \
	BattleStarship_Source_BattleStarship_Public_Projectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BATTLESTARSHIP_API UClass* StaticClass<class AProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BattleStarship_Source_BattleStarship_Public_Projectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
