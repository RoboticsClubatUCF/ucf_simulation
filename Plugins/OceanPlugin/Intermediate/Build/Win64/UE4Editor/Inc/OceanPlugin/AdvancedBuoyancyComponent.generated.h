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

<<<<<<< HEAD
<<<<<<< HEAD
#define ucf_simulation_Plugins_OceanPlugin_Source_OceanPlugin_Classes_AdvancedBuoyancyComponent_AdvancedBuoyancyComponent_h_47_GENERATED_BODY \
=======
#define OceanProject_Plugins_OceanPlugin_Source_OceanPlugin_Classes_AdvancedBuoyancyComponent_AdvancedBuoyancyComponent_h_47_GENERATED_BODY \
>>>>>>> 8b683923a06151c0902a22a410c7caa957971891
=======
#define OceanProject_Plugins_OceanPlugin_Source_OceanPlugin_Classes_AdvancedBuoyancyComponent_AdvancedBuoyancyComponent_h_47_GENERATED_BODY \
>>>>>>> 26acfffe57e8a565d1348995aace6e6a76a40061
	friend OCEANPLUGIN_API class UScriptStruct* Z_Construct_UScriptStruct_FForceTriangle(); \
	OCEANPLUGIN_API static class UScriptStruct* StaticStruct();


<<<<<<< HEAD
<<<<<<< HEAD
#define ucf_simulation_Plugins_OceanPlugin_Source_OceanPlugin_Classes_AdvancedBuoyancyComponent_AdvancedBuoyancyComponent_h_38_GENERATED_BODY \
=======
#define OceanProject_Plugins_OceanPlugin_Source_OceanPlugin_Classes_AdvancedBuoyancyComponent_AdvancedBuoyancyComponent_h_38_GENERATED_BODY \
>>>>>>> 8b683923a06151c0902a22a410c7caa957971891
=======
#define OceanProject_Plugins_OceanPlugin_Source_OceanPlugin_Classes_AdvancedBuoyancyComponent_AdvancedBuoyancyComponent_h_38_GENERATED_BODY \
>>>>>>> 26acfffe57e8a565d1348995aace6e6a76a40061
	friend OCEANPLUGIN_API class UScriptStruct* Z_Construct_UScriptStruct_FBuoyancyVertex(); \
	OCEANPLUGIN_API static class UScriptStruct* StaticStruct();


<<<<<<< HEAD
<<<<<<< HEAD
#define ucf_simulation_Plugins_OceanPlugin_Source_OceanPlugin_Classes_AdvancedBuoyancyComponent_AdvancedBuoyancyComponent_h_110_RPC_WRAPPERS \
=======
#define OceanProject_Plugins_OceanPlugin_Source_OceanPlugin_Classes_AdvancedBuoyancyComponent_AdvancedBuoyancyComponent_h_110_RPC_WRAPPERS \
>>>>>>> 8b683923a06151c0902a22a410c7caa957971891
=======
#define OceanProject_Plugins_OceanPlugin_Source_OceanPlugin_Classes_AdvancedBuoyancyComponent_AdvancedBuoyancyComponent_h_110_RPC_WRAPPERS \
>>>>>>> 26acfffe57e8a565d1348995aace6e6a76a40061
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


<<<<<<< HEAD
<<<<<<< HEAD
#define ucf_simulation_Plugins_OceanPlugin_Source_OceanPlugin_Classes_AdvancedBuoyancyComponent_AdvancedBuoyancyComponent_h_110_RPC_WRAPPERS_NO_PURE_DECLS \
=======
#define OceanProject_Plugins_OceanPlugin_Source_OceanPlugin_Classes_AdvancedBuoyancyComponent_AdvancedBuoyancyComponent_h_110_RPC_WRAPPERS_NO_PURE_DECLS \
>>>>>>> 8b683923a06151c0902a22a410c7caa957971891
=======
#define OceanProject_Plugins_OceanPlugin_Source_OceanPlugin_Classes_AdvancedBuoyancyComponent_AdvancedBuoyancyComponent_h_110_RPC_WRAPPERS_NO_PURE_DECLS \
>>>>>>> 26acfffe57e8a565d1348995aace6e6a76a40061
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


<<<<<<< HEAD
<<<<<<< HEAD
#define ucf_simulation_Plugins_OceanPlugin_Source_OceanPlugin_Classes_AdvancedBuoyancyComponent_AdvancedBuoyancyComponent_h_110_INCLASS_NO_PURE_DECLS \
=======
#define OceanProject_Plugins_OceanPlugin_Source_OceanPlugin_Classes_AdvancedBuoyancyComponent_AdvancedBuoyancyComponent_h_110_INCLASS_NO_PURE_DECLS \
>>>>>>> 8b683923a06151c0902a22a410c7caa957971891
=======
#define OceanProject_Plugins_OceanPlugin_Source_OceanPlugin_Classes_AdvancedBuoyancyComponent_AdvancedBuoyancyComponent_h_110_INCLASS_NO_PURE_DECLS \
>>>>>>> 26acfffe57e8a565d1348995aace6e6a76a40061
private: \
	static void StaticRegisterNativesUAdvancedBuoyancyComponent(); \
	friend OCEANPLUGIN_API class UClass* Z_Construct_UClass_UAdvancedBuoyancyComponent(); \
public: \
	DECLARE_CLASS(UAdvancedBuoyancyComponent, USceneComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/OceanPlugin"), NO_API) \
	DECLARE_SERIALIZER(UAdvancedBuoyancyComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


<<<<<<< HEAD
<<<<<<< HEAD
#define ucf_simulation_Plugins_OceanPlugin_Source_OceanPlugin_Classes_AdvancedBuoyancyComponent_AdvancedBuoyancyComponent_h_110_INCLASS \
=======
#define OceanProject_Plugins_OceanPlugin_Source_OceanPlugin_Classes_AdvancedBuoyancyComponent_AdvancedBuoyancyComponent_h_110_INCLASS \
>>>>>>> 8b683923a06151c0902a22a410c7caa957971891
=======
#define OceanProject_Plugins_OceanPlugin_Source_OceanPlugin_Classes_AdvancedBuoyancyComponent_AdvancedBuoyancyComponent_h_110_INCLASS \
>>>>>>> 26acfffe57e8a565d1348995aace6e6a76a40061
private: \
	static void StaticRegisterNativesUAdvancedBuoyancyComponent(); \
	friend OCEANPLUGIN_API class UClass* Z_Construct_UClass_UAdvancedBuoyancyComponent(); \
public: \
	DECLARE_CLASS(UAdvancedBuoyancyComponent, USceneComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/OceanPlugin"), NO_API) \
	DECLARE_SERIALIZER(UAdvancedBuoyancyComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


<<<<<<< HEAD
<<<<<<< HEAD
#define ucf_simulation_Plugins_OceanPlugin_Source_OceanPlugin_Classes_AdvancedBuoyancyComponent_AdvancedBuoyancyComponent_h_110_STANDARD_CONSTRUCTORS \
=======
#define OceanProject_Plugins_OceanPlugin_Source_OceanPlugin_Classes_AdvancedBuoyancyComponent_AdvancedBuoyancyComponent_h_110_STANDARD_CONSTRUCTORS \
>>>>>>> 8b683923a06151c0902a22a410c7caa957971891
=======
#define OceanProject_Plugins_OceanPlugin_Source_OceanPlugin_Classes_AdvancedBuoyancyComponent_AdvancedBuoyancyComponent_h_110_STANDARD_CONSTRUCTORS \
>>>>>>> 26acfffe57e8a565d1348995aace6e6a76a40061
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


<<<<<<< HEAD
<<<<<<< HEAD
#define ucf_simulation_Plugins_OceanPlugin_Source_OceanPlugin_Classes_AdvancedBuoyancyComponent_AdvancedBuoyancyComponent_h_110_ENHANCED_CONSTRUCTORS \
=======
#define OceanProject_Plugins_OceanPlugin_Source_OceanPlugin_Classes_AdvancedBuoyancyComponent_AdvancedBuoyancyComponent_h_110_ENHANCED_CONSTRUCTORS \
>>>>>>> 8b683923a06151c0902a22a410c7caa957971891
=======
#define OceanProject_Plugins_OceanPlugin_Source_OceanPlugin_Classes_AdvancedBuoyancyComponent_AdvancedBuoyancyComponent_h_110_ENHANCED_CONSTRUCTORS \
>>>>>>> 26acfffe57e8a565d1348995aace6e6a76a40061
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAdvancedBuoyancyComponent(UAdvancedBuoyancyComponent&&); \
	NO_API UAdvancedBuoyancyComponent(const UAdvancedBuoyancyComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAdvancedBuoyancyComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAdvancedBuoyancyComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAdvancedBuoyancyComponent)


<<<<<<< HEAD
<<<<<<< HEAD
#define ucf_simulation_Plugins_OceanPlugin_Source_OceanPlugin_Classes_AdvancedBuoyancyComponent_AdvancedBuoyancyComponent_h_110_PRIVATE_PROPERTY_OFFSET
#define ucf_simulation_Plugins_OceanPlugin_Source_OceanPlugin_Classes_AdvancedBuoyancyComponent_AdvancedBuoyancyComponent_h_107_PROLOG
#define ucf_simulation_Plugins_OceanPlugin_Source_OceanPlugin_Classes_AdvancedBuoyancyComponent_AdvancedBuoyancyComponent_h_110_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ucf_simulation_Plugins_OceanPlugin_Source_OceanPlugin_Classes_AdvancedBuoyancyComponent_AdvancedBuoyancyComponent_h_110_PRIVATE_PROPERTY_OFFSET \
	ucf_simulation_Plugins_OceanPlugin_Source_OceanPlugin_Classes_AdvancedBuoyancyComponent_AdvancedBuoyancyComponent_h_110_RPC_WRAPPERS \
	ucf_simulation_Plugins_OceanPlugin_Source_OceanPlugin_Classes_AdvancedBuoyancyComponent_AdvancedBuoyancyComponent_h_110_INCLASS \
	ucf_simulation_Plugins_OceanPlugin_Source_OceanPlugin_Classes_AdvancedBuoyancyComponent_AdvancedBuoyancyComponent_h_110_STANDARD_CONSTRUCTORS \
=======
=======
>>>>>>> 26acfffe57e8a565d1348995aace6e6a76a40061
#define OceanProject_Plugins_OceanPlugin_Source_OceanPlugin_Classes_AdvancedBuoyancyComponent_AdvancedBuoyancyComponent_h_110_PRIVATE_PROPERTY_OFFSET
#define OceanProject_Plugins_OceanPlugin_Source_OceanPlugin_Classes_AdvancedBuoyancyComponent_AdvancedBuoyancyComponent_h_107_PROLOG
#define OceanProject_Plugins_OceanPlugin_Source_OceanPlugin_Classes_AdvancedBuoyancyComponent_AdvancedBuoyancyComponent_h_110_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	OceanProject_Plugins_OceanPlugin_Source_OceanPlugin_Classes_AdvancedBuoyancyComponent_AdvancedBuoyancyComponent_h_110_PRIVATE_PROPERTY_OFFSET \
	OceanProject_Plugins_OceanPlugin_Source_OceanPlugin_Classes_AdvancedBuoyancyComponent_AdvancedBuoyancyComponent_h_110_RPC_WRAPPERS \
	OceanProject_Plugins_OceanPlugin_Source_OceanPlugin_Classes_AdvancedBuoyancyComponent_AdvancedBuoyancyComponent_h_110_INCLASS \
	OceanProject_Plugins_OceanPlugin_Source_OceanPlugin_Classes_AdvancedBuoyancyComponent_AdvancedBuoyancyComponent_h_110_STANDARD_CONSTRUCTORS \
<<<<<<< HEAD
>>>>>>> 8b683923a06151c0902a22a410c7caa957971891
=======
>>>>>>> 26acfffe57e8a565d1348995aace6e6a76a40061
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


<<<<<<< HEAD
<<<<<<< HEAD
#define ucf_simulation_Plugins_OceanPlugin_Source_OceanPlugin_Classes_AdvancedBuoyancyComponent_AdvancedBuoyancyComponent_h_110_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ucf_simulation_Plugins_OceanPlugin_Source_OceanPlugin_Classes_AdvancedBuoyancyComponent_AdvancedBuoyancyComponent_h_110_PRIVATE_PROPERTY_OFFSET \
	ucf_simulation_Plugins_OceanPlugin_Source_OceanPlugin_Classes_AdvancedBuoyancyComponent_AdvancedBuoyancyComponent_h_110_RPC_WRAPPERS_NO_PURE_DECLS \
	ucf_simulation_Plugins_OceanPlugin_Source_OceanPlugin_Classes_AdvancedBuoyancyComponent_AdvancedBuoyancyComponent_h_110_INCLASS_NO_PURE_DECLS \
	ucf_simulation_Plugins_OceanPlugin_Source_OceanPlugin_Classes_AdvancedBuoyancyComponent_AdvancedBuoyancyComponent_h_110_ENHANCED_CONSTRUCTORS \
=======
=======
>>>>>>> 26acfffe57e8a565d1348995aace6e6a76a40061
#define OceanProject_Plugins_OceanPlugin_Source_OceanPlugin_Classes_AdvancedBuoyancyComponent_AdvancedBuoyancyComponent_h_110_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	OceanProject_Plugins_OceanPlugin_Source_OceanPlugin_Classes_AdvancedBuoyancyComponent_AdvancedBuoyancyComponent_h_110_PRIVATE_PROPERTY_OFFSET \
	OceanProject_Plugins_OceanPlugin_Source_OceanPlugin_Classes_AdvancedBuoyancyComponent_AdvancedBuoyancyComponent_h_110_RPC_WRAPPERS_NO_PURE_DECLS \
	OceanProject_Plugins_OceanPlugin_Source_OceanPlugin_Classes_AdvancedBuoyancyComponent_AdvancedBuoyancyComponent_h_110_INCLASS_NO_PURE_DECLS \
	OceanProject_Plugins_OceanPlugin_Source_OceanPlugin_Classes_AdvancedBuoyancyComponent_AdvancedBuoyancyComponent_h_110_ENHANCED_CONSTRUCTORS \
<<<<<<< HEAD
>>>>>>> 8b683923a06151c0902a22a410c7caa957971891
=======
>>>>>>> 26acfffe57e8a565d1348995aace6e6a76a40061
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
<<<<<<< HEAD
<<<<<<< HEAD
#define CURRENT_FILE_ID ucf_simulation_Plugins_OceanPlugin_Source_OceanPlugin_Classes_AdvancedBuoyancyComponent_AdvancedBuoyancyComponent_h
=======
#define CURRENT_FILE_ID OceanProject_Plugins_OceanPlugin_Source_OceanPlugin_Classes_AdvancedBuoyancyComponent_AdvancedBuoyancyComponent_h
>>>>>>> 8b683923a06151c0902a22a410c7caa957971891
=======
#define CURRENT_FILE_ID OceanProject_Plugins_OceanPlugin_Source_OceanPlugin_Classes_AdvancedBuoyancyComponent_AdvancedBuoyancyComponent_h
>>>>>>> 26acfffe57e8a565d1348995aace6e6a76a40061


PRAGMA_ENABLE_DEPRECATION_WARNINGS
