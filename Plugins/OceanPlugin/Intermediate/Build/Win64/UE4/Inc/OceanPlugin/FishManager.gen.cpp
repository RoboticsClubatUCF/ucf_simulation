// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/OceanPluginPrivatePCH.h"
#include "Classes/Fish/FishManager.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFishManager() {}
// Cross Module References
	OCEANPLUGIN_API UClass* Z_Construct_UClass_AFishManager_NoRegister();
	OCEANPLUGIN_API UClass* Z_Construct_UClass_AFishManager();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_OceanPlugin();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	void AFishManager::StaticRegisterNativesAFishManager()
	{
	}
	UClass* Z_Construct_UClass_AFishManager_NoRegister()
	{
		return AFishManager::StaticClass();
	}
	UClass* Z_Construct_UClass_AFishManager()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage__Script_OceanPlugin();
			OuterClass = AFishManager::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20800080u;


				UProperty* NewProp_playerType = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("playerType"), RF_Public|RF_Transient|RF_MarkAsNative) UClassProperty(CPP_PROPERTY_BASE(playerType, AFishManager), 0x0010000000000005, Z_Construct_UClass_UObject_NoRegister(), Z_Construct_UClass_UClass());
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(DebugMode, AFishManager);
				UProperty* NewProp_DebugMode = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("DebugMode"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(DebugMode, AFishManager), 0x0010000000000005, CPP_BOOL_PROPERTY_BITMASK(DebugMode, AFishManager), sizeof(bool), true);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(attachToPlayer, AFishManager);
				UProperty* NewProp_attachToPlayer = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("attachToPlayer"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(attachToPlayer, AFishManager), 0x0010000000000005, CPP_BOOL_PROPERTY_BITMASK(attachToPlayer, AFishManager), sizeof(bool), true);
				UProperty* NewProp_underwaterBoxLength = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("underwaterBoxLength"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(underwaterBoxLength, AFishManager), 0x0010000000000005);
				UProperty* NewProp_maxZ = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("maxZ"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(maxZ, AFishManager), 0x0010000000000005);
				UProperty* NewProp_minZ = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("minZ"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(minZ, AFishManager), 0x0010000000000005);
				UProperty* NewProp_numInFlock = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("numInFlock"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(numInFlock, AFishManager), 0x0010000000000005);
				UProperty* NewProp_numInFlock_Inner = new(EC_InternalUseOnlyConstructor, NewProp_numInFlock, TEXT("numInFlock"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
				UProperty* NewProp_flockTypes = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("flockTypes"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(flockTypes, AFishManager), 0x0010000000000005);
				UProperty* NewProp_flockTypes_Inner = new(EC_InternalUseOnlyConstructor, NewProp_flockTypes, TEXT("flockTypes"), RF_Public|RF_Transient|RF_MarkAsNative) UClassProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UClass_UObject_NoRegister(), Z_Construct_UClass_UClass());
				static TCppClassTypeInfo<TCppClassTypeTraits<AFishManager> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("Fish/FishManager.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Classes/Fish/FishManager.h"));
				MetaData->SetValue(OuterClass, TEXT("ObjectInitializerConstructorDeclared"), TEXT(""));
				MetaData->SetValue(NewProp_playerType, TEXT("Category"), TEXT("Config"));
				MetaData->SetValue(NewProp_playerType, TEXT("ModuleRelativePath"), TEXT("Classes/Fish/FishManager.h"));
				MetaData->SetValue(NewProp_playerType, TEXT("ToolTip"), TEXT("Player Type"));
				MetaData->SetValue(NewProp_DebugMode, TEXT("Category"), TEXT("Config"));
				MetaData->SetValue(NewProp_DebugMode, TEXT("ModuleRelativePath"), TEXT("Classes/Fish/FishManager.h"));
				MetaData->SetValue(NewProp_DebugMode, TEXT("ToolTip"), TEXT("Player Type"));
				MetaData->SetValue(NewProp_attachToPlayer, TEXT("Category"), TEXT("Config"));
				MetaData->SetValue(NewProp_attachToPlayer, TEXT("ModuleRelativePath"), TEXT("Classes/Fish/FishManager.h"));
				MetaData->SetValue(NewProp_attachToPlayer, TEXT("ToolTip"), TEXT("Attach fish manager to player?"));
				MetaData->SetValue(NewProp_underwaterBoxLength, TEXT("Category"), TEXT("Config"));
				MetaData->SetValue(NewProp_underwaterBoxLength, TEXT("ModuleRelativePath"), TEXT("Classes/Fish/FishManager.h"));
				MetaData->SetValue(NewProp_underwaterBoxLength, TEXT("ToolTip"), TEXT("Length of underwater box"));
				MetaData->SetValue(NewProp_maxZ, TEXT("Category"), TEXT("Config"));
				MetaData->SetValue(NewProp_maxZ, TEXT("ModuleRelativePath"), TEXT("Classes/Fish/FishManager.h"));
				MetaData->SetValue(NewProp_maxZ, TEXT("ToolTip"), TEXT("max Z of volume that is considered underwater"));
				MetaData->SetValue(NewProp_minZ, TEXT("Category"), TEXT("Config"));
				MetaData->SetValue(NewProp_minZ, TEXT("ModuleRelativePath"), TEXT("Classes/Fish/FishManager.h"));
				MetaData->SetValue(NewProp_minZ, TEXT("ToolTip"), TEXT("min Z of volume that is considered underwater"));
				MetaData->SetValue(NewProp_numInFlock, TEXT("Category"), TEXT("Config"));
				MetaData->SetValue(NewProp_numInFlock, TEXT("ModuleRelativePath"), TEXT("Classes/Fish/FishManager.h"));
				MetaData->SetValue(NewProp_numInFlock, TEXT("ToolTip"), TEXT("# of fish in respective flock"));
				MetaData->SetValue(NewProp_flockTypes, TEXT("Category"), TEXT("Config"));
				MetaData->SetValue(NewProp_flockTypes, TEXT("ModuleRelativePath"), TEXT("Classes/Fish/FishManager.h"));
				MetaData->SetValue(NewProp_flockTypes, TEXT("ToolTip"), TEXT("Type of flocks to spawn"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFishManager, 197663820);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFishManager(Z_Construct_UClass_AFishManager, &AFishManager::StaticClass, TEXT("/Script/OceanPlugin"), TEXT("AFishManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFishManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
