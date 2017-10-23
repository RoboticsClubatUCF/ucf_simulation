// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/OceanPluginPrivatePCH.h"
#include "Classes/InfiniteSystemComponent.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInfiniteSystemComponent() {}
// Cross Module References
	OCEANPLUGIN_API UEnum* Z_Construct_UEnum_OceanPlugin_EFollowMethod();
	UPackage* Z_Construct_UPackage__Script_OceanPlugin();
	OCEANPLUGIN_API UClass* Z_Construct_UClass_UInfiniteSystemComponent_NoRegister();
	OCEANPLUGIN_API UClass* Z_Construct_UClass_UInfiniteSystemComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
// End Cross Module References
static UEnum* EFollowMethod_StaticEnum()
{
	static UEnum* Singleton = nullptr;
	if (!Singleton)
	{
		Singleton = GetStaticEnum(Z_Construct_UEnum_OceanPlugin_EFollowMethod, Z_Construct_UPackage__Script_OceanPlugin(), TEXT("EFollowMethod"));
	}
	return Singleton;
}
static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFollowMethod(EFollowMethod_StaticEnum, TEXT("/Script/OceanPlugin"), TEXT("EFollowMethod"), false, nullptr, nullptr);
	UEnum* Z_Construct_UEnum_OceanPlugin_EFollowMethod()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_OceanPlugin();
		extern uint32 Get_Z_Construct_UEnum_OceanPlugin_EFollowMethod_CRC();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFollowMethod"), 0, Get_Z_Construct_UEnum_OceanPlugin_EFollowMethod_CRC(), false);
		if (!ReturnEnum)
		{
			ReturnEnum = new(EC_InternalUseOnlyConstructor, Outer, TEXT("EFollowMethod"), RF_Public|RF_Transient|RF_MarkAsNative) UEnum(FObjectInitializer());
			TArray<TPair<FName, int64>> EnumNames;
			EnumNames.Emplace(TEXT("LookAtLocation"), 0);
			EnumNames.Emplace(TEXT("FollowCamera"), 1);
			EnumNames.Emplace(TEXT("FollowPawn"), 2);
			EnumNames.Emplace(TEXT("Stationary"), 3);
			EnumNames.Emplace(TEXT("EFollowMethod_MAX"), 4);
			ReturnEnum->SetEnums(EnumNames, UEnum::ECppForm::Regular);
			ReturnEnum->CppType = TEXT("EFollowMethod");
#if WITH_METADATA
			UMetaData* MetaData = ReturnEnum->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnEnum, TEXT("ModuleRelativePath"), TEXT("Classes/InfiniteSystemComponent.h"));
#endif
		}
		return ReturnEnum;
	}
	uint32 Get_Z_Construct_UEnum_OceanPlugin_EFollowMethod_CRC() { return 2201267375U; }
	void UInfiniteSystemComponent::StaticRegisterNativesUInfiniteSystemComponent()
	{
	}
	UClass* Z_Construct_UClass_UInfiniteSystemComponent_NoRegister()
	{
		return UInfiniteSystemComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UInfiniteSystemComponent()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_USceneComponent();
			Z_Construct_UPackage__Script_OceanPlugin();
			OuterClass = UInfiniteSystemComponent::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20B00080u;


				UProperty* NewProp_ScaleMax = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ScaleMax"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(ScaleMax, UInfiniteSystemComponent), 0x0010000000000005);
				UProperty* NewProp_ScaleMin = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ScaleMin"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(ScaleMin, UInfiniteSystemComponent), 0x0010000000000005);
				UProperty* NewProp_ScaleStartDistance = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ScaleStartDistance"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(ScaleStartDistance, UInfiniteSystemComponent), 0x0010000000000005);
				UProperty* NewProp_ScaleDistanceFactor = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ScaleDistanceFactor"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(ScaleDistanceFactor, UInfiniteSystemComponent), 0x0010000000000005);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(ScaleByDistance, UInfiniteSystemComponent);
				UProperty* NewProp_ScaleByDistance = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ScaleByDistance"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ScaleByDistance, UInfiniteSystemComponent), 0x0010000000000005, CPP_BOOL_PROPERTY_BITMASK(ScaleByDistance, UInfiniteSystemComponent), sizeof(bool), true);
				UProperty* NewProp_MaxLookAtDistance = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("MaxLookAtDistance"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(MaxLookAtDistance, UInfiniteSystemComponent), 0x0010000000000005);
				UProperty* NewProp_GridSnapSize = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("GridSnapSize"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(GridSnapSize, UInfiniteSystemComponent), 0x0010000000000005);
				UProperty* NewProp_FollowMethod = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("FollowMethod"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(CPP_PROPERTY_BASE(FollowMethod, UInfiniteSystemComponent), 0x0010000000000005, Z_Construct_UEnum_OceanPlugin_EFollowMethod());
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(UpdateInEditor, UInfiniteSystemComponent);
				UProperty* NewProp_UpdateInEditor = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("UpdateInEditor"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(UpdateInEditor, UInfiniteSystemComponent), 0x0010000000000005, CPP_BOOL_PROPERTY_BITMASK(UpdateInEditor, UInfiniteSystemComponent), sizeof(bool), true);
				static TCppClassTypeInfo<TCppClassTypeTraits<UInfiniteSystemComponent> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintSpawnableComponent"), TEXT(""));
				MetaData->SetValue(OuterClass, TEXT("ClassGroupNames"), TEXT("Physics"));
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Object Mobility LOD PhysicsVolume"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("InfiniteSystemComponent.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Classes/InfiniteSystemComponent.h"));
				MetaData->SetValue(OuterClass, TEXT("ToolTip"), TEXT("Infinite Ocean Plane System.\nFollows camera and scales by distance to make a plane appear as infinite."));
				MetaData->SetValue(NewProp_ScaleMax, TEXT("Category"), TEXT("Settings"));
				MetaData->SetValue(NewProp_ScaleMax, TEXT("ModuleRelativePath"), TEXT("Classes/InfiniteSystemComponent.h"));
				MetaData->SetValue(NewProp_ScaleMin, TEXT("Category"), TEXT("Settings"));
				MetaData->SetValue(NewProp_ScaleMin, TEXT("ModuleRelativePath"), TEXT("Classes/InfiniteSystemComponent.h"));
				MetaData->SetValue(NewProp_ScaleStartDistance, TEXT("Category"), TEXT("Settings"));
				MetaData->SetValue(NewProp_ScaleStartDistance, TEXT("ModuleRelativePath"), TEXT("Classes/InfiniteSystemComponent.h"));
				MetaData->SetValue(NewProp_ScaleDistanceFactor, TEXT("Category"), TEXT("Settings"));
				MetaData->SetValue(NewProp_ScaleDistanceFactor, TEXT("ModuleRelativePath"), TEXT("Classes/InfiniteSystemComponent.h"));
				MetaData->SetValue(NewProp_ScaleByDistance, TEXT("Category"), TEXT("Settings"));
				MetaData->SetValue(NewProp_ScaleByDistance, TEXT("ModuleRelativePath"), TEXT("Classes/InfiniteSystemComponent.h"));
				MetaData->SetValue(NewProp_MaxLookAtDistance, TEXT("Category"), TEXT("Settings"));
				MetaData->SetValue(NewProp_MaxLookAtDistance, TEXT("ModuleRelativePath"), TEXT("Classes/InfiniteSystemComponent.h"));
				MetaData->SetValue(NewProp_GridSnapSize, TEXT("Category"), TEXT("Settings"));
				MetaData->SetValue(NewProp_GridSnapSize, TEXT("ModuleRelativePath"), TEXT("Classes/InfiniteSystemComponent.h"));
				MetaData->SetValue(NewProp_FollowMethod, TEXT("Category"), TEXT("Settings"));
				MetaData->SetValue(NewProp_FollowMethod, TEXT("ModuleRelativePath"), TEXT("Classes/InfiniteSystemComponent.h"));
				MetaData->SetValue(NewProp_UpdateInEditor, TEXT("Category"), TEXT("Settings"));
				MetaData->SetValue(NewProp_UpdateInEditor, TEXT("ModuleRelativePath"), TEXT("Classes/InfiniteSystemComponent.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInfiniteSystemComponent, 2813387148);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInfiniteSystemComponent(Z_Construct_UClass_UInfiniteSystemComponent, &UInfiniteSystemComponent::StaticClass, TEXT("/Script/OceanPlugin"), TEXT("UInfiniteSystemComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInfiniteSystemComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
