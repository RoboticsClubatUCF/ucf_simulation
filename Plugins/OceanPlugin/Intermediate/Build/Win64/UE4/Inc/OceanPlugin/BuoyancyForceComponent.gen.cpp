// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/OceanPluginPrivatePCH.h"
#include "Classes/BuoyancyForceComponent.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBuoyancyForceComponent() {}
// Cross Module References
	OCEANPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FStructBoneOverride();
	UPackage* Z_Construct_UPackage__Script_OceanPlugin();
	OCEANPLUGIN_API UClass* Z_Construct_UClass_UBuoyancyForceComponent_NoRegister();
	OCEANPLUGIN_API UClass* Z_Construct_UClass_UBuoyancyForceComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETickingGroup();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	OCEANPLUGIN_API UClass* Z_Construct_UClass_AOceanManager_NoRegister();
// End Cross Module References
class UScriptStruct* FStructBoneOverride::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern OCEANPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FStructBoneOverride_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStructBoneOverride, Z_Construct_UPackage__Script_OceanPlugin(), TEXT("StructBoneOverride"), sizeof(FStructBoneOverride), Get_Z_Construct_UScriptStruct_FStructBoneOverride_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStructBoneOverride(FStructBoneOverride::StaticStruct, TEXT("/Script/OceanPlugin"), TEXT("StructBoneOverride"), false, nullptr, nullptr);
static struct FScriptStruct_OceanPlugin_StaticRegisterNativesFStructBoneOverride
{
	FScriptStruct_OceanPlugin_StaticRegisterNativesFStructBoneOverride()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("StructBoneOverride")),new UScriptStruct::TCppStructOps<FStructBoneOverride>);
	}
} ScriptStruct_OceanPlugin_StaticRegisterNativesFStructBoneOverride;
	UScriptStruct* Z_Construct_UScriptStruct_FStructBoneOverride()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_OceanPlugin();
		extern uint32 Get_Z_Construct_UScriptStruct_FStructBoneOverride_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StructBoneOverride"), sizeof(FStructBoneOverride), Get_Z_Construct_UScriptStruct_FStructBoneOverride_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("StructBoneOverride"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FStructBoneOverride>, EStructFlags(0x00000201));
			UProperty* NewProp_TestRadius = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("TestRadius"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(TestRadius, FStructBoneOverride), 0x0010000000000005);
			UProperty* NewProp_Density = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Density"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(Density, FStructBoneOverride), 0x0010000000000005);
			UProperty* NewProp_BoneName = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("BoneName"), RF_Public|RF_Transient|RF_MarkAsNative) UNameProperty(CPP_PROPERTY_BASE(BoneName, FStructBoneOverride), 0x0010000000000005);
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Classes/BuoyancyForceComponent.h"));
			MetaData->SetValue(ReturnStruct, TEXT("ToolTip"), TEXT("Custom bone density/radius override struct."));
			MetaData->SetValue(NewProp_TestRadius, TEXT("Category"), TEXT("Buoyancy"));
			MetaData->SetValue(NewProp_TestRadius, TEXT("ModuleRelativePath"), TEXT("Classes/BuoyancyForceComponent.h"));
			MetaData->SetValue(NewProp_Density, TEXT("Category"), TEXT("Buoyancy"));
			MetaData->SetValue(NewProp_Density, TEXT("ModuleRelativePath"), TEXT("Classes/BuoyancyForceComponent.h"));
			MetaData->SetValue(NewProp_BoneName, TEXT("Category"), TEXT("Buoyancy"));
			MetaData->SetValue(NewProp_BoneName, TEXT("ModuleRelativePath"), TEXT("Classes/BuoyancyForceComponent.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStructBoneOverride_CRC() { return 4073370848U; }
	void UBuoyancyForceComponent::StaticRegisterNativesUBuoyancyForceComponent()
	{
	}
	UClass* Z_Construct_UClass_UBuoyancyForceComponent_NoRegister()
	{
		return UBuoyancyForceComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UBuoyancyForceComponent()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_USceneComponent();
			Z_Construct_UPackage__Script_OceanPlugin();
			OuterClass = UBuoyancyForceComponent::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20A80080u;


				UProperty* NewProp_TickGroup = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("TickGroup"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(CPP_PROPERTY_BASE(TickGroup, UBuoyancyForceComponent), 0x0010040000000005, Z_Construct_UEnum_Engine_ETickingGroup());
				UProperty* NewProp_WaveForceMultiplier = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("WaveForceMultiplier"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(WaveForceMultiplier, UBuoyancyForceComponent), 0x0010040000000005);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(EnableWaveForces, UBuoyancyForceComponent);
				UProperty* NewProp_EnableWaveForces = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("EnableWaveForces"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(EnableWaveForces, UBuoyancyForceComponent), 0x0010040000000005, CPP_BOOL_PROPERTY_BITMASK(EnableWaveForces, UBuoyancyForceComponent), sizeof(bool), true);
				UProperty* NewProp_StayUprightDesiredRotation = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("StayUprightDesiredRotation"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(StayUprightDesiredRotation, UBuoyancyForceComponent), 0x0010040000000005, Z_Construct_UScriptStruct_FRotator());
				UProperty* NewProp_StayUprightDamping = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("StayUprightDamping"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(StayUprightDamping, UBuoyancyForceComponent), 0x0010040000000005);
				UProperty* NewProp_StayUprightStiffness = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("StayUprightStiffness"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(StayUprightStiffness, UBuoyancyForceComponent), 0x0010040000000005);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(EnableStayUprightConstraint, UBuoyancyForceComponent);
				UProperty* NewProp_EnableStayUprightConstraint = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("EnableStayUprightConstraint"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(EnableStayUprightConstraint, UBuoyancyForceComponent), 0x0010040000000005, CPP_BOOL_PROPERTY_BITMASK(EnableStayUprightConstraint, UBuoyancyForceComponent), sizeof(bool), true);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(DrawDebugPoints, UBuoyancyForceComponent);
				UProperty* NewProp_DrawDebugPoints = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("DrawDebugPoints"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(DrawDebugPoints, UBuoyancyForceComponent), 0x0010040000000005, CPP_BOOL_PROPERTY_BITMASK(DrawDebugPoints, UBuoyancyForceComponent), sizeof(bool), true);
				UProperty* NewProp_BoneOverride = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("BoneOverride"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(BoneOverride, UBuoyancyForceComponent), 0x0010040000000005);
				UProperty* NewProp_BoneOverride_Inner = new(EC_InternalUseOnlyConstructor, NewProp_BoneOverride, TEXT("BoneOverride"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FStructBoneOverride());
				UProperty* NewProp_PointDensityOverride = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("PointDensityOverride"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(PointDensityOverride, UBuoyancyForceComponent), 0x0010040000000005);
				UProperty* NewProp_PointDensityOverride_Inner = new(EC_InternalUseOnlyConstructor, NewProp_PointDensityOverride, TEXT("PointDensityOverride"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(TwoGerstnerIterations, UBuoyancyForceComponent);
				UProperty* NewProp_TwoGerstnerIterations = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("TwoGerstnerIterations"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(TwoGerstnerIterations, UBuoyancyForceComponent), 0x0010000000000005, CPP_BOOL_PROPERTY_BITMASK(TwoGerstnerIterations, UBuoyancyForceComponent), sizeof(bool), true);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(SnapToSurfaceIfNoPhysics, UBuoyancyForceComponent);
				UProperty* NewProp_SnapToSurfaceIfNoPhysics = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("SnapToSurfaceIfNoPhysics"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(SnapToSurfaceIfNoPhysics, UBuoyancyForceComponent), 0x0010000000000005, CPP_BOOL_PROPERTY_BITMASK(SnapToSurfaceIfNoPhysics, UBuoyancyForceComponent), sizeof(bool), true);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(ApplyForceToBones, UBuoyancyForceComponent);
				UProperty* NewProp_ApplyForceToBones = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ApplyForceToBones"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ApplyForceToBones, UBuoyancyForceComponent), 0x0010000000000005, CPP_BOOL_PROPERTY_BITMASK(ApplyForceToBones, UBuoyancyForceComponent), sizeof(bool), true);
				UProperty* NewProp_TestPoints = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("TestPoints"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(TestPoints, UBuoyancyForceComponent), 0x0010000000000005);
				UProperty* NewProp_TestPoints_Inner = new(EC_InternalUseOnlyConstructor, NewProp_TestPoints, TEXT("TestPoints"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FVector());
				UProperty* NewProp_TestPointRadius = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("TestPointRadius"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(TestPointRadius, UBuoyancyForceComponent), 0x0010000000000005);
				UProperty* NewProp_MaxUnderwaterVelocity = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("MaxUnderwaterVelocity"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(MaxUnderwaterVelocity, UBuoyancyForceComponent), 0x0010000000000005);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(ClampMaxVelocity, UBuoyancyForceComponent);
				UProperty* NewProp_ClampMaxVelocity = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ClampMaxVelocity"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ClampMaxVelocity, UBuoyancyForceComponent), 0x0010000000000005, CPP_BOOL_PROPERTY_BITMASK(ClampMaxVelocity, UBuoyancyForceComponent), sizeof(bool), true);
				UProperty* NewProp_VelocityDamper = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("VelocityDamper"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(VelocityDamper, UBuoyancyForceComponent), 0x0010040000000005, Z_Construct_UScriptStruct_FVector());
				UProperty* NewProp_FluidAngularDamping = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("FluidAngularDamping"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(FluidAngularDamping, UBuoyancyForceComponent), 0x0010000000000005);
				UProperty* NewProp_FluidLinearDamping = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("FluidLinearDamping"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(FluidLinearDamping, UBuoyancyForceComponent), 0x0010000000000005);
				UProperty* NewProp_FluidDensity = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("FluidDensity"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(FluidDensity, UBuoyancyForceComponent), 0x0010000000000005);
				UProperty* NewProp_MeshDensity = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("MeshDensity"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(MeshDensity, UBuoyancyForceComponent), 0x0010000000000005);
				UProperty* NewProp_OceanManager = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("OceanManager"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OceanManager, UBuoyancyForceComponent), 0x0010040000000005, Z_Construct_UClass_AOceanManager_NoRegister());
				static TCppClassTypeInfo<TCppClassTypeTraits<UBuoyancyForceComponent> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintSpawnableComponent"), TEXT(""));
				MetaData->SetValue(OuterClass, TEXT("ClassGroupNames"), TEXT("Physics"));
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Object Mobility LOD PhysicsVolume"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("BuoyancyForceComponent.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Classes/BuoyancyForceComponent.h"));
				MetaData->SetValue(OuterClass, TEXT("ToolTip"), TEXT("Applies buoyancy forces to physics objects.\nOceanManager is required in the level for this to work."));
				MetaData->SetValue(NewProp_TickGroup, TEXT("Category"), TEXT("Buoyancy Settings"));
				MetaData->SetValue(NewProp_TickGroup, TEXT("ModuleRelativePath"), TEXT("Classes/BuoyancyForceComponent.h"));
				MetaData->SetValue(NewProp_WaveForceMultiplier, TEXT("Category"), TEXT("Buoyancy Settings"));
				MetaData->SetValue(NewProp_WaveForceMultiplier, TEXT("ModuleRelativePath"), TEXT("Classes/BuoyancyForceComponent.h"));
				MetaData->SetValue(NewProp_EnableWaveForces, TEXT("Category"), TEXT("Buoyancy Settings"));
				MetaData->SetValue(NewProp_EnableWaveForces, TEXT("ModuleRelativePath"), TEXT("Classes/BuoyancyForceComponent.h"));
				MetaData->SetValue(NewProp_EnableWaveForces, TEXT("ToolTip"), TEXT("Waves will push objects towards the wave direction set in the Ocean Manager.\n-STILL WIP-"));
				MetaData->SetValue(NewProp_StayUprightDesiredRotation, TEXT("Category"), TEXT("Buoyancy Settings"));
				MetaData->SetValue(NewProp_StayUprightDesiredRotation, TEXT("ModuleRelativePath"), TEXT("Classes/BuoyancyForceComponent.h"));
				MetaData->SetValue(NewProp_StayUprightDamping, TEXT("Category"), TEXT("Buoyancy Settings"));
				MetaData->SetValue(NewProp_StayUprightDamping, TEXT("ModuleRelativePath"), TEXT("Classes/BuoyancyForceComponent.h"));
				MetaData->SetValue(NewProp_StayUprightStiffness, TEXT("Category"), TEXT("Buoyancy Settings"));
				MetaData->SetValue(NewProp_StayUprightStiffness, TEXT("ModuleRelativePath"), TEXT("Classes/BuoyancyForceComponent.h"));
				MetaData->SetValue(NewProp_EnableStayUprightConstraint, TEXT("Category"), TEXT("Buoyancy Settings"));
				MetaData->SetValue(NewProp_EnableStayUprightConstraint, TEXT("ModuleRelativePath"), TEXT("Classes/BuoyancyForceComponent.h"));
				MetaData->SetValue(NewProp_EnableStayUprightConstraint, TEXT("ToolTip"), TEXT("Stay upright physics constraint (inspired by UDK's StayUprightSpring)\n-STILL WIP-"));
				MetaData->SetValue(NewProp_DrawDebugPoints, TEXT("Category"), TEXT("Buoyancy Settings"));
				MetaData->SetValue(NewProp_DrawDebugPoints, TEXT("ModuleRelativePath"), TEXT("Classes/BuoyancyForceComponent.h"));
				MetaData->SetValue(NewProp_BoneOverride, TEXT("Category"), TEXT("Buoyancy Settings"));
				MetaData->SetValue(NewProp_BoneOverride, TEXT("ModuleRelativePath"), TEXT("Classes/BuoyancyForceComponent.h"));
				MetaData->SetValue(NewProp_BoneOverride, TEXT("ToolTip"), TEXT("Density & radius overrides per skeletal bone (ApplyForceToBones needs to be true)."));
				MetaData->SetValue(NewProp_PointDensityOverride, TEXT("Category"), TEXT("Buoyancy Settings"));
				MetaData->SetValue(NewProp_PointDensityOverride, TEXT("ModuleRelativePath"), TEXT("Classes/BuoyancyForceComponent.h"));
				MetaData->SetValue(NewProp_PointDensityOverride, TEXT("ToolTip"), TEXT("Per-point mesh density override, can be used for half-sinking objects etc."));
				MetaData->SetValue(NewProp_TwoGerstnerIterations, TEXT("Category"), TEXT("Buoyancy Settings"));
				MetaData->SetValue(NewProp_TwoGerstnerIterations, TEXT("ModuleRelativePath"), TEXT("Classes/BuoyancyForceComponent.h"));
				MetaData->SetValue(NewProp_TwoGerstnerIterations, TEXT("ToolTip"), TEXT("More accurate gerstner wave height calculations by accounting for the x/y displacement.\nKeep in mind that this effectively doubles the gerstner calculations per test point.\nUse only if accurate height readback is needed."));
				MetaData->SetValue(NewProp_SnapToSurfaceIfNoPhysics, TEXT("Category"), TEXT("Buoyancy Settings"));
				MetaData->SetValue(NewProp_SnapToSurfaceIfNoPhysics, TEXT("ModuleRelativePath"), TEXT("Classes/BuoyancyForceComponent.h"));
				MetaData->SetValue(NewProp_SnapToSurfaceIfNoPhysics, TEXT("ToolTip"), TEXT("If object has no physics enabled, snap to water surface."));
				MetaData->SetValue(NewProp_ApplyForceToBones, TEXT("Category"), TEXT("Buoyancy Settings"));
				MetaData->SetValue(NewProp_ApplyForceToBones, TEXT("ModuleRelativePath"), TEXT("Classes/BuoyancyForceComponent.h"));
				MetaData->SetValue(NewProp_ApplyForceToBones, TEXT("ToolTip"), TEXT("If skeletal mesh with physics asset, it will apply buoyancy force at the COM of each bone instead of using the test point array."));
				MetaData->SetValue(NewProp_TestPoints, TEXT("Category"), TEXT("Buoyancy Settings"));
				MetaData->SetValue(NewProp_TestPoints, TEXT("ModuleRelativePath"), TEXT("Classes/BuoyancyForceComponent.h"));
				MetaData->SetValue(NewProp_TestPoints, TEXT("ToolTip"), TEXT("Test point array. At least one point is required for buoyancy."));
				MetaData->SetValue(NewProp_TestPointRadius, TEXT("Category"), TEXT("Buoyancy Settings"));
				MetaData->SetValue(NewProp_TestPointRadius, TEXT("ModuleRelativePath"), TEXT("Classes/BuoyancyForceComponent.h"));
				MetaData->SetValue(NewProp_TestPointRadius, TEXT("ToolTip"), TEXT("Radius of the points."));
				MetaData->SetValue(NewProp_MaxUnderwaterVelocity, TEXT("Category"), TEXT("Buoyancy Settings"));
				MetaData->SetValue(NewProp_MaxUnderwaterVelocity, TEXT("ModuleRelativePath"), TEXT("Classes/BuoyancyForceComponent.h"));
				MetaData->SetValue(NewProp_ClampMaxVelocity, TEXT("Category"), TEXT("Buoyancy Settings"));
				MetaData->SetValue(NewProp_ClampMaxVelocity, TEXT("ModuleRelativePath"), TEXT("Classes/BuoyancyForceComponent.h"));
				MetaData->SetValue(NewProp_VelocityDamper, TEXT("Category"), TEXT("Buoyancy Settings"));
				MetaData->SetValue(NewProp_VelocityDamper, TEXT("ModuleRelativePath"), TEXT("Classes/BuoyancyForceComponent.h"));
				MetaData->SetValue(NewProp_FluidAngularDamping, TEXT("Category"), TEXT("Buoyancy Settings"));
				MetaData->SetValue(NewProp_FluidAngularDamping, TEXT("ModuleRelativePath"), TEXT("Classes/BuoyancyForceComponent.h"));
				MetaData->SetValue(NewProp_FluidAngularDamping, TEXT("ToolTip"), TEXT("Angular damping when object is in fluid."));
				MetaData->SetValue(NewProp_FluidLinearDamping, TEXT("Category"), TEXT("Buoyancy Settings"));
				MetaData->SetValue(NewProp_FluidLinearDamping, TEXT("ModuleRelativePath"), TEXT("Classes/BuoyancyForceComponent.h"));
				MetaData->SetValue(NewProp_FluidLinearDamping, TEXT("ToolTip"), TEXT("Linear damping when object is in fluid."));
				MetaData->SetValue(NewProp_FluidDensity, TEXT("Category"), TEXT("Buoyancy Settings"));
				MetaData->SetValue(NewProp_FluidDensity, TEXT("ModuleRelativePath"), TEXT("Classes/BuoyancyForceComponent.h"));
				MetaData->SetValue(NewProp_FluidDensity, TEXT("ToolTip"), TEXT("Density of water. Typically you don't need to change this."));
				MetaData->SetValue(NewProp_MeshDensity, TEXT("Category"), TEXT("Buoyancy Settings"));
				MetaData->SetValue(NewProp_MeshDensity, TEXT("ModuleRelativePath"), TEXT("Classes/BuoyancyForceComponent.h"));
				MetaData->SetValue(NewProp_MeshDensity, TEXT("ToolTip"), TEXT("Density of mesh."));
				MetaData->SetValue(NewProp_OceanManager, TEXT("Category"), TEXT("Buoyancy Settings"));
				MetaData->SetValue(NewProp_OceanManager, TEXT("ModuleRelativePath"), TEXT("Classes/BuoyancyForceComponent.h"));
				MetaData->SetValue(NewProp_OceanManager, TEXT("ToolTip"), TEXT("OceanManager used by the component, if unassigned component will auto-detect"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBuoyancyForceComponent, 594025075);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBuoyancyForceComponent(Z_Construct_UClass_UBuoyancyForceComponent, &UBuoyancyForceComponent::StaticClass, TEXT("/Script/OceanPlugin"), TEXT("UBuoyancyForceComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBuoyancyForceComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
