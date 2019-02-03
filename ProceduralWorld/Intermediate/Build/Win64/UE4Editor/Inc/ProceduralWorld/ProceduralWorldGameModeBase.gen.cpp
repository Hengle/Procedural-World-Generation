// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "ProceduralWorldGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProceduralWorldGameModeBase() {}
// Cross Module References
	PROCEDURALWORLD_API UClass* Z_Construct_UClass_AProceduralWorldGameModeBase_NoRegister();
	PROCEDURALWORLD_API UClass* Z_Construct_UClass_AProceduralWorldGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_ProceduralWorld();
// End Cross Module References
	void AProceduralWorldGameModeBase::StaticRegisterNativesAProceduralWorldGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AProceduralWorldGameModeBase_NoRegister()
	{
		return AProceduralWorldGameModeBase::StaticClass();
	}
	UClass* Z_Construct_UClass_AProceduralWorldGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AGameModeBase,
				(UObject* (*)())Z_Construct_UPackage__Script_ProceduralWorld,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "ProceduralWorldGameModeBase.h" },
				{ "ModuleRelativePath", "ProceduralWorldGameModeBase.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AProceduralWorldGameModeBase>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AProceduralWorldGameModeBase::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900288u,
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
	IMPLEMENT_CLASS(AProceduralWorldGameModeBase, 1682741432);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AProceduralWorldGameModeBase(Z_Construct_UClass_AProceduralWorldGameModeBase, &AProceduralWorldGameModeBase::StaticClass, TEXT("/Script/ProceduralWorld"), TEXT("AProceduralWorldGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProceduralWorldGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
