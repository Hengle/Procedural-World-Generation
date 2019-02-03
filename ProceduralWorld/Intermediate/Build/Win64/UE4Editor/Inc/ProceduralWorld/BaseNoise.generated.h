// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROCEDURALWORLD_BaseNoise_generated_h
#error "BaseNoise.generated.h already included, missing '#pragma once' in BaseNoise.h"
#endif
#define PROCEDURALWORLD_BaseNoise_generated_h

#define ProceduralWorld_Source_ProceduralWorld_Public_BaseNoise_h_16_RPC_WRAPPERS
#define ProceduralWorld_Source_ProceduralWorld_Public_BaseNoise_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define ProceduralWorld_Source_ProceduralWorld_Public_BaseNoise_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBaseNoise(); \
	friend PROCEDURALWORLD_API class UClass* Z_Construct_UClass_UBaseNoise(); \
public: \
	DECLARE_CLASS(UBaseNoise, UNoiseBase, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/ProceduralWorld"), NO_API) \
	DECLARE_SERIALIZER(UBaseNoise) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define ProceduralWorld_Source_ProceduralWorld_Public_BaseNoise_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUBaseNoise(); \
	friend PROCEDURALWORLD_API class UClass* Z_Construct_UClass_UBaseNoise(); \
public: \
	DECLARE_CLASS(UBaseNoise, UNoiseBase, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/ProceduralWorld"), NO_API) \
	DECLARE_SERIALIZER(UBaseNoise) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define ProceduralWorld_Source_ProceduralWorld_Public_BaseNoise_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBaseNoise(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBaseNoise) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBaseNoise); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBaseNoise); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBaseNoise(UBaseNoise&&); \
	NO_API UBaseNoise(const UBaseNoise&); \
public:


#define ProceduralWorld_Source_ProceduralWorld_Public_BaseNoise_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBaseNoise(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBaseNoise(UBaseNoise&&); \
	NO_API UBaseNoise(const UBaseNoise&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBaseNoise); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBaseNoise); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBaseNoise)


#define ProceduralWorld_Source_ProceduralWorld_Public_BaseNoise_h_16_PRIVATE_PROPERTY_OFFSET
#define ProceduralWorld_Source_ProceduralWorld_Public_BaseNoise_h_13_PROLOG
#define ProceduralWorld_Source_ProceduralWorld_Public_BaseNoise_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProceduralWorld_Source_ProceduralWorld_Public_BaseNoise_h_16_PRIVATE_PROPERTY_OFFSET \
	ProceduralWorld_Source_ProceduralWorld_Public_BaseNoise_h_16_RPC_WRAPPERS \
	ProceduralWorld_Source_ProceduralWorld_Public_BaseNoise_h_16_INCLASS \
	ProceduralWorld_Source_ProceduralWorld_Public_BaseNoise_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ProceduralWorld_Source_ProceduralWorld_Public_BaseNoise_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProceduralWorld_Source_ProceduralWorld_Public_BaseNoise_h_16_PRIVATE_PROPERTY_OFFSET \
	ProceduralWorld_Source_ProceduralWorld_Public_BaseNoise_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	ProceduralWorld_Source_ProceduralWorld_Public_BaseNoise_h_16_INCLASS_NO_PURE_DECLS \
	ProceduralWorld_Source_ProceduralWorld_Public_BaseNoise_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ProceduralWorld_Source_ProceduralWorld_Public_BaseNoise_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
