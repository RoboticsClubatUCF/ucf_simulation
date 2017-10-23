// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/OceanPluginPrivatePCH.h"
#include "Classes/BuoyantMesh/BuoyantMeshComponent.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBuoyantMeshComponent() {}
// Cross Module References
	OCEANPLUGIN_API UClass* Z_Construct_UClass_UBuoyantMeshComponent_NoRegister();
	OCEANPLUGIN_API UClass* Z_Construct_UClass_UBuoyantMeshComponent();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent();
	UPackage* Z_Construct_UPackage__Script_OceanPlugin();
	OCEANPLUGIN_API UClass* Z_Construct_UClass_UWaterHeightmapComponent_NoRegister();
	OCEANPLUGIN_API UClass* Z_Construct_UClass_AOceanManager_NoRegister();
// End Cross Module References
	void UBuoyantMeshComponent::StaticRegisterNativesUBuoyantMeshComponent()
	{
	}
	UClass* Z_Construct_UClass_UBuoyantMeshComponent_NoRegister()
	{
		return UBuoyantMeshComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UBuoyantMeshComponent()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UStaticMeshComponent();
			Z_Construct_UPackage__Script_OceanPlugin();
			OuterClass = UBuoyantMeshComponent::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20B01080u;


				UProperty* NewProp_WaterHeightmap = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("WaterHeightmap"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(WaterHeightmap, UBuoyantMeshComponent), 0x0040000000080008, Z_Construct_UClass_UWaterHeightmapComponent_NoRegister());
				UProperty* NewProp_WaterDensity = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("WaterDensity"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(WaterDensity, UBuoyantMeshComponent), 0x0010000000000005);
				UProperty* NewProp_Mass = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Mass"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(Mass, UBuoyantMeshComponent), 0x0010000000000005);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bOverrideMass, UBuoyantMeshComponent);
				UProperty* NewProp_bOverrideMass = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bOverrideMass"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bOverrideMass, UBuoyantMeshComponent), 0x0010000000000005, CPP_BOOL_PROPERTY_BITMASK(bOverrideMass, UBuoyantMeshComponent), sizeof(bool), true);
				UProperty* NewProp_MeshDensity = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("MeshDensity"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(MeshDensity, UBuoyantMeshComponent), 0x0010000000000005);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bOverrideMeshDensity, UBuoyantMeshComponent);
				UProperty* NewProp_bOverrideMeshDensity = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bOverrideMeshDensity"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bOverrideMeshDensity, UBuoyantMeshComponent), 0x0010000000000005, CPP_BOOL_PROPERTY_BITMASK(bOverrideMeshDensity, UBuoyantMeshComponent), sizeof(bool), true);
				UProperty* NewProp_ForceArrowSize = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ForceArrowSize"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(ForceArrowSize, UBuoyantMeshComponent), 0x0010000000000005);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bDrawSubtriangles, UBuoyantMeshComponent);
				UProperty* NewProp_bDrawSubtriangles = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bDrawSubtriangles"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bDrawSubtriangles, UBuoyantMeshComponent), 0x0010000000000005, CPP_BOOL_PROPERTY_BITMASK(bDrawSubtriangles, UBuoyantMeshComponent), sizeof(bool), true);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bDrawTriangles, UBuoyantMeshComponent);
				UProperty* NewProp_bDrawTriangles = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bDrawTriangles"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bDrawTriangles, UBuoyantMeshComponent), 0x0010000000000005, CPP_BOOL_PROPERTY_BITMASK(bDrawTriangles, UBuoyantMeshComponent), sizeof(bool), true);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bDrawVertices, UBuoyantMeshComponent);
				UProperty* NewProp_bDrawVertices = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bDrawVertices"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bDrawVertices, UBuoyantMeshComponent), 0x0010000000000005, CPP_BOOL_PROPERTY_BITMASK(bDrawVertices, UBuoyantMeshComponent), sizeof(bool), true);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bDrawWaterline, UBuoyantMeshComponent);
				UProperty* NewProp_bDrawWaterline = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bDrawWaterline"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bDrawWaterline, UBuoyantMeshComponent), 0x0010000000000005, CPP_BOOL_PROPERTY_BITMASK(bDrawWaterline, UBuoyantMeshComponent), sizeof(bool), true);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bDrawForceArrows, UBuoyantMeshComponent);
				UProperty* NewProp_bDrawForceArrows = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bDrawForceArrows"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bDrawForceArrows, UBuoyantMeshComponent), 0x0010000000000005, CPP_BOOL_PROPERTY_BITMASK(bDrawForceArrows, UBuoyantMeshComponent), sizeof(bool), true);
				UProperty* NewProp_OceanManager = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("OceanManager"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OceanManager, UBuoyantMeshComponent), 0x0010040000000005, Z_Construct_UClass_AOceanManager_NoRegister());
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bUseDynamicForces, UBuoyantMeshComponent);
				UProperty* NewProp_bUseDynamicForces = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bUseDynamicForces"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bUseDynamicForces, UBuoyantMeshComponent), 0x0010000000000005, CPP_BOOL_PROPERTY_BITMASK(bUseDynamicForces, UBuoyantMeshComponent), sizeof(bool), true);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bUseStaticForces, UBuoyantMeshComponent);
				UProperty* NewProp_bUseStaticForces = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bUseStaticForces"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bUseStaticForces, UBuoyantMeshComponent), 0x0010000000000005, CPP_BOOL_PROPERTY_BITMASK(bUseStaticForces, UBuoyantMeshComponent), sizeof(bool), true);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bUseWaterPatch, UBuoyantMeshComponent);
				UProperty* NewProp_bUseWaterPatch = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bUseWaterPatch"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bUseWaterPatch, UBuoyantMeshComponent), 0x0010000000000005, CPP_BOOL_PROPERTY_BITMASK(bUseWaterPatch, UBuoyantMeshComponent), sizeof(bool), true);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bVerticalForcesOnly, UBuoyantMeshComponent);
				UProperty* NewProp_bVerticalForcesOnly = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bVerticalForcesOnly"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bVerticalForcesOnly, UBuoyantMeshComponent), 0x0010000000000005, CPP_BOOL_PROPERTY_BITMASK(bVerticalForcesOnly, UBuoyantMeshComponent), sizeof(bool), true);
				OuterClass->ClassConfigName = FName(TEXT("Engine"));
				static TCppClassTypeInfo<TCppClassTypeTraits<UBuoyantMeshComponent> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintSpawnableComponent"), TEXT(""));
				MetaData->SetValue(OuterClass, TEXT("ClassGroupNames"), TEXT("Physics"));
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Object Activation Components|Activation Trigger"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("BuoyantMesh/BuoyantMeshComponent.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Classes/BuoyantMesh/BuoyantMeshComponent.h"));
				MetaData->SetValue(OuterClass, TEXT("ToolTip"), TEXT("This component applies to the root component buoyancy forces modeled from a static mesh.\nThe algorithm used is described in \"Water interaction model for boats in video\ngames\" by Jacques Kerner.\nhttp://gamasutra.com/view/news/237528/Water_interaction_model_for_boats_in_video_games.php\n\nIn addition, support for dynamic (drag) forces is included."));
				MetaData->SetValue(NewProp_WaterHeightmap, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_WaterHeightmap, TEXT("ModuleRelativePath"), TEXT("Classes/BuoyantMesh/BuoyantMeshComponent.h"));
				MetaData->SetValue(NewProp_WaterDensity, TEXT("Category"), TEXT("Mass Settings"));
				MetaData->SetValue(NewProp_WaterDensity, TEXT("ModuleRelativePath"), TEXT("Classes/BuoyantMesh/BuoyantMeshComponent.h"));
				MetaData->SetValue(NewProp_WaterDensity, TEXT("ToolTip"), TEXT("Density of the water in kg/uu^3. It is around 0.001027 if 1 unreal unit is 1 cm."));
				MetaData->SetValue(NewProp_Mass, TEXT("Category"), TEXT("Mass Settings"));
				MetaData->SetValue(NewProp_Mass, TEXT("ModuleRelativePath"), TEXT("Classes/BuoyantMesh/BuoyantMeshComponent.h"));
				MetaData->SetValue(NewProp_Mass, TEXT("ToolTip"), TEXT("Mass of the rigidbody in kg.\nDoes nothing if bOverrideMass is false."));
				MetaData->SetValue(NewProp_bOverrideMass, TEXT("Category"), TEXT("Mass Settings"));
				MetaData->SetValue(NewProp_bOverrideMass, TEXT("ModuleRelativePath"), TEXT("Classes/BuoyantMesh/BuoyantMeshComponent.h"));
				MetaData->SetValue(NewProp_MeshDensity, TEXT("Category"), TEXT("Mass Settings"));
				MetaData->SetValue(NewProp_MeshDensity, TEXT("ModuleRelativePath"), TEXT("Classes/BuoyantMesh/BuoyantMeshComponent.h"));
				MetaData->SetValue(NewProp_MeshDensity, TEXT("ToolTip"), TEXT("Density of the mesh in kg/uu^3. The object will sink if it's higher than the water density.\nDoes nothing if bOverrideMeshDensity is false."));
				MetaData->SetValue(NewProp_bOverrideMeshDensity, TEXT("Category"), TEXT("Mass Settings"));
				MetaData->SetValue(NewProp_bOverrideMeshDensity, TEXT("ModuleRelativePath"), TEXT("Classes/BuoyantMesh/BuoyantMeshComponent.h"));
				MetaData->SetValue(NewProp_ForceArrowSize, TEXT("Category"), TEXT("Debug"));
				MetaData->SetValue(NewProp_ForceArrowSize, TEXT("ModuleRelativePath"), TEXT("Classes/BuoyantMesh/BuoyantMeshComponent.h"));
				MetaData->SetValue(NewProp_ForceArrowSize, TEXT("ToolTip"), TEXT("Force arrow size multiplier."));
				MetaData->SetValue(NewProp_bDrawSubtriangles, TEXT("Category"), TEXT("Debug"));
				MetaData->SetValue(NewProp_bDrawSubtriangles, TEXT("ModuleRelativePath"), TEXT("Classes/BuoyantMesh/BuoyantMeshComponent.h"));
				MetaData->SetValue(NewProp_bDrawSubtriangles, TEXT("ToolTip"), TEXT("Draw the submerged triangles?"));
				MetaData->SetValue(NewProp_bDrawTriangles, TEXT("Category"), TEXT("Debug"));
				MetaData->SetValue(NewProp_bDrawTriangles, TEXT("ModuleRelativePath"), TEXT("Classes/BuoyantMesh/BuoyantMeshComponent.h"));
				MetaData->SetValue(NewProp_bDrawTriangles, TEXT("ToolTip"), TEXT("Draw the original mesh triangles?"));
				MetaData->SetValue(NewProp_bDrawVertices, TEXT("Category"), TEXT("Debug"));
				MetaData->SetValue(NewProp_bDrawVertices, TEXT("ModuleRelativePath"), TEXT("Classes/BuoyantMesh/BuoyantMeshComponent.h"));
				MetaData->SetValue(NewProp_bDrawVertices, TEXT("ToolTip"), TEXT("Draw the mesh vertices?"));
				MetaData->SetValue(NewProp_bDrawWaterline, TEXT("Category"), TEXT("Debug"));
				MetaData->SetValue(NewProp_bDrawWaterline, TEXT("ModuleRelativePath"), TEXT("Classes/BuoyantMesh/BuoyantMeshComponent.h"));
				MetaData->SetValue(NewProp_bDrawWaterline, TEXT("ToolTip"), TEXT("Draw the waterline on the mesh?"));
				MetaData->SetValue(NewProp_bDrawForceArrows, TEXT("Category"), TEXT("Debug"));
				MetaData->SetValue(NewProp_bDrawForceArrows, TEXT("ModuleRelativePath"), TEXT("Classes/BuoyantMesh/BuoyantMeshComponent.h"));
				MetaData->SetValue(NewProp_bDrawForceArrows, TEXT("ToolTip"), TEXT("Draw arrows representing the buoyancy forces pushing on the mesh?\nThe length is proportional to the force magnitude."));
				MetaData->SetValue(NewProp_OceanManager, TEXT("Category"), TEXT("Buoyancy Settings"));
				MetaData->SetValue(NewProp_OceanManager, TEXT("ModuleRelativePath"), TEXT("Classes/BuoyantMesh/BuoyantMeshComponent.h"));
				MetaData->SetValue(NewProp_OceanManager, TEXT("ToolTip"), TEXT("OceanManager used by the component, if unassigned component will auto-detect."));
				MetaData->SetValue(NewProp_bUseDynamicForces, TEXT("Category"), TEXT("Buoyancy Settings"));
				MetaData->SetValue(NewProp_bUseDynamicForces, TEXT("ModuleRelativePath"), TEXT("Classes/BuoyantMesh/BuoyantMeshComponent.h"));
				MetaData->SetValue(NewProp_bUseDynamicForces, TEXT("ToolTip"), TEXT("Use hydrodynamic (drag) forces if true."));
				MetaData->SetValue(NewProp_bUseStaticForces, TEXT("Category"), TEXT("Buoyancy Settings"));
				MetaData->SetValue(NewProp_bUseStaticForces, TEXT("ModuleRelativePath"), TEXT("Classes/BuoyantMesh/BuoyantMeshComponent.h"));
				MetaData->SetValue(NewProp_bUseStaticForces, TEXT("ToolTip"), TEXT("Use hydrostatic (buoyancy) forces if true."));
				MetaData->SetValue(NewProp_bUseWaterPatch, TEXT("Category"), TEXT("Buoyancy Settings"));
				MetaData->SetValue(NewProp_bUseWaterPatch, TEXT("ModuleRelativePath"), TEXT("Classes/BuoyantMesh/BuoyantMeshComponent.h"));
				MetaData->SetValue(NewProp_bUseWaterPatch, TEXT("ToolTip"), TEXT("Use a WaterPatchComponent to possibly improve performance.\nThis actor needs a WaterPatchComponent for this to work."));
				MetaData->SetValue(NewProp_bVerticalForcesOnly, TEXT("Category"), TEXT("Buoyancy Settings"));
				MetaData->SetValue(NewProp_bVerticalForcesOnly, TEXT("ModuleRelativePath"), TEXT("Classes/BuoyantMesh/BuoyantMeshComponent.h"));
				MetaData->SetValue(NewProp_bVerticalForcesOnly, TEXT("ToolTip"), TEXT("Only use the vertical component of the buoyancy forces."));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBuoyantMeshComponent, 3447111095);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBuoyantMeshComponent(Z_Construct_UClass_UBuoyantMeshComponent, &UBuoyantMeshComponent::StaticClass, TEXT("/Script/OceanPlugin"), TEXT("UBuoyantMeshComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBuoyantMeshComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
