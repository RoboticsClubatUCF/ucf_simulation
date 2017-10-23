// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/OceanPluginPrivatePCH.h"
#include "Classes/OceanManager.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOceanManager() {}
// Cross Module References
	OCEANPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FWaveSetParameters();
	UPackage* Z_Construct_UPackage__Script_OceanPlugin();
	OCEANPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FWaveParameter();
	OCEANPLUGIN_API UFunction* Z_Construct_UFunction_AOceanManager_GetHeightmapPixel();
	OCEANPLUGIN_API UClass* Z_Construct_UClass_AOceanManager();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	OCEANPLUGIN_API UFunction* Z_Construct_UFunction_AOceanManager_GetWaveHeightValue();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	OCEANPLUGIN_API UFunction* Z_Construct_UFunction_AOceanManager_LoadLandscapeHeightmap();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	OCEANPLUGIN_API UClass* Z_Construct_UClass_AOceanManager_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	LANDSCAPE_API UClass* Z_Construct_UClass_ALandscape_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
// End Cross Module References
class UScriptStruct* FWaveSetParameters::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern OCEANPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FWaveSetParameters_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FWaveSetParameters, Z_Construct_UPackage__Script_OceanPlugin(), TEXT("WaveSetParameters"), sizeof(FWaveSetParameters), Get_Z_Construct_UScriptStruct_FWaveSetParameters_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FWaveSetParameters(FWaveSetParameters::StaticStruct, TEXT("/Script/OceanPlugin"), TEXT("WaveSetParameters"), false, nullptr, nullptr);
static struct FScriptStruct_OceanPlugin_StaticRegisterNativesFWaveSetParameters
{
	FScriptStruct_OceanPlugin_StaticRegisterNativesFWaveSetParameters()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("WaveSetParameters")),new UScriptStruct::TCppStructOps<FWaveSetParameters>);
	}
} ScriptStruct_OceanPlugin_StaticRegisterNativesFWaveSetParameters;
	UScriptStruct* Z_Construct_UScriptStruct_FWaveSetParameters()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_OceanPlugin();
		extern uint32 Get_Z_Construct_UScriptStruct_FWaveSetParameters_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("WaveSetParameters"), sizeof(FWaveSetParameters), Get_Z_Construct_UScriptStruct_FWaveSetParameters_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("WaveSetParameters"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FWaveSetParameters>, EStructFlags(0x00000201));
			UProperty* NewProp_Wave08 = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Wave08"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Wave08, FWaveSetParameters), 0x0010000000000005, Z_Construct_UScriptStruct_FWaveParameter());
			UProperty* NewProp_Wave07 = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Wave07"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Wave07, FWaveSetParameters), 0x0010000000000005, Z_Construct_UScriptStruct_FWaveParameter());
			UProperty* NewProp_Wave06 = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Wave06"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Wave06, FWaveSetParameters), 0x0010000000000005, Z_Construct_UScriptStruct_FWaveParameter());
			UProperty* NewProp_Wave05 = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Wave05"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Wave05, FWaveSetParameters), 0x0010000000000005, Z_Construct_UScriptStruct_FWaveParameter());
			UProperty* NewProp_Wave04 = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Wave04"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Wave04, FWaveSetParameters), 0x0010000000000005, Z_Construct_UScriptStruct_FWaveParameter());
			UProperty* NewProp_Wave03 = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Wave03"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Wave03, FWaveSetParameters), 0x0010000000000005, Z_Construct_UScriptStruct_FWaveParameter());
			UProperty* NewProp_Wave02 = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Wave02"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Wave02, FWaveSetParameters), 0x0010000000000005, Z_Construct_UScriptStruct_FWaveParameter());
			UProperty* NewProp_Wave01 = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Wave01"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Wave01, FWaveSetParameters), 0x0010000000000005, Z_Construct_UScriptStruct_FWaveParameter());
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Classes/OceanManager.h"));
			MetaData->SetValue(ReturnStruct, TEXT("ToolTip"), TEXT("* Contains the parameters necessary for a set of Gerstner waves."));
			MetaData->SetValue(NewProp_Wave08, TEXT("Category"), TEXT("WaveSetParameters"));
			MetaData->SetValue(NewProp_Wave08, TEXT("ModuleRelativePath"), TEXT("Classes/OceanManager.h"));
			MetaData->SetValue(NewProp_Wave07, TEXT("Category"), TEXT("WaveSetParameters"));
			MetaData->SetValue(NewProp_Wave07, TEXT("ModuleRelativePath"), TEXT("Classes/OceanManager.h"));
			MetaData->SetValue(NewProp_Wave06, TEXT("Category"), TEXT("WaveSetParameters"));
			MetaData->SetValue(NewProp_Wave06, TEXT("ModuleRelativePath"), TEXT("Classes/OceanManager.h"));
			MetaData->SetValue(NewProp_Wave05, TEXT("Category"), TEXT("WaveSetParameters"));
			MetaData->SetValue(NewProp_Wave05, TEXT("ModuleRelativePath"), TEXT("Classes/OceanManager.h"));
			MetaData->SetValue(NewProp_Wave04, TEXT("Category"), TEXT("WaveSetParameters"));
			MetaData->SetValue(NewProp_Wave04, TEXT("ModuleRelativePath"), TEXT("Classes/OceanManager.h"));
			MetaData->SetValue(NewProp_Wave03, TEXT("Category"), TEXT("WaveSetParameters"));
			MetaData->SetValue(NewProp_Wave03, TEXT("ModuleRelativePath"), TEXT("Classes/OceanManager.h"));
			MetaData->SetValue(NewProp_Wave02, TEXT("Category"), TEXT("WaveSetParameters"));
			MetaData->SetValue(NewProp_Wave02, TEXT("ModuleRelativePath"), TEXT("Classes/OceanManager.h"));
			MetaData->SetValue(NewProp_Wave01, TEXT("Category"), TEXT("WaveSetParameters"));
			MetaData->SetValue(NewProp_Wave01, TEXT("ModuleRelativePath"), TEXT("Classes/OceanManager.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FWaveSetParameters_CRC() { return 2001542626U; }
class UScriptStruct* FWaveParameter::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern OCEANPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FWaveParameter_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FWaveParameter, Z_Construct_UPackage__Script_OceanPlugin(), TEXT("WaveParameter"), sizeof(FWaveParameter), Get_Z_Construct_UScriptStruct_FWaveParameter_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FWaveParameter(FWaveParameter::StaticStruct, TEXT("/Script/OceanPlugin"), TEXT("WaveParameter"), false, nullptr, nullptr);
static struct FScriptStruct_OceanPlugin_StaticRegisterNativesFWaveParameter
{
	FScriptStruct_OceanPlugin_StaticRegisterNativesFWaveParameter()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("WaveParameter")),new UScriptStruct::TCppStructOps<FWaveParameter>);
	}
} ScriptStruct_OceanPlugin_StaticRegisterNativesFWaveParameter;
	UScriptStruct* Z_Construct_UScriptStruct_FWaveParameter()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_OceanPlugin();
		extern uint32 Get_Z_Construct_UScriptStruct_FWaveParameter_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("WaveParameter"), sizeof(FWaveParameter), Get_Z_Construct_UScriptStruct_FWaveParameter_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("WaveParameter"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FWaveParameter>, EStructFlags(0x00000201));
			UProperty* NewProp_TimeScale = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("TimeScale"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(TimeScale, FWaveParameter), 0x0010000000000005);
			UProperty* NewProp_Steepness = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Steepness"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(Steepness, FWaveParameter), 0x0010000000000005);
			UProperty* NewProp_Amplitude = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Amplitude"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(Amplitude, FWaveParameter), 0x0010000000000005);
			UProperty* NewProp_Length = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Length"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(Length, FWaveParameter), 0x0010000000000005);
			UProperty* NewProp_Rotation = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Rotation"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(Rotation, FWaveParameter), 0x0010000000000005);
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Classes/OceanManager.h"));
			MetaData->SetValue(ReturnStruct, TEXT("ToolTip"), TEXT("* Contains the parameters necessary for a single Gerstner wave."));
			MetaData->SetValue(NewProp_TimeScale, TEXT("Category"), TEXT("WaveParameter"));
			MetaData->SetValue(NewProp_TimeScale, TEXT("ModuleRelativePath"), TEXT("Classes/OceanManager.h"));
			MetaData->SetValue(NewProp_Steepness, TEXT("Category"), TEXT("WaveParameter"));
			MetaData->SetValue(NewProp_Steepness, TEXT("ModuleRelativePath"), TEXT("Classes/OceanManager.h"));
			MetaData->SetValue(NewProp_Amplitude, TEXT("Category"), TEXT("WaveParameter"));
			MetaData->SetValue(NewProp_Amplitude, TEXT("ModuleRelativePath"), TEXT("Classes/OceanManager.h"));
			MetaData->SetValue(NewProp_Length, TEXT("Category"), TEXT("WaveParameter"));
			MetaData->SetValue(NewProp_Length, TEXT("ModuleRelativePath"), TEXT("Classes/OceanManager.h"));
			MetaData->SetValue(NewProp_Rotation, TEXT("Category"), TEXT("WaveParameter"));
			MetaData->SetValue(NewProp_Rotation, TEXT("ModuleRelativePath"), TEXT("Classes/OceanManager.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FWaveParameter_CRC() { return 610456447U; }
	void AOceanManager::StaticRegisterNativesAOceanManager()
	{
		UClass* Class = AOceanManager::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "GetHeightmapPixel", (Native)&AOceanManager::execGetHeightmapPixel },
			{ "GetWaveHeightValue", (Native)&AOceanManager::execGetWaveHeightValue },
			{ "LoadLandscapeHeightmap", (Native)&AOceanManager::execLoadLandscapeHeightmap },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_AOceanManager_GetHeightmapPixel()
	{
		struct OceanManager_eventGetHeightmapPixel_Parms
		{
			float U;
			float V;
			FLinearColor ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_AOceanManager();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetHeightmapPixel"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x54820401, 65535, sizeof(OceanManager_eventGetHeightmapPixel_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(ReturnValue, OceanManager_eventGetHeightmapPixel_Parms), 0x0010000000000580, Z_Construct_UScriptStruct_FLinearColor());
			UProperty* NewProp_V = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("V"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(V, OceanManager_eventGetHeightmapPixel_Parms), 0x0010000000000080);
			UProperty* NewProp_U = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("U"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(U, OceanManager_eventGetHeightmapPixel_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Ocean Manager"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/OceanManager.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AOceanManager_GetWaveHeightValue()
	{
		struct OceanManager_eventGetWaveHeightValue_Parms
		{
			FVector location;
			const UWorld* World;
			bool HeightOnly;
			bool TwoIterations;
			FVector ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_AOceanManager();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetWaveHeightValue"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04C20401, 65535, sizeof(OceanManager_eventGetWaveHeightValue_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(ReturnValue, OceanManager_eventGetWaveHeightValue_Parms), 0x0010000000000580, Z_Construct_UScriptStruct_FVector());
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(TwoIterations, OceanManager_eventGetWaveHeightValue_Parms);
			UProperty* NewProp_TwoIterations = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("TwoIterations"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(TwoIterations, OceanManager_eventGetWaveHeightValue_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(TwoIterations, OceanManager_eventGetWaveHeightValue_Parms), sizeof(bool), true);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(HeightOnly, OceanManager_eventGetWaveHeightValue_Parms);
			UProperty* NewProp_HeightOnly = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("HeightOnly"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(HeightOnly, OceanManager_eventGetWaveHeightValue_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(HeightOnly, OceanManager_eventGetWaveHeightValue_Parms), sizeof(bool), true);
			UProperty* NewProp_World = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("World"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(World, OceanManager_eventGetWaveHeightValue_Parms), 0x0010000000000082, Z_Construct_UClass_UWorld_NoRegister());
			UProperty* NewProp_location = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("location"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(location, OceanManager_eventGetWaveHeightValue_Parms), 0x0010000008000182, Z_Construct_UScriptStruct_FVector());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Ocean Manager"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_HeightOnly"), TEXT("true"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_TwoIterations"), TEXT("false"));
			MetaData->SetValue(ReturnFunction, TEXT("HidePin"), TEXT("World"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/OceanManager.h"));
			MetaData->SetValue(NewProp_World, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_location, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AOceanManager_LoadLandscapeHeightmap()
	{
		struct OceanManager_eventLoadLandscapeHeightmap_Parms
		{
			UTexture2D* Tex2D;
		};
		UObject* Outer = Z_Construct_UClass_AOceanManager();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("LoadLandscapeHeightmap"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(OceanManager_eventLoadLandscapeHeightmap_Parms));
			UProperty* NewProp_Tex2D = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Tex2D"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Tex2D, OceanManager_eventLoadLandscapeHeightmap_Parms), 0x0010000000000080, Z_Construct_UClass_UTexture2D_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Ocean Manager"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/OceanManager.h"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AOceanManager_NoRegister()
	{
		return AOceanManager::StaticClass();
	}
	UClass* Z_Construct_UClass_AOceanManager()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage__Script_OceanPlugin();
			OuterClass = AOceanManager::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20900080u;

				OuterClass->LinkChild(Z_Construct_UFunction_AOceanManager_GetHeightmapPixel());
				OuterClass->LinkChild(Z_Construct_UFunction_AOceanManager_GetWaveHeightValue());
				OuterClass->LinkChild(Z_Construct_UFunction_AOceanManager_LoadLandscapeHeightmap());

				UProperty* NewProp_HeightmapTexture = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("HeightmapTexture"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(HeightmapTexture, AOceanManager), 0x0010000000000005, Z_Construct_UClass_UTexture2D_NoRegister());
				UProperty* NewProp_Landscape = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Landscape"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Landscape, AOceanManager), 0x0010000000000005, Z_Construct_UClass_ALandscape_NoRegister());
				UProperty* NewProp_ModulationPower = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ModulationPower"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(ModulationPower, AOceanManager), 0x0010000000000005);
				UProperty* NewProp_ModulationMaxHeight = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ModulationMaxHeight"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(ModulationMaxHeight, AOceanManager), 0x0010000000000005);
				UProperty* NewProp_ModulationStartHeight = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ModulationStartHeight"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(ModulationStartHeight, AOceanManager), 0x0010000000000005);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bEnableLandscapeModulation, AOceanManager);
				UProperty* NewProp_bEnableLandscapeModulation = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bEnableLandscapeModulation"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bEnableLandscapeModulation, AOceanManager), 0x0010000000000005, CPP_BOOL_PROPERTY_BITMASK(bEnableLandscapeModulation, AOceanManager), sizeof(bool), true);
				UProperty* NewProp_NetWorkTimeOffset = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("NetWorkTimeOffset"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(NetWorkTimeOffset, AOceanManager), 0x0010000000000004);
				UProperty* NewProp_WaveSetOffsetsOverride = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("WaveSetOffsetsOverride"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(WaveSetOffsetsOverride, AOceanManager), 0x0010000000000005);
				UProperty* NewProp_WaveSetOffsetsOverride_Inner = new(EC_InternalUseOnlyConstructor, NewProp_WaveSetOffsetsOverride, TEXT("WaveSetOffsetsOverride"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FWaveSetParameters());
				UProperty* NewProp_WaveClusters = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("WaveClusters"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(WaveClusters, AOceanManager), 0x0010000000000005);
				UProperty* NewProp_WaveClusters_Inner = new(EC_InternalUseOnlyConstructor, NewProp_WaveClusters, TEXT("WaveClusters"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FWaveParameter());
				UProperty* NewProp_DistanceCheck = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("DistanceCheck"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(DistanceCheck, AOceanManager), 0x0010000000000005);
				UProperty* NewProp_GlobalWaveAmplitude = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("GlobalWaveAmplitude"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(GlobalWaveAmplitude, AOceanManager), 0x0010000000000005);
				UProperty* NewProp_GlobalWaveSpeed = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("GlobalWaveSpeed"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(GlobalWaveSpeed, AOceanManager), 0x0010000000000005);
				UProperty* NewProp_GlobalWaveDirection = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("GlobalWaveDirection"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(GlobalWaveDirection, AOceanManager), 0x0010000000000005, Z_Construct_UScriptStruct_FVector2D());
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(EnableGerstnerWaves, AOceanManager);
				UProperty* NewProp_EnableGerstnerWaves = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("EnableGerstnerWaves"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(EnableGerstnerWaves, AOceanManager), 0x0010000000000005, CPP_BOOL_PROPERTY_BITMASK(EnableGerstnerWaves, AOceanManager), sizeof(bool), true);
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AOceanManager_GetHeightmapPixel(), "GetHeightmapPixel"); // 2239893821
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AOceanManager_GetWaveHeightValue(), "GetWaveHeightValue"); // 705836264
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AOceanManager_LoadLandscapeHeightmap(), "LoadLandscapeHeightmap"); // 91572982
				static TCppClassTypeInfo<TCppClassTypeTraits<AOceanManager> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintType"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("OceanManager.h"));
				MetaData->SetValue(OuterClass, TEXT("IsBlueprintBase"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Classes/OceanManager.h"));
				MetaData->SetValue(OuterClass, TEXT("ToolTip"), TEXT("OceanManager calculates the Gerstner waves in code, while the Material uses it's own implementation in a MaterialFunction.\nTODO: Investigate whether a single implementation could be used to increase performance."));
				MetaData->SetValue(NewProp_HeightmapTexture, TEXT("Category"), TEXT("OceanManager"));
				MetaData->SetValue(NewProp_HeightmapTexture, TEXT("ModuleRelativePath"), TEXT("Classes/OceanManager.h"));
				MetaData->SetValue(NewProp_Landscape, TEXT("Category"), TEXT("OceanManager"));
				MetaData->SetValue(NewProp_Landscape, TEXT("ModuleRelativePath"), TEXT("Classes/OceanManager.h"));
				MetaData->SetValue(NewProp_ModulationPower, TEXT("Category"), TEXT("OceanManager"));
				MetaData->SetValue(NewProp_ModulationPower, TEXT("ModuleRelativePath"), TEXT("Classes/OceanManager.h"));
				MetaData->SetValue(NewProp_ModulationMaxHeight, TEXT("Category"), TEXT("OceanManager"));
				MetaData->SetValue(NewProp_ModulationMaxHeight, TEXT("ModuleRelativePath"), TEXT("Classes/OceanManager.h"));
				MetaData->SetValue(NewProp_ModulationStartHeight, TEXT("Category"), TEXT("OceanManager"));
				MetaData->SetValue(NewProp_ModulationStartHeight, TEXT("ModuleRelativePath"), TEXT("Classes/OceanManager.h"));
				MetaData->SetValue(NewProp_bEnableLandscapeModulation, TEXT("Category"), TEXT("OceanManager"));
				MetaData->SetValue(NewProp_bEnableLandscapeModulation, TEXT("ModuleRelativePath"), TEXT("Classes/OceanManager.h"));
				MetaData->SetValue(NewProp_bEnableLandscapeModulation, TEXT("ToolTip"), TEXT("Landscape height modulation vars."));
				MetaData->SetValue(NewProp_NetWorkTimeOffset, TEXT("Category"), TEXT("OceanManager"));
				MetaData->SetValue(NewProp_NetWorkTimeOffset, TEXT("ModuleRelativePath"), TEXT("Classes/OceanManager.h"));
				MetaData->SetValue(NewProp_WaveSetOffsetsOverride, TEXT("Category"), TEXT("OceanManager"));
				MetaData->SetValue(NewProp_WaveSetOffsetsOverride, TEXT("ModuleRelativePath"), TEXT("Classes/OceanManager.h"));
				MetaData->SetValue(NewProp_WaveSetOffsetsOverride, TEXT("ToolTip"), TEXT("Individual Gerstner wave settings.\n      (leave blank to use the default offsets)."));
				MetaData->SetValue(NewProp_WaveClusters, TEXT("Category"), TEXT("OceanManager"));
				MetaData->SetValue(NewProp_WaveClusters, TEXT("ModuleRelativePath"), TEXT("Classes/OceanManager.h"));
				MetaData->SetValue(NewProp_WaveClusters, TEXT("ToolTip"), TEXT("Median Gerstner wave settings\n      (only 1 cluster is used in the material by default)."));
				MetaData->SetValue(NewProp_DistanceCheck, TEXT("Category"), TEXT("OceanManager"));
				MetaData->SetValue(NewProp_DistanceCheck, TEXT("ModuleRelativePath"), TEXT("Classes/OceanManager.h"));
				MetaData->SetValue(NewProp_DistanceCheck, TEXT("ToolTip"), TEXT("Optimization:\n      * If the distance of a buoyant point to base sea level exceeds DistanceCheck,\n      * skip the Gerstner calculations and return base sea level."));
				MetaData->SetValue(NewProp_GlobalWaveAmplitude, TEXT("Category"), TEXT("OceanManager"));
				MetaData->SetValue(NewProp_GlobalWaveAmplitude, TEXT("ModuleRelativePath"), TEXT("Classes/OceanManager.h"));
				MetaData->SetValue(NewProp_GlobalWaveAmplitude, TEXT("ToolTip"), TEXT("The global amplitude multiplier of the waves."));
				MetaData->SetValue(NewProp_GlobalWaveSpeed, TEXT("Category"), TEXT("OceanManager"));
				MetaData->SetValue(NewProp_GlobalWaveSpeed, TEXT("ModuleRelativePath"), TEXT("Classes/OceanManager.h"));
				MetaData->SetValue(NewProp_GlobalWaveSpeed, TEXT("ToolTip"), TEXT("The global speed multiplier of the waves."));
				MetaData->SetValue(NewProp_GlobalWaveDirection, TEXT("Category"), TEXT("OceanManager"));
				MetaData->SetValue(NewProp_GlobalWaveDirection, TEXT("ModuleRelativePath"), TEXT("Classes/OceanManager.h"));
				MetaData->SetValue(NewProp_GlobalWaveDirection, TEXT("ToolTip"), TEXT("The global direction the waves travel."));
				MetaData->SetValue(NewProp_EnableGerstnerWaves, TEXT("Category"), TEXT("OceanManager"));
				MetaData->SetValue(NewProp_EnableGerstnerWaves, TEXT("ModuleRelativePath"), TEXT("Classes/OceanManager.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AOceanManager, 2956697448);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AOceanManager(Z_Construct_UClass_AOceanManager, &AOceanManager::StaticClass, TEXT("/Script/OceanPlugin"), TEXT("AOceanManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AOceanManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
