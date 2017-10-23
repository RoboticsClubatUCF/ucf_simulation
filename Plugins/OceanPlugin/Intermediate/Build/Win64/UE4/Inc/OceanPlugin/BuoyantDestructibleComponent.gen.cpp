// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/OceanPluginPrivatePCH.h"
#include "Classes/BuoyantDestructibleComponent.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBuoyantDestructibleComponent() {}
// Cross Module References
	OCEANPLUGIN_API UClass* Z_Construct_UClass_UBuoyantDestructibleComponent_NoRegister();
	OCEANPLUGIN_API UClass* Z_Construct_UClass_UBuoyantDestructibleComponent();
	ENGINE_API UClass* Z_Construct_UClass_UDestructibleComponent();
	UPackage* Z_Construct_UPackage__Script_OceanPlugin();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	OCEANPLUGIN_API UClass* Z_Construct_UClass_AOceanManager_NoRegister();
// End Cross Module References
	void UBuoyantDestructibleComponent::StaticRegisterNativesUBuoyantDestructibleComponent()
	{
	}
	UClass* Z_Construct_UClass_UBuoyantDestructibleComponent_NoRegister()
	{
		return UBuoyantDestructibleComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UBuoyantDestructibleComponent()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UDestructibleComponent();
			Z_Construct_UPackage__Script_OceanPlugin();
			OuterClass = UBuoyantDestructibleComponent::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20B01080u;


				UProperty* NewProp_ChunkStabilizationThreshold = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ChunkStabilizationThreshold"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(ChunkStabilizationThreshold, UBuoyantDestructibleComponent), 0x0010000000000005);
				UProperty* NewProp_ChunkSleepThreshold = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ChunkSleepThreshold"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(ChunkSleepThreshold, UBuoyantDestructibleComponent), 0x0010000000000005);
				UProperty* NewProp_WaveForceMultiplier = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("WaveForceMultiplier"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(WaveForceMultiplier, UBuoyantDestructibleComponent), 0x0010040000000005);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(EnableWaveForces, UBuoyantDestructibleComponent);
				UProperty* NewProp_EnableWaveForces = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("EnableWaveForces"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(EnableWaveForces, UBuoyantDestructibleComponent), 0x0010040000000005, CPP_BOOL_PROPERTY_BITMASK(EnableWaveForces, UBuoyantDestructibleComponent), sizeof(bool), true);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(DrawDebugPoints, UBuoyantDestructibleComponent);
				UProperty* NewProp_DrawDebugPoints = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("DrawDebugPoints"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(DrawDebugPoints, UBuoyantDestructibleComponent), 0x0010040000000005, CPP_BOOL_PROPERTY_BITMASK(DrawDebugPoints, UBuoyantDestructibleComponent), sizeof(bool), true);
				UProperty* NewProp_TestPointRadius = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("TestPointRadius"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(TestPointRadius, UBuoyantDestructibleComponent), 0x0010000000000005);
				UProperty* NewProp_MaxUnderwaterVelocity = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("MaxUnderwaterVelocity"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(MaxUnderwaterVelocity, UBuoyantDestructibleComponent), 0x0010000000000005);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(ClampMaxVelocity, UBuoyantDestructibleComponent);
				UProperty* NewProp_ClampMaxVelocity = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ClampMaxVelocity"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ClampMaxVelocity, UBuoyantDestructibleComponent), 0x0010000000000005, CPP_BOOL_PROPERTY_BITMASK(ClampMaxVelocity, UBuoyantDestructibleComponent), sizeof(bool), true);
				UProperty* NewProp_VelocityDamper = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("VelocityDamper"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(VelocityDamper, UBuoyantDestructibleComponent), 0x0010040000000005, Z_Construct_UScriptStruct_FVector());
				UProperty* NewProp_FluidAngularDamping = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("FluidAngularDamping"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(FluidAngularDamping, UBuoyantDestructibleComponent), 0x0010000000000005);
				UProperty* NewProp_FluidLinearDamping = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("FluidLinearDamping"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(FluidLinearDamping, UBuoyantDestructibleComponent), 0x0010000000000005);
				UProperty* NewProp_FluidDensity = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("FluidDensity"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(FluidDensity, UBuoyantDestructibleComponent), 0x0010000000000005);
				UProperty* NewProp_ChunkDensity = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ChunkDensity"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(ChunkDensity, UBuoyantDestructibleComponent), 0x0010000000000005);
				UProperty* NewProp_OceanManager = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("OceanManager"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OceanManager, UBuoyantDestructibleComponent), 0x0010040000000005, Z_Construct_UClass_AOceanManager_NoRegister());
				OuterClass->ClassConfigName = FName(TEXT("Engine"));
				static TCppClassTypeInfo<TCppClassTypeTraits<UBuoyantDestructibleComponent> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintSpawnableComponent"), TEXT(""));
				MetaData->SetValue(OuterClass, TEXT("ClassGroupNames"), TEXT("Physics"));
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Object Mesh Components|SkinnedMesh Mirroring Activation Components|Activation Object Mesh Components|SkinnedMesh Mirroring Activation Components|Activation Object Mobility Trigger"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("BuoyantDestructibleComponent.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Classes/BuoyantDestructibleComponent.h"));
				MetaData->SetValue(NewProp_ChunkStabilizationThreshold, TEXT("Category"), TEXT("Advanced"));
				MetaData->SetValue(NewProp_ChunkStabilizationThreshold, TEXT("ModuleRelativePath"), TEXT("Classes/BuoyantDestructibleComponent.h"));
				MetaData->SetValue(NewProp_ChunkStabilizationThreshold, TEXT("ToolTip"), TEXT("* Sets the mass-normalized kinetic energy threshold below which an actor may participate in stabilization.\n* (This value has no effect if PxSceneFlag::eENABLE_STABILIZATION was not enabled on the PxSceneDesc)"));
				MetaData->SetValue(NewProp_ChunkSleepThreshold, TEXT("Category"), TEXT("Advanced"));
				MetaData->SetValue(NewProp_ChunkSleepThreshold, TEXT("ModuleRelativePath"), TEXT("Classes/BuoyantDestructibleComponent.h"));
				MetaData->SetValue(NewProp_ChunkSleepThreshold, TEXT("ToolTip"), TEXT("* Sets the mass-normalized kinetic energy threshold below which an actor may go to sleep.\n* Default physx value is ~50.0f (we set it 0 to avoid weird sleeping chunks on water)."));
				MetaData->SetValue(NewProp_WaveForceMultiplier, TEXT("Category"), TEXT("Buoyancy Settings"));
				MetaData->SetValue(NewProp_WaveForceMultiplier, TEXT("ModuleRelativePath"), TEXT("Classes/BuoyantDestructibleComponent.h"));
				MetaData->SetValue(NewProp_EnableWaveForces, TEXT("Category"), TEXT("Buoyancy Settings"));
				MetaData->SetValue(NewProp_EnableWaveForces, TEXT("ModuleRelativePath"), TEXT("Classes/BuoyantDestructibleComponent.h"));
				MetaData->SetValue(NewProp_DrawDebugPoints, TEXT("Category"), TEXT("Buoyancy Settings"));
				MetaData->SetValue(NewProp_DrawDebugPoints, TEXT("ModuleRelativePath"), TEXT("Classes/BuoyantDestructibleComponent.h"));
				MetaData->SetValue(NewProp_TestPointRadius, TEXT("Category"), TEXT("Buoyancy Settings"));
				MetaData->SetValue(NewProp_TestPointRadius, TEXT("ModuleRelativePath"), TEXT("Classes/BuoyantDestructibleComponent.h"));
				MetaData->SetValue(NewProp_TestPointRadius, TEXT("ToolTip"), TEXT("Radius of the test point"));
				MetaData->SetValue(NewProp_MaxUnderwaterVelocity, TEXT("Category"), TEXT("Buoyancy Settings"));
				MetaData->SetValue(NewProp_MaxUnderwaterVelocity, TEXT("ModuleRelativePath"), TEXT("Classes/BuoyantDestructibleComponent.h"));
				MetaData->SetValue(NewProp_ClampMaxVelocity, TEXT("Category"), TEXT("Buoyancy Settings"));
				MetaData->SetValue(NewProp_ClampMaxVelocity, TEXT("ModuleRelativePath"), TEXT("Classes/BuoyantDestructibleComponent.h"));
				MetaData->SetValue(NewProp_VelocityDamper, TEXT("Category"), TEXT("Buoyancy Settings"));
				MetaData->SetValue(NewProp_VelocityDamper, TEXT("ModuleRelativePath"), TEXT("Classes/BuoyantDestructibleComponent.h"));
				MetaData->SetValue(NewProp_FluidAngularDamping, TEXT("Category"), TEXT("Buoyancy Settings"));
				MetaData->SetValue(NewProp_FluidAngularDamping, TEXT("ModuleRelativePath"), TEXT("Classes/BuoyantDestructibleComponent.h"));
				MetaData->SetValue(NewProp_FluidAngularDamping, TEXT("ToolTip"), TEXT("Angular damping when chunk is in fluid"));
				MetaData->SetValue(NewProp_FluidLinearDamping, TEXT("Category"), TEXT("Buoyancy Settings"));
				MetaData->SetValue(NewProp_FluidLinearDamping, TEXT("ModuleRelativePath"), TEXT("Classes/BuoyantDestructibleComponent.h"));
				MetaData->SetValue(NewProp_FluidLinearDamping, TEXT("ToolTip"), TEXT("Linear damping when chunk is in fluid"));
				MetaData->SetValue(NewProp_FluidDensity, TEXT("Category"), TEXT("Buoyancy Settings"));
				MetaData->SetValue(NewProp_FluidDensity, TEXT("ModuleRelativePath"), TEXT("Classes/BuoyantDestructibleComponent.h"));
				MetaData->SetValue(NewProp_FluidDensity, TEXT("ToolTip"), TEXT("Density of water"));
				MetaData->SetValue(NewProp_ChunkDensity, TEXT("Category"), TEXT("Buoyancy Settings"));
				MetaData->SetValue(NewProp_ChunkDensity, TEXT("ModuleRelativePath"), TEXT("Classes/BuoyantDestructibleComponent.h"));
				MetaData->SetValue(NewProp_ChunkDensity, TEXT("ToolTip"), TEXT("Density of each chunk"));
				MetaData->SetValue(NewProp_OceanManager, TEXT("Category"), TEXT("Buoyancy Settings"));
				MetaData->SetValue(NewProp_OceanManager, TEXT("ModuleRelativePath"), TEXT("Classes/BuoyantDestructibleComponent.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBuoyantDestructibleComponent, 453595965);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBuoyantDestructibleComponent(Z_Construct_UClass_UBuoyantDestructibleComponent, &UBuoyantDestructibleComponent::StaticClass, TEXT("/Script/OceanPlugin"), TEXT("UBuoyantDestructibleComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBuoyantDestructibleComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
