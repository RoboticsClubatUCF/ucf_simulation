// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/OceanPluginPrivatePCH.h"
#include "Classes/BuoyancyComponent.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBuoyancyComponent() {}
// Cross Module References
	OCEANPLUGIN_API UClass* Z_Construct_UClass_UBuoyancyComponent_NoRegister();
	OCEANPLUGIN_API UClass* Z_Construct_UClass_UBuoyancyComponent();
	ENGINE_API UClass* Z_Construct_UClass_UMovementComponent();
	UPackage* Z_Construct_UPackage__Script_OceanPlugin();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	OCEANPLUGIN_API UClass* Z_Construct_UClass_AOceanManager_NoRegister();
// End Cross Module References
	void UBuoyancyComponent::StaticRegisterNativesUBuoyancyComponent()
	{
	}
	UClass* Z_Construct_UClass_UBuoyancyComponent_NoRegister()
	{
		return UBuoyancyComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UBuoyancyComponent()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UMovementComponent();
			Z_Construct_UPackage__Script_OceanPlugin();
			OuterClass = UBuoyancyComponent::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20B00080u;


				UProperty* NewProp_WaveForceMultiplier = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("WaveForceMultiplier"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(WaveForceMultiplier, UBuoyancyComponent), 0x0010040000000005);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(EnableWaveForces, UBuoyancyComponent);
				UProperty* NewProp_EnableWaveForces = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("EnableWaveForces"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(EnableWaveForces, UBuoyancyComponent), 0x0010040000000005, CPP_BOOL_PROPERTY_BITMASK(EnableWaveForces, UBuoyancyComponent), sizeof(bool), true);
				UProperty* NewProp_StayUprightDesiredRotation = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("StayUprightDesiredRotation"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(StayUprightDesiredRotation, UBuoyancyComponent), 0x0010040000000005, Z_Construct_UScriptStruct_FRotator());
				UProperty* NewProp_StayUprightDamping = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("StayUprightDamping"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(StayUprightDamping, UBuoyancyComponent), 0x0010040000000005);
				UProperty* NewProp_StayUprightStiffness = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("StayUprightStiffness"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(StayUprightStiffness, UBuoyancyComponent), 0x0010040000000005);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(EnableStayUprightConstraint, UBuoyancyComponent);
				UProperty* NewProp_EnableStayUprightConstraint = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("EnableStayUprightConstraint"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(EnableStayUprightConstraint, UBuoyancyComponent), 0x0010040000000005, CPP_BOOL_PROPERTY_BITMASK(EnableStayUprightConstraint, UBuoyancyComponent), sizeof(bool), true);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(DrawDebugPoints, UBuoyancyComponent);
				UProperty* NewProp_DrawDebugPoints = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("DrawDebugPoints"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(DrawDebugPoints, UBuoyancyComponent), 0x0010040000000005, CPP_BOOL_PROPERTY_BITMASK(DrawDebugPoints, UBuoyancyComponent), sizeof(bool), true);
				UProperty* NewProp_PointDensityOverride = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("PointDensityOverride"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(PointDensityOverride, UBuoyancyComponent), 0x0010040000000005);
				UProperty* NewProp_PointDensityOverride_Inner = new(EC_InternalUseOnlyConstructor, NewProp_PointDensityOverride, TEXT("PointDensityOverride"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
				UProperty* NewProp_TestPoints = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("TestPoints"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(TestPoints, UBuoyancyComponent), 0x0010000000000005);
				UProperty* NewProp_TestPoints_Inner = new(EC_InternalUseOnlyConstructor, NewProp_TestPoints, TEXT("TestPoints"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FVector());
				UProperty* NewProp_TestPointRadius = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("TestPointRadius"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(TestPointRadius, UBuoyancyComponent), 0x0010000000000005);
				UProperty* NewProp_MaxUnderwaterVelocity = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("MaxUnderwaterVelocity"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(MaxUnderwaterVelocity, UBuoyancyComponent), 0x0010000000000005);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(ClampMaxVelocity, UBuoyancyComponent);
				UProperty* NewProp_ClampMaxVelocity = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ClampMaxVelocity"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ClampMaxVelocity, UBuoyancyComponent), 0x0010000000000005, CPP_BOOL_PROPERTY_BITMASK(ClampMaxVelocity, UBuoyancyComponent), sizeof(bool), true);
				UProperty* NewProp_VelocityDamper = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("VelocityDamper"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(VelocityDamper, UBuoyancyComponent), 0x0010040000000005, Z_Construct_UScriptStruct_FVector());
				UProperty* NewProp_FluidAngularDamping = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("FluidAngularDamping"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(FluidAngularDamping, UBuoyancyComponent), 0x0010000000000005);
				UProperty* NewProp_FluidLinearDamping = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("FluidLinearDamping"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(FluidLinearDamping, UBuoyancyComponent), 0x0010000000000005);
				UProperty* NewProp_FluidDensity = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("FluidDensity"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(FluidDensity, UBuoyancyComponent), 0x0010000000000005);
				UProperty* NewProp_MeshDensity = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("MeshDensity"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(MeshDensity, UBuoyancyComponent), 0x0010000000000005);
				UProperty* NewProp_OceanManager = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("OceanManager"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OceanManager, UBuoyancyComponent), 0x0010040000000005, Z_Construct_UClass_AOceanManager_NoRegister());
				static TCppClassTypeInfo<TCppClassTypeTraits<UBuoyancyComponent> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintSpawnableComponent"), TEXT(""));
				MetaData->SetValue(OuterClass, TEXT("ClassGroupNames"), TEXT("Movement"));
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("PlanarMovement Components|Movement|Planar Velocity"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("BuoyancyComponent.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Classes/BuoyancyComponent.h"));
				MetaData->SetValue(OuterClass, TEXT("ToolTip"), TEXT("Buoyancy component\nOceanManager is required in the level for this to work."));
				MetaData->SetValue(NewProp_WaveForceMultiplier, TEXT("Category"), TEXT("Buoyancy Settings"));
				MetaData->SetValue(NewProp_WaveForceMultiplier, TEXT("ModuleRelativePath"), TEXT("Classes/BuoyancyComponent.h"));
				MetaData->SetValue(NewProp_EnableWaveForces, TEXT("Category"), TEXT("Buoyancy Settings"));
				MetaData->SetValue(NewProp_EnableWaveForces, TEXT("ModuleRelativePath"), TEXT("Classes/BuoyancyComponent.h"));
				MetaData->SetValue(NewProp_EnableWaveForces, TEXT("ToolTip"), TEXT("Waves will push objects towards the wave direction set in the Ocean Manager.\n-STILL WIP-"));
				MetaData->SetValue(NewProp_StayUprightDesiredRotation, TEXT("Category"), TEXT("Buoyancy Settings"));
				MetaData->SetValue(NewProp_StayUprightDesiredRotation, TEXT("ModuleRelativePath"), TEXT("Classes/BuoyancyComponent.h"));
				MetaData->SetValue(NewProp_StayUprightDamping, TEXT("Category"), TEXT("Buoyancy Settings"));
				MetaData->SetValue(NewProp_StayUprightDamping, TEXT("ModuleRelativePath"), TEXT("Classes/BuoyancyComponent.h"));
				MetaData->SetValue(NewProp_StayUprightStiffness, TEXT("Category"), TEXT("Buoyancy Settings"));
				MetaData->SetValue(NewProp_StayUprightStiffness, TEXT("ModuleRelativePath"), TEXT("Classes/BuoyancyComponent.h"));
				MetaData->SetValue(NewProp_EnableStayUprightConstraint, TEXT("Category"), TEXT("Buoyancy Settings"));
				MetaData->SetValue(NewProp_EnableStayUprightConstraint, TEXT("ModuleRelativePath"), TEXT("Classes/BuoyancyComponent.h"));
				MetaData->SetValue(NewProp_EnableStayUprightConstraint, TEXT("ToolTip"), TEXT("Stay upright physics constraint (inspired by UDK's StayUprightSpring)\n-STILL WIP-"));
				MetaData->SetValue(NewProp_DrawDebugPoints, TEXT("Category"), TEXT("Buoyancy Settings"));
				MetaData->SetValue(NewProp_DrawDebugPoints, TEXT("ModuleRelativePath"), TEXT("Classes/BuoyancyComponent.h"));
				MetaData->SetValue(NewProp_PointDensityOverride, TEXT("Category"), TEXT("Buoyancy Settings"));
				MetaData->SetValue(NewProp_PointDensityOverride, TEXT("ModuleRelativePath"), TEXT("Classes/BuoyancyComponent.h"));
				MetaData->SetValue(NewProp_PointDensityOverride, TEXT("ToolTip"), TEXT("Per-point mesh density override, can be used for half-sinking objects etc."));
				MetaData->SetValue(NewProp_TestPoints, TEXT("Category"), TEXT("Buoyancy Settings"));
				MetaData->SetValue(NewProp_TestPoints, TEXT("ModuleRelativePath"), TEXT("Classes/BuoyancyComponent.h"));
				MetaData->SetValue(NewProp_TestPoints, TEXT("ToolTip"), TEXT("Test point array. At least one point is required for buoyancy."));
				MetaData->SetValue(NewProp_TestPointRadius, TEXT("Category"), TEXT("Buoyancy Settings"));
				MetaData->SetValue(NewProp_TestPointRadius, TEXT("ModuleRelativePath"), TEXT("Classes/BuoyancyComponent.h"));
				MetaData->SetValue(NewProp_TestPointRadius, TEXT("ToolTip"), TEXT("Radius of the points."));
				MetaData->SetValue(NewProp_MaxUnderwaterVelocity, TEXT("Category"), TEXT("Buoyancy Settings"));
				MetaData->SetValue(NewProp_MaxUnderwaterVelocity, TEXT("ModuleRelativePath"), TEXT("Classes/BuoyancyComponent.h"));
				MetaData->SetValue(NewProp_ClampMaxVelocity, TEXT("Category"), TEXT("Buoyancy Settings"));
				MetaData->SetValue(NewProp_ClampMaxVelocity, TEXT("ModuleRelativePath"), TEXT("Classes/BuoyancyComponent.h"));
				MetaData->SetValue(NewProp_VelocityDamper, TEXT("Category"), TEXT("Buoyancy Settings"));
				MetaData->SetValue(NewProp_VelocityDamper, TEXT("ModuleRelativePath"), TEXT("Classes/BuoyancyComponent.h"));
				MetaData->SetValue(NewProp_FluidAngularDamping, TEXT("Category"), TEXT("Buoyancy Settings"));
				MetaData->SetValue(NewProp_FluidAngularDamping, TEXT("ModuleRelativePath"), TEXT("Classes/BuoyancyComponent.h"));
				MetaData->SetValue(NewProp_FluidAngularDamping, TEXT("ToolTip"), TEXT("Angular damping when object is in fluid."));
				MetaData->SetValue(NewProp_FluidLinearDamping, TEXT("Category"), TEXT("Buoyancy Settings"));
				MetaData->SetValue(NewProp_FluidLinearDamping, TEXT("ModuleRelativePath"), TEXT("Classes/BuoyancyComponent.h"));
				MetaData->SetValue(NewProp_FluidLinearDamping, TEXT("ToolTip"), TEXT("Linear damping when object is in fluid."));
				MetaData->SetValue(NewProp_FluidDensity, TEXT("Category"), TEXT("Buoyancy Settings"));
				MetaData->SetValue(NewProp_FluidDensity, TEXT("ModuleRelativePath"), TEXT("Classes/BuoyancyComponent.h"));
				MetaData->SetValue(NewProp_FluidDensity, TEXT("ToolTip"), TEXT("Density of water. Typically you don't need to change this."));
				MetaData->SetValue(NewProp_MeshDensity, TEXT("Category"), TEXT("Buoyancy Settings"));
				MetaData->SetValue(NewProp_MeshDensity, TEXT("ModuleRelativePath"), TEXT("Classes/BuoyancyComponent.h"));
				MetaData->SetValue(NewProp_MeshDensity, TEXT("ToolTip"), TEXT("Density of mesh."));
				MetaData->SetValue(NewProp_OceanManager, TEXT("Category"), TEXT("Buoyancy Settings"));
				MetaData->SetValue(NewProp_OceanManager, TEXT("ModuleRelativePath"), TEXT("Classes/BuoyancyComponent.h"));
				MetaData->SetValue(NewProp_OceanManager, TEXT("ToolTip"), TEXT("OceanManager used by the component, if unassigned component will auto-detect"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBuoyancyComponent, 3519450454);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBuoyancyComponent(Z_Construct_UClass_UBuoyancyComponent, &UBuoyancyComponent::StaticClass, TEXT("/Script/OceanPlugin"), TEXT("UBuoyancyComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBuoyancyComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
