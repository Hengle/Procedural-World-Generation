// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/WorldChunkStats.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorldChunkStats() {}
// Cross Module References
	PROCEDURALWORLD_API UClass* Z_Construct_UClass_UWorldChunkStats_NoRegister();
	PROCEDURALWORLD_API UClass* Z_Construct_UClass_UWorldChunkStats();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ProceduralWorld();
// End Cross Module References
	void UWorldChunkStats::StaticRegisterNativesUWorldChunkStats()
	{
	}
	UClass* Z_Construct_UClass_UWorldChunkStats_NoRegister()
	{
		return UWorldChunkStats::StaticClass();
	}
	UClass* Z_Construct_UClass_UWorldChunkStats()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_ProceduralWorld,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IncludePath", "WorldChunkStats.h" },
				{ "ModuleRelativePath", "Public/WorldChunkStats.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UWorldChunkStats>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UWorldChunkStats::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100080u,
				nullptr, 0,
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWorldChunkStats, 3367193258);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWorldChunkStats(Z_Construct_UClass_UWorldChunkStats, &UWorldChunkStats::StaticClass, TEXT("/Script/ProceduralWorld"), TEXT("UWorldChunkStats"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWorldChunkStats);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
