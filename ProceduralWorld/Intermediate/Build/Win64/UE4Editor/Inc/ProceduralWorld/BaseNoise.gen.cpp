// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/BaseNoise.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseNoise() {}
// Cross Module References
	PROCEDURALWORLD_API UClass* Z_Construct_UClass_UBaseNoise_NoRegister();
	PROCEDURALWORLD_API UClass* Z_Construct_UClass_UBaseNoise();
	PROCEDURALWORLD_API UClass* Z_Construct_UClass_UNoiseBase();
	UPackage* Z_Construct_UPackage__Script_ProceduralWorld();
// End Cross Module References
	void UBaseNoise::StaticRegisterNativesUBaseNoise()
	{
	}
	UClass* Z_Construct_UClass_UBaseNoise_NoRegister()
	{
		return UBaseNoise::StaticClass();
	}
	UClass* Z_Construct_UClass_UBaseNoise()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UNoiseBase,
				(UObject* (*)())Z_Construct_UPackage__Script_ProceduralWorld,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "BaseNoise.h" },
				{ "ModuleRelativePath", "Public/BaseNoise.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UBaseNoise>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UBaseNoise::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00101080u,
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
	IMPLEMENT_CLASS(UBaseNoise, 2011087988);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBaseNoise(Z_Construct_UClass_UBaseNoise, &UBaseNoise::StaticClass, TEXT("/Script/ProceduralWorld"), TEXT("UBaseNoise"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseNoise);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
