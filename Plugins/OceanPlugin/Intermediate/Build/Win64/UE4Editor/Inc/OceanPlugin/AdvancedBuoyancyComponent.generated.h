// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
struct FForceTriangle;
struct FBuoyancyVertex;
struct FColor;
#ifdef OCEANPLUGIN_AdvancedBuoyancyComponent_generated_h
#error "AdvancedBuoyancyComponent.generated.h already included, missing '#pragma once' in AdvancedBuoyancyComponent.h"
#endif
#define OCEANPLUGIN_AdvancedBuoyancyComponent_generated_h

#define OceanProject_Plugins_OceanPlugin_Source_OceanPlugin_Classes_AdvancedBuoyancyComponent_AdvancedBuoyancyComponent_h_47_GENERATED_BODY \
	friend OCEANPLUGIN_API class UScriptStruct* Z_Construct_UScriptStruct_FForceTriangle(); \
	OCEANPLUGIN_API static class UScriptStruct* StaticStruct();


#define OceanProject_Plugins_OceanPlugin_Source_OceanPlugin_Classes_AdvancedBuoyancyComponent_AdvancedBuoyancyComponent_h_38_GENERATED_BODY \
	friend OCEANPLUGIN_API class UScriptStruct* Z_Construct_UScriptStruct_FBuoyancyVertex(); \
	OCEANPLUGIN_API static class UScriptStruct* StaticStruct();


#define OceanProject_Plugins_OceanPlugin_Source_OceanPlugin_Classes_AdvancedBuoyancyComponent_AdvancedBuoyancyComponent_h_110_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execTriangleArea) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_A); \
		P_GET_STRUCT(FVector,Z_Param_B); \
		P_GET_STRUCT(FVector,Z_Param_C); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->TriangleArea(Z_Param_A,Z_Param_B,Z_Param_C); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetOceanDepthFromGrid) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Position); \
		P_GET_UBOOL(Z_Param_bJustGetHeightAtLocation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetOceanDepthFromGrid(Z_Param_Position,Z_Param_bJustGetHeightAtLocation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execApplyForce) \
	{ \
		P_GET_STRUCT(FForceTriangle,Z_Param_TriForce); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ApplyForce(Z_Param_TriForce); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSplitTriangle) \
	{ \
		P_GET_STRUCT(FBuoyancyVertex,Z_Param_H); \
		P_GET_STRUCT(FBuoyancyVertex,Z_Param_M); \
		P_GET_STRUCT(FBuoyancyVertex,Z_Param_L); \
		P_GET_STRUCT(FVector,Z_Param_InArrow); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FForceTriangle>*)Z_Param__Result=this->SplitTriangle(Z_Param_H,Z_Param_M,Z_Param_L,Z_Param_InArrow); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execApplySlamForce) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_SlamForce); \
		P_GET_STRUCT(FVector,Z_Param_TriCenter); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ApplySlamForce(Z_Param_SlamForce,Z_Param_TriCenter); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMeshDensity) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewDensity); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewWaterDensity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetMeshDensity(Z_Param_NewDensity,Z_Param_NewWaterDensity); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDrawDebugStuff) \
	{ \
		P_GET_STRUCT(FForceTriangle,Z_Param_TriForce); \
		P_GET_STRUCT(FColor,Z_Param_DebugColor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->DrawDebugStuff(Z_Param_TriForce,Z_Param_DebugColor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetOcean) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->GetOcean(); \
		P_NATIVE_END; \
	}


#define OceanProject_Plugins_OceanPlugin_Source_OceanPlugin_Classes_AdvancedBuoyancyComponent_AdvancedBuoyancyComponent_h_110_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTriangleArea) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_A); \
		P_GET_STRUCT(FVector,Z_Param_B); \
		P_GET_STRUCT(FVector,Z_Param_C); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->TriangleArea(Z_Param_A,Z_Param_B,Z_Param_C); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetOceanDepthFromGrid) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Position); \
		P_GET_UBOOL(Z_Param_bJustGetHeightAtLocation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetOceanDepthFromGrid(Z_Param_Position,Z_Param_bJustGetHeightAtLocation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execApplyForce) \
	{ \
		P_GET_STRUCT(FForceTriangle,Z_Param_TriForce); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ApplyForce(Z_Param_TriForce); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSplitTriangle) \
	{ \
		P_GET_STRUCT(FBuoyancyVertex,Z_Param_H); \
		P_GET_STRUCT(FBuoyancyVertex,Z_Param_M); \
		P_GET_STRUCT(FBuoyancyVertex,Z_Param_L); \
		P_GET_STRUCT(FVector,Z_Param_InArrow); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FForceTriangle>*)Z_Param__Result=this->SplitTriangle(Z_Param_H,Z_Param_M,Z_Param_L,Z_Param_InArrow); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execApplySlamForce) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_SlamForce); \
		P_GET_STRUCT(FVector,Z_Param_TriCenter); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ApplySlamForce(Z_Param_SlamForce,Z_Param_TriCenter); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMeshDensity) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewDensity); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewWaterDensity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetMeshDensity(Z_Param_NewDensity,Z_Param_NewWaterDensity); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDrawDebugStuff) \
	{ \
		P_GET_STRUCT(FForceTriangle,Z_Param_TriForce); \
		P_GET_STRUCT(FColor,Z_Param_DebugColor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->DrawDebugStuff(Z_Param_TriForce,Z_Param_DebugColor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetOcean) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->GetOcean(); \
		P_NATIVE_END; \
	}


#define OceanProject_Plugins_OceanPlugin_Source_OceanPlugin_Classes_AdvancedBuoyancyComponent_AdvancedBuoyancyComponent_h_110_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAdvancedBuoyancyComponent(); \
	friend OCEANPLUGIN_API class UClass* Z_Construct_UClass_UAdvancedBuoyancyComponent(); \
public: \
	DECLARE_CLASS(UAdvancedBuoyancyComponent, USceneComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/OceanPlugin"), NO_API) \
	DECLARE_SERIALIZER(UAdvancedBuoyancyComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define OceanProject_Plugins_OceanPlugin_Source_OceanPlugin_Classes_AdvancedBuoyancyComponent_AdvancedBuoyancyComponent_h_110_INCLASS \
private: \
	static void StaticRegisterNativesUAdvancedBuoyancyComponent(); \
	friend OCEANPLUGIN_API class UClass* Z_Construct_UClass_UAdvancedBuoyancyComponent(); \
public: \
	DECLARE_CLASS(UAdvancedBuoyancyComponent, USceneComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/OceanPlugin"), NO_API) \
	DECLARE_SERIALIZER(UAdvancedBuoyancyComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define OceanProject_Plugins_OceanPlugin_Source_OceanPlugin_Classes_AdvancedBuoyancyComponent_AdvancedBuoyancyComponent_h_110_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAdvancedBuoyancyComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAdvancedBuoyancyComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAdvancedBuoyancyComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAdvancedBuoyancyComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAdvancedBuoyancyComponent(UAdvancedBuoyancyComponent&&); \
	NO_API UAdvancedBuoyancyComponent(const UAdvancedBuoyancyComponent&); \
public:


#define OceanProject_Plugins_OceanPlugin_Source_OceanPlugin_Classes_AdvancedBuoyancyComponent_AdvancedBuoyancyComponent_h_110_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAdvancedBuoyancyComponent(UAdvancedBuoyancyComponent&&); \
	NO_API UAdvancedBuoyancyComponent(const UAdvancedBuoyancyComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAdvancedBuoyancyComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAdvancedBuoyancyComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAdvancedBuoyancyComponent)


#define OceanProject_Plugins_OceanPlugin_Source_OceanPlugin_Classes_AdvancedBuoyancyComponent_AdvancedBuoyancyComponent_h_110_PRIVATE_PROPERTY_OFFSET
#define OceanProject_Plugins_OceanPlugin_Source_OceanPlugin_Classes_AdvancedBuoyancyComponent_AdvancedBuoyancyComponent_h_107_PROLOG
#define OceanProject_Plugins_OceanPlugin_Source_OceanPlugin_Classes_AdvancedBuoyancyComponent_AdvancedBuoyancyComponent_h_110_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	OceanProject_Plugins_OceanPlugin_Source_OceanPlugin_Classes_AdvancedBuoyancyComponent_AdvancedBuoyancyComponent_h_110_PRIVATE_PROPERTY_OFFSET \
	OceanProject_Plugins_OceanPlugin_Source_OceanPlugin_Classes_AdvancedBuoyancyComponent_AdvancedBuoyancyComponent_h_110_RPC_WRAPPERS \
	OceanProject_Plugins_OceanPlugin_Source_OceanPlugin_Classes_AdvancedBuoyancyComponent_AdvancedBuoyancyComponent_h_110_INCLASS \
	OceanProject_Plugins_OceanPlugin_Source_OceanPlugin_Classes_AdvancedBuoyancyComponent_AdvancedBuoyancyComponent_h_110_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define OceanProject_Plugins_OceanPlugin_Source_OceanPlugin_Classes_AdvancedBuoyancyComponent_AdvancedBuoyancyComponent_h_110_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	OceanProject_Plugins_OceanPlugin_Source_OceanPlugin_Classes_AdvancedBuoyancyComponent_AdvancedBuoyancyComponent_h_110_PRIVATE_PROPERTY_OFFSET \
	OceanProject_Plugins_OceanPlugin_Source_OceanPlugin_Classes_AdvancedBuoyancyComponent_AdvancedBuoyancyComponent_h_110_RPC_WRAPPERS_NO_PURE_DECLS \
	OceanProject_Plugins_OceanPlugin_Source_OceanPlugin_Classes_AdvancedBuoyancyComponent_AdvancedBuoyancyComponent_h_110_INCLASS_NO_PURE_DECLS \
	OceanProject_Plugins_OceanPlugin_Source_OceanPlugin_Classes_AdvancedBuoyancyComponent_AdvancedBuoyancyComponent_h_110_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID OceanProject_Plugins_OceanPlugin_Source_OceanPlugin_Classes_AdvancedBuoyancyComponent_AdvancedBuoyancyComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
