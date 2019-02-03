// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/GeneratedWorld.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeneratedWorld() {}
// Cross Module References
	PROCEDURALWORLD_API UClass* Z_Construct_UClass_AGeneratedWorld_NoRegister();
	PROCEDURALWORLD_API UClass* Z_Construct_UClass_AGeneratedWorld();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ProceduralWorld();
	PROCEDURALWORLD_API UClass* Z_Construct_UClass_UNoiseBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
// End Cross Module References
	void AGeneratedWorld::StaticRegisterNativesAGeneratedWorld()
	{
	}
	UClass* Z_Construct_UClass_AGeneratedWorld_NoRegister()
	{
		return AGeneratedWorld::StaticClass();
	}
	UClass* Z_Construct_UClass_AGeneratedWorld()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
				(UObject* (*)())Z_Construct_UPackage__Script_ProceduralWorld,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "GeneratedWorld.h" },
				{ "ModuleRelativePath", "Public/GeneratedWorld.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_noisePatterns_MetaData[] = {
				{ "Category", "GeneratedWorld" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/GeneratedWorld.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_noisePatterns = { UE4CodeGen_Private::EPropertyClass::Array, "noisePatterns", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000000009, 1, nullptr, STRUCT_OFFSET(AGeneratedWorld, noisePatterns), METADATA_PARAMS(NewProp_noisePatterns_MetaData, ARRAY_COUNT(NewProp_noisePatterns_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_noisePatterns_Inner_MetaData[] = {
				{ "Category", "GeneratedWorld" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/GeneratedWorld.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_noisePatterns_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "noisePatterns", RF_Public|RF_Transient|RF_MarkAsNative, 0x0002000000080008, 1, nullptr, 0, Z_Construct_UClass_UNoiseBase_NoRegister, METADATA_PARAMS(NewProp_noisePatterns_Inner_MetaData, ARRAY_COUNT(NewProp_noisePatterns_Inner_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_material_MetaData[] = {
				{ "Category", "GeneratedWorld" },
				{ "ModuleRelativePath", "Public/GeneratedWorld.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_material = { UE4CodeGen_Private::EPropertyClass::Object, "material", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AGeneratedWorld, material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(NewProp_material_MetaData, ARRAY_COUNT(NewProp_material_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_frequency_MetaData[] = {
				{ "Category", "GeneratedWorld" },
				{ "ModuleRelativePath", "Public/GeneratedWorld.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_frequency = { UE4CodeGen_Private::EPropertyClass::Float, "frequency", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AGeneratedWorld, frequency), METADATA_PARAMS(NewProp_frequency_MetaData, ARRAY_COUNT(NewProp_frequency_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_elevation_MetaData[] = {
				{ "Category", "GeneratedWorld" },
				{ "ModuleRelativePath", "Public/GeneratedWorld.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_elevation = { UE4CodeGen_Private::EPropertyClass::Int, "elevation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AGeneratedWorld, elevation), METADATA_PARAMS(NewProp_elevation_MetaData, ARRAY_COUNT(NewProp_elevation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_baseNoiseHeight_MetaData[] = {
				{ "Category", "GeneratedWorld" },
				{ "ModuleRelativePath", "Public/GeneratedWorld.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_baseNoiseHeight = { UE4CodeGen_Private::EPropertyClass::Int, "baseNoiseHeight", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AGeneratedWorld, baseNoiseHeight), METADATA_PARAMS(NewProp_baseNoiseHeight_MetaData, ARRAY_COUNT(NewProp_baseNoiseHeight_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_baseNoise_MetaData[] = {
				{ "Category", "GeneratedWorld" },
				{ "ModuleRelativePath", "Public/GeneratedWorld.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_baseNoise = { UE4CodeGen_Private::EPropertyClass::Float, "baseNoise", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AGeneratedWorld, baseNoise), METADATA_PARAMS(NewProp_baseNoise_MetaData, ARRAY_COUNT(NewProp_baseNoise_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_chunkZ_MetaData[] = {
				{ "Category", "GeneratedWorld" },
				{ "ModuleRelativePath", "Public/GeneratedWorld.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_chunkZ = { UE4CodeGen_Private::EPropertyClass::Int, "chunkZ", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AGeneratedWorld, chunkZ), METADATA_PARAMS(NewProp_chunkZ_MetaData, ARRAY_COUNT(NewProp_chunkZ_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_chunkY_MetaData[] = {
				{ "Category", "GeneratedWorld" },
				{ "ModuleRelativePath", "Public/GeneratedWorld.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_chunkY = { UE4CodeGen_Private::EPropertyClass::Int, "chunkY", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AGeneratedWorld, chunkY), METADATA_PARAMS(NewProp_chunkY_MetaData, ARRAY_COUNT(NewProp_chunkY_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_chunkX_MetaData[] = {
				{ "Category", "GeneratedWorld" },
				{ "ModuleRelativePath", "Public/GeneratedWorld.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_chunkX = { UE4CodeGen_Private::EPropertyClass::Int, "chunkX", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AGeneratedWorld, chunkX), METADATA_PARAMS(NewProp_chunkX_MetaData, ARRAY_COUNT(NewProp_chunkX_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_worldY_MetaData[] = {
				{ "Category", "GeneratedWorld" },
				{ "ModuleRelativePath", "Public/GeneratedWorld.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_worldY = { UE4CodeGen_Private::EPropertyClass::Int, "worldY", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AGeneratedWorld, worldY), METADATA_PARAMS(NewProp_worldY_MetaData, ARRAY_COUNT(NewProp_worldY_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_worldX_MetaData[] = {
				{ "Category", "GeneratedWorld" },
				{ "ModuleRelativePath", "Public/GeneratedWorld.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_worldX = { UE4CodeGen_Private::EPropertyClass::Int, "worldX", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AGeneratedWorld, worldX), METADATA_PARAMS(NewProp_worldX_MetaData, ARRAY_COUNT(NewProp_worldX_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_noisePatterns,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_noisePatterns_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_material,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_frequency,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_elevation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_baseNoiseHeight,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_baseNoise,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_chunkZ,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_chunkY,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_chunkX,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_worldY,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_worldX,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AGeneratedWorld>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AGeneratedWorld::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGeneratedWorld, 2912884461);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGeneratedWorld(Z_Construct_UClass_AGeneratedWorld, &AGeneratedWorld::StaticClass, TEXT("/Script/ProceduralWorld"), TEXT("AGeneratedWorld"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGeneratedWorld);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
