// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/OceanPluginPrivatePCH.h"
#include "Classes/Sky/TimeManager.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTimeManager() {}
// Cross Module References
	OCEANPLUGIN_API UFunction* Z_Construct_UFunction_ATimeManager_CalculateMoonAngle();
	OCEANPLUGIN_API UClass* Z_Construct_UClass_ATimeManager();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	OCEANPLUGIN_API UFunction* Z_Construct_UFunction_ATimeManager_CalculateMoonPhase();
	OCEANPLUGIN_API UFunction* Z_Construct_UFunction_ATimeManager_CalculateSunAngle();
	OCEANPLUGIN_API UFunction* Z_Construct_UFunction_ATimeManager_GetDayOfYear();
	OCEANPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FTimeDate();
	OCEANPLUGIN_API UFunction* Z_Construct_UFunction_ATimeManager_GetDayPhase();
	OCEANPLUGIN_API UFunction* Z_Construct_UFunction_ATimeManager_GetDaysInMonth();
	OCEANPLUGIN_API UFunction* Z_Construct_UFunction_ATimeManager_GetDaysInYear();
	OCEANPLUGIN_API UFunction* Z_Construct_UFunction_ATimeManager_GetElapsedDayInMinutes();
	OCEANPLUGIN_API UFunction* Z_Construct_UFunction_ATimeManager_GetYearPhase();
	OCEANPLUGIN_API UFunction* Z_Construct_UFunction_ATimeManager_IncrementTime();
	OCEANPLUGIN_API UFunction* Z_Construct_UFunction_ATimeManager_InitializeCalendar();
	OCEANPLUGIN_API UFunction* Z_Construct_UFunction_ATimeManager_IsLeapYear();
	OCEANPLUGIN_API UFunction* Z_Construct_UFunction_ATimeManager_SetCurrentLocalTime();
	OCEANPLUGIN_API UClass* Z_Construct_UClass_ATimeManager_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_OceanPlugin();
// End Cross Module References
	void ATimeManager::StaticRegisterNativesATimeManager()
	{
		UClass* Class = ATimeManager::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "CalculateMoonAngle", (Native)&ATimeManager::execCalculateMoonAngle },
			{ "CalculateMoonPhase", (Native)&ATimeManager::execCalculateMoonPhase },
			{ "CalculateSunAngle", (Native)&ATimeManager::execCalculateSunAngle },
			{ "GetDayOfYear", (Native)&ATimeManager::execGetDayOfYear },
			{ "GetDayPhase", (Native)&ATimeManager::execGetDayPhase },
			{ "GetDaysInMonth", (Native)&ATimeManager::execGetDaysInMonth },
			{ "GetDaysInYear", (Native)&ATimeManager::execGetDaysInYear },
			{ "GetElapsedDayInMinutes", (Native)&ATimeManager::execGetElapsedDayInMinutes },
			{ "GetYearPhase", (Native)&ATimeManager::execGetYearPhase },
			{ "IncrementTime", (Native)&ATimeManager::execIncrementTime },
			{ "InitializeCalendar", (Native)&ATimeManager::execInitializeCalendar },
			{ "IsLeapYear", (Native)&ATimeManager::execIsLeapYear },
			{ "SetCurrentLocalTime", (Native)&ATimeManager::execSetCurrentLocalTime },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_ATimeManager_CalculateMoonAngle()
	{
		struct TimeManager_eventCalculateMoonAngle_Parms
		{
			FRotator ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_ATimeManager();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("CalculateMoonAngle"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04820401, 65535, sizeof(TimeManager_eventCalculateMoonAngle_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(ReturnValue, TimeManager_eventCalculateMoonAngle_Parms), 0x0010000000000580, Z_Construct_UScriptStruct_FRotator());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("TimeManager"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/Sky/TimeManager.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("@Name: CalculateMoonAngle\n@Description: Calculates the moon angle rotator from the current time.\n\n@return: FRotator - The moon rotation value for the current time."));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ATimeManager_CalculateMoonPhase()
	{
		struct TimeManager_eventCalculateMoonPhase_Parms
		{
			float ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_ATimeManager();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("CalculateMoonPhase"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(TimeManager_eventCalculateMoonPhase_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(ReturnValue, TimeManager_eventCalculateMoonPhase_Parms), 0x0010000000000580);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("TimeManager"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/Sky/TimeManager.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("@Name: CalculateMoonPhase\n@Description: Calculates the moon phase for the current time and date.\n\n@return: FRotator - The moon rotation value for the current time."));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ATimeManager_CalculateSunAngle()
	{
		struct TimeManager_eventCalculateSunAngle_Parms
		{
			FRotator ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_ATimeManager();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("CalculateSunAngle"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04820401, 65535, sizeof(TimeManager_eventCalculateSunAngle_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(ReturnValue, TimeManager_eventCalculateSunAngle_Parms), 0x0010000000000580, Z_Construct_UScriptStruct_FRotator());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("TimeManager"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/Sky/TimeManager.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("@Name: CalculateSunAngle\n@Description: Calculates the sun angle rotator from the current time.\n\n@return: FRotator - The sun rotation value for the current time."));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ATimeManager_GetDayOfYear()
	{
		struct TimeManager_eventGetDayOfYear_Parms
		{
			FTimeDate time;
			int32 ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_ATimeManager();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetDayOfYear"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(TimeManager_eventGetDayOfYear_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(ReturnValue, TimeManager_eventGetDayOfYear_Parms), 0x0010000000000580);
			UProperty* NewProp_time = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("time"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(time, TimeManager_eventGetDayOfYear_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FTimeDate());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("TimeManager"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/Sky/TimeManager.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Name: GetDayOfYear\nDescription: Gets the number of full days elapsed in the current year for the provided date.\n\n@param: time (TimeDate) - The TimeDate value to calculate from.\n@return: int32 - The number of days elapsed in the current year."));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ATimeManager_GetDayPhase()
	{
		struct TimeManager_eventGetDayPhase_Parms
		{
			float ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_ATimeManager();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetDayPhase"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x14020401, 65535, sizeof(TimeManager_eventGetDayPhase_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(ReturnValue, TimeManager_eventGetDayPhase_Parms), 0x0010000000000580);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("TimeManager"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/Sky/TimeManager.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Name: GetDayPhase\nDescription: Gets the current day phase in a 0 to 1 range (fractional).\n\n@return: float - The day phase in a 0.0 to 1.0 range."));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ATimeManager_GetDaysInMonth()
	{
		struct TimeManager_eventGetDaysInMonth_Parms
		{
			int32 year;
			int32 month;
			int32 ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_ATimeManager();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetDaysInMonth"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(TimeManager_eventGetDaysInMonth_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(ReturnValue, TimeManager_eventGetDaysInMonth_Parms), 0x0010000000000580);
			UProperty* NewProp_month = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("month"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(month, TimeManager_eventGetDaysInMonth_Parms), 0x0010000000000080);
			UProperty* NewProp_year = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("year"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(year, TimeManager_eventGetDaysInMonth_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("TimeManager"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/Sky/TimeManager.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Name: DaysInMonth\nDescription: The number of days in the specified month (leap years are taken into account).\n\n@param: month (int32) - The month value.\n@param: year (int32) - The year value.\n@return: int32 - The number of days in the given month for the given year."));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ATimeManager_GetDaysInYear()
	{
		struct TimeManager_eventGetDaysInYear_Parms
		{
			int32 year;
			int32 ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_ATimeManager();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetDaysInYear"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(TimeManager_eventGetDaysInYear_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(ReturnValue, TimeManager_eventGetDaysInYear_Parms), 0x0010000000000580);
			UProperty* NewProp_year = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("year"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(year, TimeManager_eventGetDaysInYear_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("TimeManager"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/Sky/TimeManager.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Name: DaysInYear\nDescription: Gets the total number of days in a given year (takes leap years into account).\n\n@param: year (int32) - The year value.\n@return: int32 - The total number of days in the given year."));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ATimeManager_GetElapsedDayInMinutes()
	{
		struct TimeManager_eventGetElapsedDayInMinutes_Parms
		{
			float ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_ATimeManager();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetElapsedDayInMinutes"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(TimeManager_eventGetElapsedDayInMinutes_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(ReturnValue, TimeManager_eventGetElapsedDayInMinutes_Parms), 0x0010000000000580);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("TimeManager"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/Sky/TimeManager.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Name: GetElapsedDayInMinutes\nDescription: Gets the accumulated number of minutes (plus fractional) for the current day.\n\n@return: float - The number of minutes (plus fractional minute - NOT seconds) elapsed in the given day."));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ATimeManager_GetYearPhase()
	{
		struct TimeManager_eventGetYearPhase_Parms
		{
			float ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_ATimeManager();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetYearPhase"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x14020401, 65535, sizeof(TimeManager_eventGetYearPhase_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(ReturnValue, TimeManager_eventGetYearPhase_Parms), 0x0010000000000580);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("TimeManager"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/Sky/TimeManager.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Name: GetYearPhase\nDescription: Gets the current year phase in a 0 to 1 range (fractional).\n\n@return: float - The year phase in a 0.0 to 1.0 range."));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ATimeManager_IncrementTime()
	{
		struct TimeManager_eventIncrementTime_Parms
		{
			float deltaSeconds;
		};
		UObject* Outer = Z_Construct_UClass_ATimeManager();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("IncrementTime"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(TimeManager_eventIncrementTime_Parms));
			UProperty* NewProp_deltaSeconds = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("deltaSeconds"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(deltaSeconds, TimeManager_eventIncrementTime_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("TimeManager"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/Sky/TimeManager.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Name: IncrementTime\nDescription: Increments time based on the deltaSeconds * TimeScaleMultiplier\n\n@param: deltaSeconds (float) - The Tick (or accumulated ticks) delta time since the last update"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ATimeManager_InitializeCalendar()
	{
		struct TimeManager_eventInitializeCalendar_Parms
		{
			FTimeDate time;
		};
		UObject* Outer = Z_Construct_UClass_ATimeManager();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("InitializeCalendar"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(TimeManager_eventInitializeCalendar_Parms));
			UProperty* NewProp_time = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("time"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(time, TimeManager_eventInitializeCalendar_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FTimeDate());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("TimeManager"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/Sky/TimeManager.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Name: InitializeCalendar\nDescription: Initializes the calendar with the provided TimeDate, and validates the range of all input values.\n\n@param: time (TimeDate) - The TimeDate value to calculate from."));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ATimeManager_IsLeapYear()
	{
		struct TimeManager_eventIsLeapYear_Parms
		{
			int32 year;
			bool ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_ATimeManager();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("IsLeapYear"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(TimeManager_eventIsLeapYear_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, TimeManager_eventIsLeapYear_Parms);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, TimeManager_eventIsLeapYear_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, TimeManager_eventIsLeapYear_Parms), sizeof(bool), true);
			UProperty* NewProp_year = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("year"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(year, TimeManager_eventIsLeapYear_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("TimeManager"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/Sky/TimeManager.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Name: IsLeapYear\nDescription: Determines whether the specified year is a leap year.\n\n@param: year (int32) - The year value to check\n@return: bool - Will return true if it is a leap year, otherwise false."));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ATimeManager_SetCurrentLocalTime()
	{
		struct TimeManager_eventSetCurrentLocalTime_Parms
		{
			float time;
		};
		UObject* Outer = Z_Construct_UClass_ATimeManager();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetCurrentLocalTime"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(TimeManager_eventSetCurrentLocalTime_Parms));
			UProperty* NewProp_time = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("time"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(time, TimeManager_eventSetCurrentLocalTime_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("TimeManager"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/Sky/TimeManager.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Name: SetCurrentLocalTime\nDescription: Sets the local time from minutes, and runs InitializeCalendar to validate and set variables.\n\n@param: time (float) - The number of minutes (+ frac minutes) to calculate from."));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ATimeManager_NoRegister()
	{
		return ATimeManager::StaticClass();
	}
	UClass* Z_Construct_UClass_ATimeManager()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage__Script_OceanPlugin();
			OuterClass = ATimeManager::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20800080u;

				OuterClass->LinkChild(Z_Construct_UFunction_ATimeManager_CalculateMoonAngle());
				OuterClass->LinkChild(Z_Construct_UFunction_ATimeManager_CalculateMoonPhase());
				OuterClass->LinkChild(Z_Construct_UFunction_ATimeManager_CalculateSunAngle());
				OuterClass->LinkChild(Z_Construct_UFunction_ATimeManager_GetDayOfYear());
				OuterClass->LinkChild(Z_Construct_UFunction_ATimeManager_GetDayPhase());
				OuterClass->LinkChild(Z_Construct_UFunction_ATimeManager_GetDaysInMonth());
				OuterClass->LinkChild(Z_Construct_UFunction_ATimeManager_GetDaysInYear());
				OuterClass->LinkChild(Z_Construct_UFunction_ATimeManager_GetElapsedDayInMinutes());
				OuterClass->LinkChild(Z_Construct_UFunction_ATimeManager_GetYearPhase());
				OuterClass->LinkChild(Z_Construct_UFunction_ATimeManager_IncrementTime());
				OuterClass->LinkChild(Z_Construct_UFunction_ATimeManager_InitializeCalendar());
				OuterClass->LinkChild(Z_Construct_UFunction_ATimeManager_IsLeapYear());
				OuterClass->LinkChild(Z_Construct_UFunction_ATimeManager_SetCurrentLocalTime());

				UProperty* NewProp_PartF = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("PartF"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(PartF, ATimeManager), 0x0010000000000014);
				UProperty* NewProp_PartM = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("PartM"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(PartM, ATimeManager), 0x0010000000000014);
				UProperty* NewProp_PartL = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("PartL"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(PartL, ATimeManager), 0x0010000000000014);
				UProperty* NewProp_EcDistance = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("EcDistance"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(EcDistance, ATimeManager), 0x0010000000000014);
				UProperty* NewProp_EcLatitude = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("EcLatitude"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(EcLatitude, ATimeManager), 0x0010000000000014);
				UProperty* NewProp_EcLongitude = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("EcLongitude"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(EcLongitude, ATimeManager), 0x0010000000000014);
				UProperty* NewProp_LunarElapsedDays = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("LunarElapsedDays"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(LunarElapsedDays, ATimeManager), 0x0010000000000014);
				UProperty* NewProp_LunarRightAsc = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("LunarRightAsc"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(LunarRightAsc, ATimeManager), 0x0010000000000014);
				UProperty* NewProp_LunarAzimuth = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("LunarAzimuth"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(LunarAzimuth, ATimeManager), 0x0010000000000014);
				UProperty* NewProp_LunarDeclination = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("LunarDeclination"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(LunarDeclination, ATimeManager), 0x0010000000000014);
				UProperty* NewProp_LunarHRA = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("LunarHRA"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(LunarHRA, ATimeManager), 0x0010000000000014);
				UProperty* NewProp_LunarAltAngle = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("LunarAltAngle"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(LunarAltAngle, ATimeManager), 0x0010000000000014);
				UProperty* NewProp_SiderealTime = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("SiderealTime"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(SiderealTime, ATimeManager), 0x0010000000000014);
				UProperty* NewProp_SolarHRA = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("SolarHRA"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(SolarHRA, ATimeManager), 0x0010000000000014);
				UProperty* NewProp_SolarAzimuth = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("SolarAzimuth"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(SolarAzimuth, ATimeManager), 0x0010000000000014);
				UProperty* NewProp_SolarDeclination = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("SolarDeclination"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(SolarDeclination, ATimeManager), 0x0010000000000014);
				UProperty* NewProp_SolarAltAngle = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("SolarAltAngle"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(SolarAltAngle, ATimeManager), 0x0010000000000014);
				UProperty* NewProp_EoT = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("EoT"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(EoT, ATimeManager), 0x0010000000000014);
				UProperty* NewProp_DayOfYear = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("DayOfYear"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(DayOfYear, ATimeManager), 0x0010000000000014);
				UProperty* NewProp_LSTM = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("LSTM"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(LSTM, ATimeManager), 0x0010000000000014);
				UProperty* NewProp_TimeCorrection = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("TimeCorrection"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(TimeCorrection, ATimeManager), 0x0010000000000014);
				UProperty* NewProp_LocalClockTime = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("LocalClockTime"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(LocalClockTime, ATimeManager), 0x0010000000000014);
				UProperty* NewProp_SolarTime = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("SolarTime"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(SolarTime, ATimeManager), 0x0010000000000014);
				UProperty* NewProp_TimeScaleMultiplier = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("TimeScaleMultiplier"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(TimeScaleMultiplier, ATimeManager), 0x0010000000000005);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bDaylightSavingsActive, ATimeManager);
				UProperty* NewProp_bDaylightSavingsActive = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bDaylightSavingsActive"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bDaylightSavingsActive, ATimeManager), 0x0010000000000014, CPP_BOOL_PROPERTY_BITMASK(bDaylightSavingsActive, ATimeManager), sizeof(bool), true);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bAllowDaylightSavings, ATimeManager);
				UProperty* NewProp_bAllowDaylightSavings = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bAllowDaylightSavings"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bAllowDaylightSavings, ATimeManager), 0x0010000000000005, CPP_BOOL_PROPERTY_BITMASK(bAllowDaylightSavings, ATimeManager), sizeof(bool), true);
				UProperty* NewProp_OffsetDST = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("OffsetDST"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(OffsetDST, ATimeManager), 0x0010000000000014);
				UProperty* NewProp_OffsetUTC = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("OffsetUTC"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(OffsetUTC, ATimeManager), 0x0010000000000005);
				UProperty* NewProp_Longitude = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Longitude"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(Longitude, ATimeManager), 0x0010000000000005);
				UProperty* NewProp_Latitude = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Latitude"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(Latitude, ATimeManager), 0x0010000000000005);
				UProperty* NewProp_CurrentLocalTime = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CurrentLocalTime"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(CurrentLocalTime, ATimeManager), 0x0010000000000014, Z_Construct_UScriptStruct_FTimeDate());
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ATimeManager_CalculateMoonAngle(), "CalculateMoonAngle"); // 2276588398
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ATimeManager_CalculateMoonPhase(), "CalculateMoonPhase"); // 695751927
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ATimeManager_CalculateSunAngle(), "CalculateSunAngle"); // 3255683066
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ATimeManager_GetDayOfYear(), "GetDayOfYear"); // 3826318324
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ATimeManager_GetDayPhase(), "GetDayPhase"); // 2423585759
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ATimeManager_GetDaysInMonth(), "GetDaysInMonth"); // 118231645
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ATimeManager_GetDaysInYear(), "GetDaysInYear"); // 3601520754
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ATimeManager_GetElapsedDayInMinutes(), "GetElapsedDayInMinutes"); // 600446798
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ATimeManager_GetYearPhase(), "GetYearPhase"); // 916731406
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ATimeManager_IncrementTime(), "IncrementTime"); // 3852398050
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ATimeManager_InitializeCalendar(), "InitializeCalendar"); // 2686191364
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ATimeManager_IsLeapYear(), "IsLeapYear"); // 2462758951
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ATimeManager_SetCurrentLocalTime(), "SetCurrentLocalTime"); // 3967040679
				static TCppClassTypeInfo<TCppClassTypeTraits<ATimeManager> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintType"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("Sky/TimeManager.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Classes/Sky/TimeManager.h"));
				MetaData->SetValue(OuterClass, TEXT("ToolTip"), TEXT("An actor based calendar system for tracking date + time, and Sun/Moon rotation/phase."));
				MetaData->SetValue(NewProp_PartF, TEXT("Category"), TEXT("Lunar Debug"));
				MetaData->SetValue(NewProp_PartF, TEXT("ModuleRelativePath"), TEXT("Classes/Sky/TimeManager.h"));
				MetaData->SetValue(NewProp_PartM, TEXT("Category"), TEXT("Lunar Debug"));
				MetaData->SetValue(NewProp_PartM, TEXT("ModuleRelativePath"), TEXT("Classes/Sky/TimeManager.h"));
				MetaData->SetValue(NewProp_PartL, TEXT("Category"), TEXT("Lunar Debug"));
				MetaData->SetValue(NewProp_PartL, TEXT("ModuleRelativePath"), TEXT("Classes/Sky/TimeManager.h"));
				MetaData->SetValue(NewProp_EcDistance, TEXT("Category"), TEXT("Lunar Debug"));
				MetaData->SetValue(NewProp_EcDistance, TEXT("ModuleRelativePath"), TEXT("Classes/Sky/TimeManager.h"));
				MetaData->SetValue(NewProp_EcLatitude, TEXT("Category"), TEXT("Lunar Debug"));
				MetaData->SetValue(NewProp_EcLatitude, TEXT("ModuleRelativePath"), TEXT("Classes/Sky/TimeManager.h"));
				MetaData->SetValue(NewProp_EcLongitude, TEXT("Category"), TEXT("Lunar Debug"));
				MetaData->SetValue(NewProp_EcLongitude, TEXT("ModuleRelativePath"), TEXT("Classes/Sky/TimeManager.h"));
				MetaData->SetValue(NewProp_LunarElapsedDays, TEXT("Category"), TEXT("Lunar Debug"));
				MetaData->SetValue(NewProp_LunarElapsedDays, TEXT("ModuleRelativePath"), TEXT("Classes/Sky/TimeManager.h"));
				MetaData->SetValue(NewProp_LunarRightAsc, TEXT("Category"), TEXT("Lunar Debug"));
				MetaData->SetValue(NewProp_LunarRightAsc, TEXT("ModuleRelativePath"), TEXT("Classes/Sky/TimeManager.h"));
				MetaData->SetValue(NewProp_LunarRightAsc, TEXT("ToolTip"), TEXT("The current Right Ascension angle for the moon"));
				MetaData->SetValue(NewProp_LunarAzimuth, TEXT("Category"), TEXT("Lunar Debug"));
				MetaData->SetValue(NewProp_LunarAzimuth, TEXT("ModuleRelativePath"), TEXT("Classes/Sky/TimeManager.h"));
				MetaData->SetValue(NewProp_LunarAzimuth, TEXT("ToolTip"), TEXT("The current Azimuth angle of the moon"));
				MetaData->SetValue(NewProp_LunarDeclination, TEXT("Category"), TEXT("Lunar Debug"));
				MetaData->SetValue(NewProp_LunarDeclination, TEXT("ModuleRelativePath"), TEXT("Classes/Sky/TimeManager.h"));
				MetaData->SetValue(NewProp_LunarDeclination, TEXT("ToolTip"), TEXT("The current Declination angle of the moon"));
				MetaData->SetValue(NewProp_LunarHRA, TEXT("Category"), TEXT("Lunar Debug"));
				MetaData->SetValue(NewProp_LunarHRA, TEXT("ModuleRelativePath"), TEXT("Classes/Sky/TimeManager.h"));
				MetaData->SetValue(NewProp_LunarHRA, TEXT("ToolTip"), TEXT("The current Hour Angle of the moon"));
				MetaData->SetValue(NewProp_LunarAltAngle, TEXT("Category"), TEXT("Lunar Debug"));
				MetaData->SetValue(NewProp_LunarAltAngle, TEXT("ModuleRelativePath"), TEXT("Classes/Sky/TimeManager.h"));
				MetaData->SetValue(NewProp_LunarAltAngle, TEXT("ToolTip"), TEXT("The current Altitude Angle of the moon"));
				MetaData->SetValue(NewProp_SiderealTime, TEXT("Category"), TEXT("Lunar Debug"));
				MetaData->SetValue(NewProp_SiderealTime, TEXT("ModuleRelativePath"), TEXT("Classes/Sky/TimeManager.h"));
				MetaData->SetValue(NewProp_SiderealTime, TEXT("ToolTip"), TEXT("The current Sidereal Time value"));
				MetaData->SetValue(NewProp_SolarHRA, TEXT("Category"), TEXT("Sun Debug"));
				MetaData->SetValue(NewProp_SolarHRA, TEXT("ModuleRelativePath"), TEXT("Classes/Sky/TimeManager.h"));
				MetaData->SetValue(NewProp_SolarHRA, TEXT("ToolTip"), TEXT("The current Hour Angle of the sun"));
				MetaData->SetValue(NewProp_SolarAzimuth, TEXT("Category"), TEXT("Sun Debug"));
				MetaData->SetValue(NewProp_SolarAzimuth, TEXT("ModuleRelativePath"), TEXT("Classes/Sky/TimeManager.h"));
				MetaData->SetValue(NewProp_SolarAzimuth, TEXT("ToolTip"), TEXT("The Azimuth angle of the sun"));
				MetaData->SetValue(NewProp_SolarDeclination, TEXT("Category"), TEXT("Sun Debug"));
				MetaData->SetValue(NewProp_SolarDeclination, TEXT("ModuleRelativePath"), TEXT("Classes/Sky/TimeManager.h"));
				MetaData->SetValue(NewProp_SolarDeclination, TEXT("ToolTip"), TEXT("The current Declination angle of the sun"));
				MetaData->SetValue(NewProp_SolarAltAngle, TEXT("Category"), TEXT("Sun Debug"));
				MetaData->SetValue(NewProp_SolarAltAngle, TEXT("ModuleRelativePath"), TEXT("Classes/Sky/TimeManager.h"));
				MetaData->SetValue(NewProp_SolarAltAngle, TEXT("ToolTip"), TEXT("The current Altitude Angle of the sun"));
				MetaData->SetValue(NewProp_EoT, TEXT("Category"), TEXT("Sun Debug"));
				MetaData->SetValue(NewProp_EoT, TEXT("ModuleRelativePath"), TEXT("Classes/Sky/TimeManager.h"));
				MetaData->SetValue(NewProp_EoT, TEXT("ToolTip"), TEXT("THe current Equation of Time value"));
				MetaData->SetValue(NewProp_DayOfYear, TEXT("Category"), TEXT("Sun Debug"));
				MetaData->SetValue(NewProp_DayOfYear, TEXT("ModuleRelativePath"), TEXT("Classes/Sky/TimeManager.h"));
				MetaData->SetValue(NewProp_LSTM, TEXT("Category"), TEXT("Sun Debug"));
				MetaData->SetValue(NewProp_LSTM, TEXT("ModuleRelativePath"), TEXT("Classes/Sky/TimeManager.h"));
				MetaData->SetValue(NewProp_LSTM, TEXT("ToolTip"), TEXT("The value of the local Standard Time Meridian (15deg intervals)"));
				MetaData->SetValue(NewProp_TimeCorrection, TEXT("Category"), TEXT("Sun Debug"));
				MetaData->SetValue(NewProp_TimeCorrection, TEXT("ModuleRelativePath"), TEXT("Classes/Sky/TimeManager.h"));
				MetaData->SetValue(NewProp_TimeCorrection, TEXT("ToolTip"), TEXT("The current Time Correction factor"));
				MetaData->SetValue(NewProp_LocalClockTime, TEXT("Category"), TEXT("Sun Debug"));
				MetaData->SetValue(NewProp_LocalClockTime, TEXT("ModuleRelativePath"), TEXT("Classes/Sky/TimeManager.h"));
				MetaData->SetValue(NewProp_LocalClockTime, TEXT("ToolTip"), TEXT("The current Local Clock Time value (in minutes)"));
				MetaData->SetValue(NewProp_SolarTime, TEXT("Category"), TEXT("Sun Debug"));
				MetaData->SetValue(NewProp_SolarTime, TEXT("ModuleRelativePath"), TEXT("Classes/Sky/TimeManager.h"));
				MetaData->SetValue(NewProp_SolarTime, TEXT("ToolTip"), TEXT("The current Local Solar Time (in minutes)"));
				MetaData->SetValue(NewProp_TimeScaleMultiplier, TEXT("Category"), TEXT("Default"));
				MetaData->SetValue(NewProp_TimeScaleMultiplier, TEXT("ModuleRelativePath"), TEXT("Classes/Sky/TimeManager.h"));
				MetaData->SetValue(NewProp_TimeScaleMultiplier, TEXT("ToolTip"), TEXT("The value to multiply the base game time by (1 second real time is multiplied to equal X seconds in game)"));
				MetaData->SetValue(NewProp_bDaylightSavingsActive, TEXT("Category"), TEXT("TimeManager"));
				MetaData->SetValue(NewProp_bDaylightSavingsActive, TEXT("ModuleRelativePath"), TEXT("Classes/Sky/TimeManager.h"));
				MetaData->SetValue(NewProp_bDaylightSavingsActive, TEXT("ToolTip"), TEXT("Determines whether Daylight Savings is active for the current date"));
				MetaData->SetValue(NewProp_bAllowDaylightSavings, TEXT("Category"), TEXT("Default"));
				MetaData->SetValue(NewProp_bAllowDaylightSavings, TEXT("ModuleRelativePath"), TEXT("Classes/Sky/TimeManager.h"));
				MetaData->SetValue(NewProp_bAllowDaylightSavings, TEXT("ToolTip"), TEXT("Determines whether Daylight Savings time should be enabled for the local location"));
				MetaData->SetValue(NewProp_OffsetDST, TEXT("Category"), TEXT("TimeManager"));
				MetaData->SetValue(NewProp_OffsetDST, TEXT("ModuleRelativePath"), TEXT("Classes/Sky/TimeManager.h"));
				MetaData->SetValue(NewProp_OffsetDST, TEXT("ToolTip"), TEXT("The number of hours (0 or 1) to subtract for the current TimeDate for Daylight Savings Time (if enabled)"));
				MetaData->SetValue(NewProp_OffsetUTC, TEXT("Category"), TEXT("Default"));
				MetaData->SetValue(NewProp_OffsetUTC, TEXT("ModuleRelativePath"), TEXT("Classes/Sky/TimeManager.h"));
				MetaData->SetValue(NewProp_OffsetUTC, TEXT("ToolTip"), TEXT("The number of hours offset from UTC for the local location (value in the range of -12 to +12 hours from UTC)"));
				MetaData->SetValue(NewProp_Longitude, TEXT("Category"), TEXT("Default"));
				MetaData->SetValue(NewProp_Longitude, TEXT("ModuleRelativePath"), TEXT("Classes/Sky/TimeManager.h"));
				MetaData->SetValue(NewProp_Longitude, TEXT("ToolTip"), TEXT("The Longitude of the local location (-180 to +180 in degrees)"));
				MetaData->SetValue(NewProp_Latitude, TEXT("Category"), TEXT("Default"));
				MetaData->SetValue(NewProp_Latitude, TEXT("ModuleRelativePath"), TEXT("Classes/Sky/TimeManager.h"));
				MetaData->SetValue(NewProp_Latitude, TEXT("ToolTip"), TEXT("The Latitude of the local location (-90 to +90 in degrees)"));
				MetaData->SetValue(NewProp_CurrentLocalTime, TEXT("Category"), TEXT("TimeManager"));
				MetaData->SetValue(NewProp_CurrentLocalTime, TEXT("ModuleRelativePath"), TEXT("Classes/Sky/TimeManager.h"));
				MetaData->SetValue(NewProp_CurrentLocalTime, TEXT("ToolTip"), TEXT("Current Local Clock Time (LCT)"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATimeManager, 1730743572);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATimeManager(Z_Construct_UClass_ATimeManager, &ATimeManager::StaticClass, TEXT("/Script/OceanPlugin"), TEXT("ATimeManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATimeManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
