// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/OceanPluginPrivatePCH.h"
#include "Classes/BuoyantDestructible.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBuoyantDestructible() {}
// Cross Module References
	OCEANPLUGIN_API UClass* Z_Construct_UClass_ABuoyantDestructible_NoRegister();
	OCEANPLUGIN_API UClass* Z_Construct_UClass_ABuoyantDestructible();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_OceanPlugin();
	OCEANPLUGIN_API UClass* Z_Construct_UClass_UBuoyantDestructibleComponent_NoRegister();
// End Cross Module References
	void ABuoyantDestructible::StaticRegisterNativesABuoyantDestructible()
	{
	}
	UClass* Z_Construct_UClass_ABuoyantDestructible_NoRegister()
	{
		return ABuoyantDestructible::StaticClass();
	}
	UClass* Z_Construct_UClass_ABuoyantDestructible()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage__Script_OceanPlugin();
			OuterClass = ABuoyantDestructible::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20900080u;


				UProperty* NewProp_BuoyantDestructibleComponent = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("BuoyantDestructibleComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(BuoyantDestructibleComponent, ABuoyantDestructible), 0x00100000000a001d, Z_Construct_UClass_UBuoyantDestructibleComponent_NoRegister());
				static TCppClassTypeInfo<TCppClassTypeTraits<ABuoyantDestructible> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("BuoyantDestructible.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Classes/BuoyantDestructible.h"));
				MetaData->SetValue(NewProp_BuoyantDestructibleComponent, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_BuoyantDestructibleComponent, TEXT("Category"), TEXT("BuoyantDestructible"));
				MetaData->SetValue(NewProp_BuoyantDestructibleComponent, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_BuoyantDestructibleComponent, TEXT("ExposeFunctionCategories"), TEXT("Destruction,Components|Destructible,Buoyancy Settings,Advanced"));
				MetaData->SetValue(NewProp_BuoyantDestructibleComponent, TEXT("ModuleRelativePath"), TEXT("Classes/BuoyantDestructible.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABuoyantDestructible, 3454620699);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABuoyantDestructible(Z_Construct_UClass_ABuoyantDestructible, &ABuoyantDestructible::StaticClass, TEXT("/Script/OceanPlugin"), TEXT("ABuoyantDestructible"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABuoyantDestructible);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
