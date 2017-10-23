// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/OceanPluginPrivatePCH.h"
#include "Classes/AdvancedBuoyancyComponent/AdvancedBuoyancyComponent.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdvancedBuoyancyComponent() {}
// Cross Module References
	OCEANPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FForceTriangle();
	UPackage* Z_Construct_UPackage__Script_OceanPlugin();
	OCEANPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBuoyancyVertex();
	OCEANPLUGIN_API UFunction* Z_Construct_UFunction_UAdvancedBuoyancyComponent_ApplyForce();
	OCEANPLUGIN_API UClass* Z_Construct_UClass_UAdvancedBuoyancyComponent();
	OCEANPLUGIN_API UFunction* Z_Construct_UFunction_UAdvancedBuoyancyComponent_ApplySlamForce();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	OCEANPLUGIN_API UFunction* Z_Construct_UFunction_UAdvancedBuoyancyComponent_DrawDebugStuff();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	OCEANPLUGIN_API UFunction* Z_Construct_UFunction_UAdvancedBuoyancyComponent_GetOcean();
	OCEANPLUGIN_API UFunction* Z_Construct_UFunction_UAdvancedBuoyancyComponent_GetOceanDepthFromGrid();
	OCEANPLUGIN_API UFunction* Z_Construct_UFunction_UAdvancedBuoyancyComponent_SetMeshDensity();
	OCEANPLUGIN_API UFunction* Z_Construct_UFunction_UAdvancedBuoyancyComponent_SplitTriangle();
	OCEANPLUGIN_API UFunction* Z_Construct_UFunction_UAdvancedBuoyancyComponent_TriangleArea();
	OCEANPLUGIN_API UClass* Z_Construct_UClass_UAdvancedBuoyancyComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	OCEANPLUGIN_API UClass* Z_Construct_UClass_AOceanManager_NoRegister();
// End Cross Module References
class UScriptStruct* FForceTriangle::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern OCEANPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FForceTriangle_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FForceTriangle, Z_Construct_UPackage__Script_OceanPlugin(), TEXT("ForceTriangle"), sizeof(FForceTriangle), Get_Z_Construct_UScriptStruct_FForceTriangle_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FForceTriangle(FForceTriangle::StaticStruct, TEXT("/Script/OceanPlugin"), TEXT("ForceTriangle"), false, nullptr, nullptr);
static struct FScriptStruct_OceanPlugin_StaticRegisterNativesFForceTriangle
{
	FScriptStruct_OceanPlugin_StaticRegisterNativesFForceTriangle()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ForceTriangle")),new UScriptStruct::TCppStructOps<FForceTriangle>);
	}
} ScriptStruct_OceanPlugin_StaticRegisterNativesFForceTriangle;
	UScriptStruct* Z_Construct_UScriptStruct_FForceTriangle()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_OceanPlugin();
		extern uint32 Get_Z_Construct_UScriptStruct_FForceTriangle_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ForceTriangle"), sizeof(FForceTriangle), Get_Z_Construct_UScriptStruct_FForceTriangle_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ForceTriangle"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FForceTriangle>, EStructFlags(0x00000001));
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Classes/AdvancedBuoyancyComponent/AdvancedBuoyancyComponent.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FForceTriangle_CRC() { return 2720778673U; }
class UScriptStruct* FBuoyancyVertex::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern OCEANPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FBuoyancyVertex_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBuoyancyVertex, Z_Construct_UPackage__Script_OceanPlugin(), TEXT("BuoyancyVertex"), sizeof(FBuoyancyVertex), Get_Z_Construct_UScriptStruct_FBuoyancyVertex_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBuoyancyVertex(FBuoyancyVertex::StaticStruct, TEXT("/Script/OceanPlugin"), TEXT("BuoyancyVertex"), false, nullptr, nullptr);
static struct FScriptStruct_OceanPlugin_StaticRegisterNativesFBuoyancyVertex
{
	FScriptStruct_OceanPlugin_StaticRegisterNativesFBuoyancyVertex()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BuoyancyVertex")),new UScriptStruct::TCppStructOps<FBuoyancyVertex>);
	}
} ScriptStruct_OceanPlugin_StaticRegisterNativesFBuoyancyVertex;
	UScriptStruct* Z_Construct_UScriptStruct_FBuoyancyVertex()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_OceanPlugin();
		extern uint32 Get_Z_Construct_UScriptStruct_FBuoyancyVertex_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BuoyancyVertex"), sizeof(FBuoyancyVertex), Get_Z_Construct_UScriptStruct_FBuoyancyVertex_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("BuoyancyVertex"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FBuoyancyVertex>, EStructFlags(0x00000001));
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Classes/AdvancedBuoyancyComponent/AdvancedBuoyancyComponent.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBuoyancyVertex_CRC() { return 2597025207U; }
	void UAdvancedBuoyancyComponent::StaticRegisterNativesUAdvancedBuoyancyComponent()
	{
		UClass* Class = UAdvancedBuoyancyComponent::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "ApplyForce", (Native)&UAdvancedBuoyancyComponent::execApplyForce },
			{ "ApplySlamForce", (Native)&UAdvancedBuoyancyComponent::execApplySlamForce },
			{ "DrawDebugStuff", (Native)&UAdvancedBuoyancyComponent::execDrawDebugStuff },
			{ "GetOcean", (Native)&UAdvancedBuoyancyComponent::execGetOcean },
			{ "GetOceanDepthFromGrid", (Native)&UAdvancedBuoyancyComponent::execGetOceanDepthFromGrid },
			{ "SetMeshDensity", (Native)&UAdvancedBuoyancyComponent::execSetMeshDensity },
			{ "SplitTriangle", (Native)&UAdvancedBuoyancyComponent::execSplitTriangle },
			{ "TriangleArea", (Native)&UAdvancedBuoyancyComponent::execTriangleArea },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_UAdvancedBuoyancyComponent_ApplyForce()
	{
		struct AdvancedBuoyancyComponent_eventApplyForce_Parms
		{
			FForceTriangle TriForce;
		};
		UObject* Outer = Z_Construct_UClass_UAdvancedBuoyancyComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ApplyForce"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(AdvancedBuoyancyComponent_eventApplyForce_Parms));
			UProperty* NewProp_TriForce = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("TriForce"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(TriForce, AdvancedBuoyancyComponent_eventApplyForce_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FForceTriangle());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Advanced Buoyancy|Triangles"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AdvancedBuoyancyComponent/AdvancedBuoyancyComponent.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAdvancedBuoyancyComponent_ApplySlamForce()
	{
		struct AdvancedBuoyancyComponent_eventApplySlamForce_Parms
		{
			FVector SlamForce;
			FVector TriCenter;
		};
		UObject* Outer = Z_Construct_UClass_UAdvancedBuoyancyComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ApplySlamForce"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04820401, 65535, sizeof(AdvancedBuoyancyComponent_eventApplySlamForce_Parms));
			UProperty* NewProp_TriCenter = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("TriCenter"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(TriCenter, AdvancedBuoyancyComponent_eventApplySlamForce_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_SlamForce = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("SlamForce"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(SlamForce, AdvancedBuoyancyComponent_eventApplySlamForce_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Advanced Buoyancy|Forces"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AdvancedBuoyancyComponent/AdvancedBuoyancyComponent.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAdvancedBuoyancyComponent_DrawDebugStuff()
	{
		struct AdvancedBuoyancyComponent_eventDrawDebugStuff_Parms
		{
			FForceTriangle TriForce;
			FColor DebugColor;
		};
		UObject* Outer = Z_Construct_UClass_UAdvancedBuoyancyComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("DrawDebugStuff"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04820401, 65535, sizeof(AdvancedBuoyancyComponent_eventDrawDebugStuff_Parms));
			UProperty* NewProp_DebugColor = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("DebugColor"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(DebugColor, AdvancedBuoyancyComponent_eventDrawDebugStuff_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FColor());
			UProperty* NewProp_TriForce = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("TriForce"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(TriForce, AdvancedBuoyancyComponent_eventDrawDebugStuff_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FForceTriangle());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Debug"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AdvancedBuoyancyComponent/AdvancedBuoyancyComponent.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAdvancedBuoyancyComponent_GetOcean()
	{
		UObject* Outer = Z_Construct_UClass_UAdvancedBuoyancyComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetOcean"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("World Data"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AdvancedBuoyancyComponent/AdvancedBuoyancyComponent.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAdvancedBuoyancyComponent_GetOceanDepthFromGrid()
	{
		struct AdvancedBuoyancyComponent_eventGetOceanDepthFromGrid_Parms
		{
			FVector Position;
			bool bJustGetHeightAtLocation;
			float ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UAdvancedBuoyancyComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetOceanDepthFromGrid"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04820401, 65535, sizeof(AdvancedBuoyancyComponent_eventGetOceanDepthFromGrid_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(ReturnValue, AdvancedBuoyancyComponent_eventGetOceanDepthFromGrid_Parms), 0x0010000000000580);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bJustGetHeightAtLocation, AdvancedBuoyancyComponent_eventGetOceanDepthFromGrid_Parms);
			UProperty* NewProp_bJustGetHeightAtLocation = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bJustGetHeightAtLocation"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bJustGetHeightAtLocation, AdvancedBuoyancyComponent_eventGetOceanDepthFromGrid_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(bJustGetHeightAtLocation, AdvancedBuoyancyComponent_eventGetOceanDepthFromGrid_Parms), sizeof(bool), true);
			UProperty* NewProp_Position = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Position"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Position, AdvancedBuoyancyComponent_eventGetOceanDepthFromGrid_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Advanced Buoyancy|Triangles"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_bJustGetHeightAtLocation"), TEXT("false"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AdvancedBuoyancyComponent/AdvancedBuoyancyComponent.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAdvancedBuoyancyComponent_SetMeshDensity()
	{
		struct AdvancedBuoyancyComponent_eventSetMeshDensity_Parms
		{
			float NewDensity;
			float NewWaterDensity;
		};
		UObject* Outer = Z_Construct_UClass_UAdvancedBuoyancyComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetMeshDensity"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(AdvancedBuoyancyComponent_eventSetMeshDensity_Parms));
			UProperty* NewProp_NewWaterDensity = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("NewWaterDensity"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(NewWaterDensity, AdvancedBuoyancyComponent_eventSetMeshDensity_Parms), 0x0010000000000080);
			UProperty* NewProp_NewDensity = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("NewDensity"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(NewDensity, AdvancedBuoyancyComponent_eventSetMeshDensity_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Mesh"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_NewWaterDensity"), TEXT("1025.000000"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AdvancedBuoyancyComponent/AdvancedBuoyancyComponent.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAdvancedBuoyancyComponent_SplitTriangle()
	{
		struct AdvancedBuoyancyComponent_eventSplitTriangle_Parms
		{
			FBuoyancyVertex H;
			FBuoyancyVertex M;
			FBuoyancyVertex L;
			FVector InArrow;
			TArray<FForceTriangle> ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UAdvancedBuoyancyComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SplitTriangle"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04820401, 65535, sizeof(AdvancedBuoyancyComponent_eventSplitTriangle_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(ReturnValue, AdvancedBuoyancyComponent_eventSplitTriangle_Parms), 0x0010000000000580);
			UProperty* NewProp_ReturnValue_Inner = new(EC_InternalUseOnlyConstructor, NewProp_ReturnValue, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FForceTriangle());
			UProperty* NewProp_InArrow = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("InArrow"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(InArrow, AdvancedBuoyancyComponent_eventSplitTriangle_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_L = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("L"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(L, AdvancedBuoyancyComponent_eventSplitTriangle_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FBuoyancyVertex());
			UProperty* NewProp_M = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("M"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(M, AdvancedBuoyancyComponent_eventSplitTriangle_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FBuoyancyVertex());
			UProperty* NewProp_H = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("H"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(H, AdvancedBuoyancyComponent_eventSplitTriangle_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FBuoyancyVertex());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Advanced Buoyancy|Triangles"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AdvancedBuoyancyComponent/AdvancedBuoyancyComponent.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAdvancedBuoyancyComponent_TriangleArea()
	{
		struct AdvancedBuoyancyComponent_eventTriangleArea_Parms
		{
			FVector A;
			FVector B;
			FVector C;
			float ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UAdvancedBuoyancyComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("TriangleArea"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04820401, 65535, sizeof(AdvancedBuoyancyComponent_eventTriangleArea_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(ReturnValue, AdvancedBuoyancyComponent_eventTriangleArea_Parms), 0x0010000000000580);
			UProperty* NewProp_C = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("C"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(C, AdvancedBuoyancyComponent_eventTriangleArea_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_B = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("B"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(B, AdvancedBuoyancyComponent_eventTriangleArea_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_A = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("A"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(A, AdvancedBuoyancyComponent_eventTriangleArea_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Advanced Buoyancy|Triangles"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/AdvancedBuoyancyComponent/AdvancedBuoyancyComponent.h"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAdvancedBuoyancyComponent_NoRegister()
	{
		return UAdvancedBuoyancyComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UAdvancedBuoyancyComponent()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_USceneComponent();
			Z_Construct_UPackage__Script_OceanPlugin();
			OuterClass = UAdvancedBuoyancyComponent::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20B00080u;

				OuterClass->LinkChild(Z_Construct_UFunction_UAdvancedBuoyancyComponent_ApplyForce());
				OuterClass->LinkChild(Z_Construct_UFunction_UAdvancedBuoyancyComponent_ApplySlamForce());
				OuterClass->LinkChild(Z_Construct_UFunction_UAdvancedBuoyancyComponent_DrawDebugStuff());
				OuterClass->LinkChild(Z_Construct_UFunction_UAdvancedBuoyancyComponent_GetOcean());
				OuterClass->LinkChild(Z_Construct_UFunction_UAdvancedBuoyancyComponent_GetOceanDepthFromGrid());
				OuterClass->LinkChild(Z_Construct_UFunction_UAdvancedBuoyancyComponent_SetMeshDensity());
				OuterClass->LinkChild(Z_Construct_UFunction_UAdvancedBuoyancyComponent_SplitTriangle());
				OuterClass->LinkChild(Z_Construct_UFunction_UAdvancedBuoyancyComponent_TriangleArea());

				UProperty* NewProp_TriSubmergedArea = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("TriSubmergedArea"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(TriSubmergedArea, UAdvancedBuoyancyComponent), 0x0010000000000005);
				UProperty* NewProp_TriSubmergedArea_Inner = new(EC_InternalUseOnlyConstructor, NewProp_TriSubmergedArea, TEXT("TriSubmergedArea"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
				UProperty* NewProp_TriSizes = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("TriSizes"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(TriSizes, UAdvancedBuoyancyComponent), 0x0010000000000005);
				UProperty* NewProp_TriSizes_Inner = new(EC_InternalUseOnlyConstructor, NewProp_TriSizes, TEXT("TriSizes"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
				UProperty* NewProp_SubmergedTris = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("SubmergedTris"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(SubmergedTris, UAdvancedBuoyancyComponent), 0x0010000000000005);
				UProperty* NewProp_SubmergedTris_Inner = new(EC_InternalUseOnlyConstructor, NewProp_SubmergedTris, TEXT("SubmergedTris"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FForceTriangle());
				UProperty* NewProp_AdvancedGridHeight = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("AdvancedGridHeight"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(AdvancedGridHeight, UAdvancedBuoyancyComponent), 0x0010000000000005);
				UProperty* NewProp_AdvancedGridHeight_Inner = new(EC_InternalUseOnlyConstructor, NewProp_AdvancedGridHeight, TEXT("AdvancedGridHeight"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FVector());
				UProperty* NewProp_MaxSlamAcceleration = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("MaxSlamAcceleration"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(MaxSlamAcceleration, UAdvancedBuoyancyComponent), 0x0010000000000005);
				UProperty* NewProp_ViscousDragCoefficient = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ViscousDragCoefficient"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(ViscousDragCoefficient, UAdvancedBuoyancyComponent), 0x0010000000000005);
				UProperty* NewProp_SuctionCoefficient = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("SuctionCoefficient"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(SuctionCoefficient, UAdvancedBuoyancyComponent), 0x0010000000000005, Z_Construct_UScriptStruct_FVector());
				UProperty* NewProp_DragCoefficient = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("DragCoefficient"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(DragCoefficient, UAdvancedBuoyancyComponent), 0x0010000000000005, Z_Construct_UScriptStruct_FVector());
				UProperty* NewProp_ImpactCoefficient = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ImpactCoefficient"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(ImpactCoefficient, UAdvancedBuoyancyComponent), 0x0010000000000005);
				UProperty* NewProp_SubmergedVolume = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("SubmergedVolume"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(SubmergedVolume, UAdvancedBuoyancyComponent), 0x0010000000000005);
				UProperty* NewProp_DensityCorrectionModifier = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("DensityCorrectionModifier"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(DensityCorrectionModifier, UAdvancedBuoyancyComponent), 0x0010000000000005);
				UProperty* NewProp_DensityCorrection = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("DensityCorrection"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(DensityCorrection, UAdvancedBuoyancyComponent), 0x0010000000000005);
				UProperty* NewProp_BuoyancyPitchReductionCoefficient = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("BuoyancyPitchReductionCoefficient"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(BuoyancyPitchReductionCoefficient, UAdvancedBuoyancyComponent), 0x0010000000000005);
				UProperty* NewProp_BuoyancyReductionCoefficient = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("BuoyancyReductionCoefficient"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(BuoyancyReductionCoefficient, UAdvancedBuoyancyComponent), 0x0010000000000005);
				UProperty* NewProp_FalseVolume = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("FalseVolume"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(FalseVolume, UAdvancedBuoyancyComponent), 0x0010000000000005);
				UProperty* NewProp_MeshTransform = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("MeshTransform"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(MeshTransform, UAdvancedBuoyancyComponent), 0x0010000000000005, Z_Construct_UScriptStruct_FTransform());
				UProperty* NewProp_BuoyantMesh = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("BuoyantMesh"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(BuoyantMesh, UAdvancedBuoyancyComponent), 0x001000000008000d, Z_Construct_UClass_UStaticMeshComponent_NoRegister());
				UProperty* NewProp_MeshDensity = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("MeshDensity"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(MeshDensity, UAdvancedBuoyancyComponent), 0x0010000000000005);
				UProperty* NewProp_Gravity = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Gravity"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(Gravity, UAdvancedBuoyancyComponent), 0x0010000000000005);
				UProperty* NewProp_WaterDensity = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("WaterDensity"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(WaterDensity, UAdvancedBuoyancyComponent), 0x0010000000000005);
				UProperty* NewProp_TheOcean = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("TheOcean"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(TheOcean, UAdvancedBuoyancyComponent), 0x0010000000000005, Z_Construct_UClass_AOceanManager_NoRegister());
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bDebugOn, UAdvancedBuoyancyComponent);
				UProperty* NewProp_bDebugOn = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bDebugOn"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bDebugOn, UAdvancedBuoyancyComponent), 0x0010000000000005, CPP_BOOL_PROPERTY_BITMASK(bDebugOn, UAdvancedBuoyancyComponent), sizeof(bool), true);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bUseDrag, UAdvancedBuoyancyComponent);
				UProperty* NewProp_bUseDrag = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bUseDrag"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bUseDrag, UAdvancedBuoyancyComponent), 0x0010000000000005, CPP_BOOL_PROPERTY_BITMASK(bUseDrag, UAdvancedBuoyancyComponent), sizeof(bool), true);
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAdvancedBuoyancyComponent_ApplyForce(), "ApplyForce"); // 301232525
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAdvancedBuoyancyComponent_ApplySlamForce(), "ApplySlamForce"); // 4133642392
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAdvancedBuoyancyComponent_DrawDebugStuff(), "DrawDebugStuff"); // 2418073977
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAdvancedBuoyancyComponent_GetOcean(), "GetOcean"); // 1376894315
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAdvancedBuoyancyComponent_GetOceanDepthFromGrid(), "GetOceanDepthFromGrid"); // 140784019
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAdvancedBuoyancyComponent_SetMeshDensity(), "SetMeshDensity"); // 3621420800
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAdvancedBuoyancyComponent_SplitTriangle(), "SplitTriangle"); // 156356028
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAdvancedBuoyancyComponent_TriangleArea(), "TriangleArea"); // 4159253817
				static TCppClassTypeInfo<TCppClassTypeTraits<UAdvancedBuoyancyComponent> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintSpawnableComponent"), TEXT(""));
				MetaData->SetValue(OuterClass, TEXT("ClassGroupNames"), TEXT("Physics"));
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Trigger PhysicsVolume"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("AdvancedBuoyancyComponent/AdvancedBuoyancyComponent.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Classes/AdvancedBuoyancyComponent/AdvancedBuoyancyComponent.h"));
				MetaData->SetValue(NewProp_TriSubmergedArea, TEXT("Category"), TEXT("Advanced Buoyancy|Triangles"));
				MetaData->SetValue(NewProp_TriSubmergedArea, TEXT("ModuleRelativePath"), TEXT("Classes/AdvancedBuoyancyComponent/AdvancedBuoyancyComponent.h"));
				MetaData->SetValue(NewProp_TriSizes, TEXT("Category"), TEXT("Advanced Buoyancy|Triangles"));
				MetaData->SetValue(NewProp_TriSizes, TEXT("ModuleRelativePath"), TEXT("Classes/AdvancedBuoyancyComponent/AdvancedBuoyancyComponent.h"));
				MetaData->SetValue(NewProp_SubmergedTris, TEXT("Category"), TEXT("Advanced Buoyancy|Triangles"));
				MetaData->SetValue(NewProp_SubmergedTris, TEXT("ModuleRelativePath"), TEXT("Classes/AdvancedBuoyancyComponent/AdvancedBuoyancyComponent.h"));
				MetaData->SetValue(NewProp_AdvancedGridHeight, TEXT("Category"), TEXT("Advanced Buoyancy|Optimization"));
				MetaData->SetValue(NewProp_AdvancedGridHeight, TEXT("ModuleRelativePath"), TEXT("Classes/AdvancedBuoyancyComponent/AdvancedBuoyancyComponent.h"));
				MetaData->SetValue(NewProp_MaxSlamAcceleration, TEXT("Category"), TEXT("Advanced Buoyancy|Coefficients"));
				MetaData->SetValue(NewProp_MaxSlamAcceleration, TEXT("ModuleRelativePath"), TEXT("Classes/AdvancedBuoyancyComponent/AdvancedBuoyancyComponent.h"));
				MetaData->SetValue(NewProp_ViscousDragCoefficient, TEXT("Category"), TEXT("Advanced Buoyancy|Coefficients"));
				MetaData->SetValue(NewProp_ViscousDragCoefficient, TEXT("ModuleRelativePath"), TEXT("Classes/AdvancedBuoyancyComponent/AdvancedBuoyancyComponent.h"));
				MetaData->SetValue(NewProp_SuctionCoefficient, TEXT("Category"), TEXT("Advanced Buoyancy|Coefficients"));
				MetaData->SetValue(NewProp_SuctionCoefficient, TEXT("ModuleRelativePath"), TEXT("Classes/AdvancedBuoyancyComponent/AdvancedBuoyancyComponent.h"));
				MetaData->SetValue(NewProp_DragCoefficient, TEXT("Category"), TEXT("Advanced Buoyancy|Coefficients"));
				MetaData->SetValue(NewProp_DragCoefficient, TEXT("ModuleRelativePath"), TEXT("Classes/AdvancedBuoyancyComponent/AdvancedBuoyancyComponent.h"));
				MetaData->SetValue(NewProp_ImpactCoefficient, TEXT("Category"), TEXT("Advanced Buoyancy|Coefficients"));
				MetaData->SetValue(NewProp_ImpactCoefficient, TEXT("ModuleRelativePath"), TEXT("Classes/AdvancedBuoyancyComponent/AdvancedBuoyancyComponent.h"));
				MetaData->SetValue(NewProp_SubmergedVolume, TEXT("Category"), TEXT("Advanced Buoyancy|Coefficients"));
				MetaData->SetValue(NewProp_SubmergedVolume, TEXT("ModuleRelativePath"), TEXT("Classes/AdvancedBuoyancyComponent/AdvancedBuoyancyComponent.h"));
				MetaData->SetValue(NewProp_DensityCorrectionModifier, TEXT("Category"), TEXT("Advanced Buoyancy|Coefficients"));
				MetaData->SetValue(NewProp_DensityCorrectionModifier, TEXT("ModuleRelativePath"), TEXT("Classes/AdvancedBuoyancyComponent/AdvancedBuoyancyComponent.h"));
				MetaData->SetValue(NewProp_DensityCorrection, TEXT("Category"), TEXT("Advanced Buoyancy|Coefficients"));
				MetaData->SetValue(NewProp_DensityCorrection, TEXT("ModuleRelativePath"), TEXT("Classes/AdvancedBuoyancyComponent/AdvancedBuoyancyComponent.h"));
				MetaData->SetValue(NewProp_BuoyancyPitchReductionCoefficient, TEXT("Category"), TEXT("Advanced Buoyancy|Coefficients"));
				MetaData->SetValue(NewProp_BuoyancyPitchReductionCoefficient, TEXT("ModuleRelativePath"), TEXT("Classes/AdvancedBuoyancyComponent/AdvancedBuoyancyComponent.h"));
				MetaData->SetValue(NewProp_BuoyancyReductionCoefficient, TEXT("Category"), TEXT("Advanced Buoyancy|Coefficients"));
				MetaData->SetValue(NewProp_BuoyancyReductionCoefficient, TEXT("ModuleRelativePath"), TEXT("Classes/AdvancedBuoyancyComponent/AdvancedBuoyancyComponent.h"));
				MetaData->SetValue(NewProp_FalseVolume, TEXT("Category"), TEXT("Advanced Buoyancy|Mesh Data"));
				MetaData->SetValue(NewProp_FalseVolume, TEXT("ModuleRelativePath"), TEXT("Classes/AdvancedBuoyancyComponent/AdvancedBuoyancyComponent.h"));
				MetaData->SetValue(NewProp_MeshTransform, TEXT("Category"), TEXT("Advanced Buoyancy|Mesh Data"));
				MetaData->SetValue(NewProp_MeshTransform, TEXT("ModuleRelativePath"), TEXT("Classes/AdvancedBuoyancyComponent/AdvancedBuoyancyComponent.h"));
				MetaData->SetValue(NewProp_BuoyantMesh, TEXT("Category"), TEXT("Advanced Buoyancy|Mesh Data"));
				MetaData->SetValue(NewProp_BuoyantMesh, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_BuoyantMesh, TEXT("ModuleRelativePath"), TEXT("Classes/AdvancedBuoyancyComponent/AdvancedBuoyancyComponent.h"));
				MetaData->SetValue(NewProp_BuoyantMesh, TEXT("ToolTip"), TEXT("The mesh the forces are being applied too, can be different from the mesh used for buoyancy."));
				MetaData->SetValue(NewProp_MeshDensity, TEXT("Category"), TEXT("Attributes"));
				MetaData->SetValue(NewProp_MeshDensity, TEXT("ModuleRelativePath"), TEXT("Classes/AdvancedBuoyancyComponent/AdvancedBuoyancyComponent.h"));
				MetaData->SetValue(NewProp_Gravity, TEXT("Category"), TEXT("World Data"));
				MetaData->SetValue(NewProp_Gravity, TEXT("ModuleRelativePath"), TEXT("Classes/AdvancedBuoyancyComponent/AdvancedBuoyancyComponent.h"));
				MetaData->SetValue(NewProp_WaterDensity, TEXT("Category"), TEXT("World Data"));
				MetaData->SetValue(NewProp_WaterDensity, TEXT("ModuleRelativePath"), TEXT("Classes/AdvancedBuoyancyComponent/AdvancedBuoyancyComponent.h"));
				MetaData->SetValue(NewProp_TheOcean, TEXT("Category"), TEXT("World Data"));
				MetaData->SetValue(NewProp_TheOcean, TEXT("ModuleRelativePath"), TEXT("Classes/AdvancedBuoyancyComponent/AdvancedBuoyancyComponent.h"));
				MetaData->SetValue(NewProp_TheOcean, TEXT("ToolTip"), TEXT("World information"));
				MetaData->SetValue(NewProp_bDebugOn, TEXT("Category"), TEXT("Options"));
				MetaData->SetValue(NewProp_bDebugOn, TEXT("ModuleRelativePath"), TEXT("Classes/AdvancedBuoyancyComponent/AdvancedBuoyancyComponent.h"));
				MetaData->SetValue(NewProp_bDebugOn, TEXT("ToolTip"), TEXT("will draw force arrows and buoyancy traingles/points"));
				MetaData->SetValue(NewProp_bUseDrag, TEXT("Category"), TEXT("Options"));
				MetaData->SetValue(NewProp_bUseDrag, TEXT("ModuleRelativePath"), TEXT("Classes/AdvancedBuoyancyComponent/AdvancedBuoyancyComponent.h"));
				MetaData->SetValue(NewProp_bUseDrag, TEXT("ToolTip"), TEXT("use drag when using advanced buoyancy (most likely will always be yes)"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAdvancedBuoyancyComponent, 1904453122);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAdvancedBuoyancyComponent(Z_Construct_UClass_UAdvancedBuoyancyComponent, &UAdvancedBuoyancyComponent::StaticClass, TEXT("/Script/OceanPlugin"), TEXT("UAdvancedBuoyancyComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAdvancedBuoyancyComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
