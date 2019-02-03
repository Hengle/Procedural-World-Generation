// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Frequency.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFrequency() {}
// Cross Module References
	PROCEDURALWORLD_API UClass* Z_Construct_UClass_UFrequency_NoRegister();
	PROCEDURALWORLD_API UClass* Z_Construct_UClass_UFrequency();
	PROCEDURALWORLD_API UClass* Z_Construct_UClass_UNoiseBase();
	UPackage* Z_Construct_UPackage__Script_ProceduralWorld();
// End Cross Module References
	void UFrequency::StaticRegisterNativesUFrequency()
	{
	}
	UClass* Z_Construct_UClass_UFrequency_NoRegister()
	{
		return UFrequency::StaticClass();
	}
	UClass* Z_Construct_UClass_UFrequency()
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
				{ "IncludePath", "Frequency.h" },
				{ "ModuleRelativePath", "Public/Frequency.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UFrequency>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UFrequency::StaticClass,
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
	IMPLEMENT_CLASS(UFrequency, 4139366039);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFrequency(Z_Construct_UClass_UFrequency, &UFrequency::StaticClass, TEXT("/Script/ProceduralWorld"), TEXT("UFrequency"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFrequency);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
