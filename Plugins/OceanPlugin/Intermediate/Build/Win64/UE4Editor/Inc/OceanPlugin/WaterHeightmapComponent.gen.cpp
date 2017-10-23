// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/OceanPluginPrivatePCH.h"
#include "Classes/BuoyantMesh/WaterHeightmapComponent.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWaterHeightmapComponent() {}
// Cross Module References
	OCEANPLUGIN_API UClass* Z_Construct_UClass_UWaterHeightmapComponent_NoRegister();
	OCEANPLUGIN_API UClass* Z_Construct_UClass_UWaterHeightmapComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_OceanPlugin();
	OCEANPLUGIN_API UClass* Z_Construct_UClass_AOceanManager_NoRegister();
// End Cross Module References
	void UWaterHeightmapComponent::StaticRegisterNativesUWaterHeightmapComponent()
	{
	}
	UClass* Z_Construct_UClass_UWaterHeightmapComponent_NoRegister()
	{
		return UWaterHeightmapComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UWaterHeightmapComponent()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UActorComponent();
			Z_Construct_UPackage__Script_OceanPlugin();
			OuterClass = UWaterHeightmapComponent::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20B01080u;


				UProperty* NewProp_OceanManager = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("OceanManager"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OceanManager, UWaterHeightmapComponent), 0x0040000000000000, Z_Construct_UClass_AOceanManager_NoRegister());
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bDrawHeightmap, UWaterHeightmapComponent);
				UProperty* NewProp_bDrawHeightmap = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bDrawHeightmap"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bDrawHeightmap, UWaterHeightmapComponent), 0x0010000000000005, CPP_BOOL_PROPERTY_BITMASK(bDrawHeightmap, UWaterHeightmapComponent), sizeof(bool), true);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bDrawUsedTriangles, UWaterHeightmapComponent);
				UProperty* NewProp_bDrawUsedTriangles = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bDrawUsedTriangles"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bDrawUsedTriangles, UWaterHeightmapComponent), 0x0010000000000005, CPP_BOOL_PROPERTY_BITMASK(bDrawUsedTriangles, UWaterHeightmapComponent), sizeof(bool), true);
				UProperty* NewProp_GridSizeMultiplier = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("GridSizeMultiplier"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(GridSizeMultiplier, UWaterHeightmapComponent), 0x0010000000000005);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bOnlyCollidingComponents, UWaterHeightmapComponent);
				UProperty* NewProp_bOnlyCollidingComponents = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bOnlyCollidingComponents"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bOnlyCollidingComponents, UWaterHeightmapComponent), 0x0010000000000005, CPP_BOOL_PROPERTY_BITMASK(bOnlyCollidingComponents, UWaterHeightmapComponent), sizeof(bool), true);
				UProperty* NewProp_DesiredCellSize = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("DesiredCellSize"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(DesiredCellSize, UWaterHeightmapComponent), 0x0010000000000005);
				static TCppClassTypeInfo<TCppClassTypeTraits<UWaterHeightmapComponent> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintSpawnableComponent"), TEXT(""));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("BuoyantMesh/WaterHeightmapComponent.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Classes/BuoyantMesh/WaterHeightmapComponent.h"));
				MetaData->SetValue(OuterClass, TEXT("ToolTip"), TEXT("Water heightmap centered on the owning actor.\nOnly the heightmap vertices that are actually used trigger an ocean height calculation. Queries between vertices are\ninterpolated. Vertex heights are cached within a tick."));
				MetaData->SetValue(NewProp_OceanManager, TEXT("ModuleRelativePath"), TEXT("Classes/BuoyantMesh/WaterHeightmapComponent.h"));
				MetaData->SetValue(NewProp_bDrawHeightmap, TEXT("Category"), TEXT("Debug"));
				MetaData->SetValue(NewProp_bDrawHeightmap, TEXT("ModuleRelativePath"), TEXT("Classes/BuoyantMesh/WaterHeightmapComponent.h"));
				MetaData->SetValue(NewProp_bDrawUsedTriangles, TEXT("Category"), TEXT("Debug"));
				MetaData->SetValue(NewProp_bDrawUsedTriangles, TEXT("ModuleRelativePath"), TEXT("Classes/BuoyantMesh/WaterHeightmapComponent.h"));
				MetaData->SetValue(NewProp_GridSizeMultiplier, TEXT("Category"), TEXT("Water Patch"));
				MetaData->SetValue(NewProp_GridSizeMultiplier, TEXT("ModuleRelativePath"), TEXT("Classes/BuoyantMesh/WaterHeightmapComponent.h"));
				MetaData->SetValue(NewProp_GridSizeMultiplier, TEXT("ToolTip"), TEXT("How much big should the patch be, relative to the parent actor. 1 is the same."));
				MetaData->SetValue(NewProp_bOnlyCollidingComponents, TEXT("Category"), TEXT("Water Patch"));
				MetaData->SetValue(NewProp_bOnlyCollidingComponents, TEXT("ModuleRelativePath"), TEXT("Classes/BuoyantMesh/WaterHeightmapComponent.h"));
				MetaData->SetValue(NewProp_bOnlyCollidingComponents, TEXT("ToolTip"), TEXT("Only use colliding components be used to determine the water patch size?"));
				MetaData->SetValue(NewProp_DesiredCellSize, TEXT("Category"), TEXT("Water Patch"));
				MetaData->SetValue(NewProp_DesiredCellSize, TEXT("ModuleRelativePath"), TEXT("Classes/BuoyantMesh/WaterHeightmapComponent.h"));
				MetaData->SetValue(NewProp_DesiredCellSize, TEXT("ToolTip"), TEXT("Desired size for a square cell in the water patch.\nThis value might be rounded by the algorithm to make sure no cells are cut."));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWaterHeightmapComponent, 3983844372);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWaterHeightmapComponent(Z_Construct_UClass_UWaterHeightmapComponent, &UWaterHeightmapComponent::StaticClass, TEXT("/Script/OceanPlugin"), TEXT("UWaterHeightmapComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWaterHeightmapComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
