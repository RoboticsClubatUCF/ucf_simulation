// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/OceanPluginPrivatePCH.h"
#include "Classes/CustomVehicleController.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomVehicleController() {}
// Cross Module References
	OCEANPLUGIN_API UFunction* Z_Construct_UFunction_ACustomVehicleController_DrawBuoyancyPoints();
	OCEANPLUGIN_API UClass* Z_Construct_UClass_ACustomVehicleController();
	OCEANPLUGIN_API UFunction* Z_Construct_UFunction_ACustomVehicleController_EnableBuoyancy();
	OCEANPLUGIN_API UFunction* Z_Construct_UFunction_ACustomVehicleController_EnterVehicle();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	OCEANPLUGIN_API UFunction* Z_Construct_UFunction_ACustomVehicleController_ExitVehicle();
	OCEANPLUGIN_API UFunction* Z_Construct_UFunction_ACustomVehicleController_GetIsDriving();
	OCEANPLUGIN_API UClass* Z_Construct_UClass_ACustomVehicleController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_OceanPlugin();
// End Cross Module References
	void ACustomVehicleController::StaticRegisterNativesACustomVehicleController()
	{
		UClass* Class = ACustomVehicleController::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "DrawBuoyancyPoints", (Native)&ACustomVehicleController::execDrawBuoyancyPoints },
			{ "EnableBuoyancy", (Native)&ACustomVehicleController::execEnableBuoyancy },
			{ "EnterVehicle", (Native)&ACustomVehicleController::execEnterVehicle },
			{ "ExitVehicle", (Native)&ACustomVehicleController::execExitVehicle },
			{ "GetIsDriving", (Native)&ACustomVehicleController::execGetIsDriving },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_ACustomVehicleController_DrawBuoyancyPoints()
	{
		UObject* Outer = Z_Construct_UClass_ACustomVehicleController();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("DrawBuoyancyPoints"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00020600, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/CustomVehicleController.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("--Custom debugging console commands--"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ACustomVehicleController_EnableBuoyancy()
	{
		UObject* Outer = Z_Construct_UClass_ACustomVehicleController();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("EnableBuoyancy"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00020600, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/CustomVehicleController.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ACustomVehicleController_EnterVehicle()
	{
		struct CustomVehicleController_eventEnterVehicle_Parms
		{
			APawn* Vehicle;
		};
		UObject* Outer = Z_Construct_UClass_ACustomVehicleController();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("EnterVehicle"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020400, 65535, sizeof(CustomVehicleController_eventEnterVehicle_Parms));
			UProperty* NewProp_Vehicle = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Vehicle"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Vehicle, CustomVehicleController_eventEnterVehicle_Parms), 0x0010000000000080, Z_Construct_UClass_APawn_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Vehicle"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/CustomVehicleController.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ACustomVehicleController_ExitVehicle()
	{
		UObject* Outer = Z_Construct_UClass_ACustomVehicleController();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ExitVehicle"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020400, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Vehicle"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/CustomVehicleController.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ACustomVehicleController_GetIsDriving()
	{
		struct CustomVehicleController_eventGetIsDriving_Parms
		{
			bool ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_ACustomVehicleController();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetIsDriving"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x14020400, 65535, sizeof(CustomVehicleController_eventGetIsDriving_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, CustomVehicleController_eventGetIsDriving_Parms);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, CustomVehicleController_eventGetIsDriving_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, CustomVehicleController_eventGetIsDriving_Parms), sizeof(bool), true);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Vehicle"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/CustomVehicleController.h"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ACustomVehicleController_NoRegister()
	{
		return ACustomVehicleController::StaticClass();
	}
	UClass* Z_Construct_UClass_ACustomVehicleController()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_APlayerController();
			Z_Construct_UPackage__Script_OceanPlugin();
			OuterClass = ACustomVehicleController::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20900284u;

				OuterClass->LinkChild(Z_Construct_UFunction_ACustomVehicleController_DrawBuoyancyPoints());
				OuterClass->LinkChild(Z_Construct_UFunction_ACustomVehicleController_EnableBuoyancy());
				OuterClass->LinkChild(Z_Construct_UFunction_ACustomVehicleController_EnterVehicle());
				OuterClass->LinkChild(Z_Construct_UFunction_ACustomVehicleController_ExitVehicle());
				OuterClass->LinkChild(Z_Construct_UFunction_ACustomVehicleController_GetIsDriving());

				UProperty* NewProp_PlayerPawn = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("PlayerPawn"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(PlayerPawn, ACustomVehicleController), 0x0040000000000020, Z_Construct_UClass_APawn_NoRegister());
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ACustomVehicleController_DrawBuoyancyPoints(), "DrawBuoyancyPoints"); // 406571625
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ACustomVehicleController_EnableBuoyancy(), "EnableBuoyancy"); // 164520597
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ACustomVehicleController_EnterVehicle(), "EnterVehicle"); // 3052121959
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ACustomVehicleController_ExitVehicle(), "ExitVehicle"); // 3650462562
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ACustomVehicleController_GetIsDriving(), "GetIsDriving"); // 717052639
				OuterClass->ClassConfigName = FName(TEXT("Game"));
				static TCppClassTypeInfo<TCppClassTypeTraits<ACustomVehicleController> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Collision Rendering Utilities|Transformation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("CustomVehicleController.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Classes/CustomVehicleController.h"));
				MetaData->SetValue(OuterClass, TEXT("ToolTip"), TEXT("Custom player controller that has custom functionality to help possess vehicles."));
				MetaData->SetValue(NewProp_PlayerPawn, TEXT("ModuleRelativePath"), TEXT("Classes/CustomVehicleController.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACustomVehicleController, 482656704);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACustomVehicleController(Z_Construct_UClass_ACustomVehicleController, &ACustomVehicleController::StaticClass, TEXT("/Script/OceanPlugin"), TEXT("ACustomVehicleController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACustomVehicleController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
