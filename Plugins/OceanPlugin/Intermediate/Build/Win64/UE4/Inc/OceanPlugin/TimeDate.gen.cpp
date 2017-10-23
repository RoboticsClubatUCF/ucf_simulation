// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/OceanPluginPrivatePCH.h"
#include "Classes/Sky/TimeDate.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTimeDate() {}
// Cross Module References
	OCEANPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FTimeDate();
	UPackage* Z_Construct_UPackage__Script_OceanPlugin();
// End Cross Module References
class UScriptStruct* FTimeDate::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern OCEANPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FTimeDate_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTimeDate, Z_Construct_UPackage__Script_OceanPlugin(), TEXT("TimeDate"), sizeof(FTimeDate), Get_Z_Construct_UScriptStruct_FTimeDate_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTimeDate(FTimeDate::StaticStruct, TEXT("/Script/OceanPlugin"), TEXT("TimeDate"), false, nullptr, nullptr);
static struct FScriptStruct_OceanPlugin_StaticRegisterNativesFTimeDate
{
	FScriptStruct_OceanPlugin_StaticRegisterNativesFTimeDate()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TimeDate")),new UScriptStruct::TCppStructOps<FTimeDate>);
	}
} ScriptStruct_OceanPlugin_StaticRegisterNativesFTimeDate;
	UScriptStruct* Z_Construct_UScriptStruct_FTimeDate()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_OceanPlugin();
		extern uint32 Get_Z_Construct_UScriptStruct_FTimeDate_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TimeDate"), sizeof(FTimeDate), Get_Z_Construct_UScriptStruct_FTimeDate_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("TimeDate"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FTimeDate>, EStructFlags(0x00000001));
			UProperty* NewProp_Year = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Year"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(Year, FTimeDate), 0x0010000000000005);
			UProperty* NewProp_Month = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Month"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(Month, FTimeDate), 0x0010000000000005);
			UProperty* NewProp_Day = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Day"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(Day, FTimeDate), 0x0010000000000005);
			UProperty* NewProp_Hour = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Hour"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(Hour, FTimeDate), 0x0010000000000005);
			UProperty* NewProp_Minute = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Minute"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(Minute, FTimeDate), 0x0010000000000005);
			UProperty* NewProp_Second = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Second"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(Second, FTimeDate), 0x0010000000000005);
			UProperty* NewProp_Millisecond = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Millisecond"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(Millisecond, FTimeDate), 0x0010000000000005);
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Classes/Sky/TimeDate.h"));
			MetaData->SetValue(NewProp_Year, TEXT("Category"), TEXT("Time"));
			MetaData->SetValue(NewProp_Year, TEXT("ModuleRelativePath"), TEXT("Classes/Sky/TimeDate.h"));
			MetaData->SetValue(NewProp_Year, TEXT("ToolTip"), TEXT("The year value for this time and date."));
			MetaData->SetValue(NewProp_Month, TEXT("Category"), TEXT("Time"));
			MetaData->SetValue(NewProp_Month, TEXT("ModuleRelativePath"), TEXT("Classes/Sky/TimeDate.h"));
			MetaData->SetValue(NewProp_Month, TEXT("ToolTip"), TEXT("The month value for this time and date."));
			MetaData->SetValue(NewProp_Day, TEXT("Category"), TEXT("Time"));
			MetaData->SetValue(NewProp_Day, TEXT("ModuleRelativePath"), TEXT("Classes/Sky/TimeDate.h"));
			MetaData->SetValue(NewProp_Day, TEXT("ToolTip"), TEXT("The day value for this time and date."));
			MetaData->SetValue(NewProp_Hour, TEXT("Category"), TEXT("Time"));
			MetaData->SetValue(NewProp_Hour, TEXT("ModuleRelativePath"), TEXT("Classes/Sky/TimeDate.h"));
			MetaData->SetValue(NewProp_Hour, TEXT("ToolTip"), TEXT("The hour value for this time and date."));
			MetaData->SetValue(NewProp_Minute, TEXT("Category"), TEXT("Time"));
			MetaData->SetValue(NewProp_Minute, TEXT("ModuleRelativePath"), TEXT("Classes/Sky/TimeDate.h"));
			MetaData->SetValue(NewProp_Minute, TEXT("ToolTip"), TEXT("The minute value for this time and date."));
			MetaData->SetValue(NewProp_Second, TEXT("Category"), TEXT("Time"));
			MetaData->SetValue(NewProp_Second, TEXT("ModuleRelativePath"), TEXT("Classes/Sky/TimeDate.h"));
			MetaData->SetValue(NewProp_Second, TEXT("ToolTip"), TEXT("The second value for this time and date."));
			MetaData->SetValue(NewProp_Millisecond, TEXT("Category"), TEXT("Time"));
			MetaData->SetValue(NewProp_Millisecond, TEXT("ModuleRelativePath"), TEXT("Classes/Sky/TimeDate.h"));
			MetaData->SetValue(NewProp_Millisecond, TEXT("ToolTip"), TEXT("The millisecond value for this time and date."));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTimeDate_CRC() { return 2087800481U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
