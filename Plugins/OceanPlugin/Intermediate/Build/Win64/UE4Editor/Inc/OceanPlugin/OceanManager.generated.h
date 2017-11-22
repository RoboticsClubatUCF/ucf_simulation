// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLinearColor;
class UTexture2D;
struct FVector;
class UWorld;
#ifdef OCEANPLUGIN_OceanManager_generated_h
#error "OceanManager.generated.h already included, missing '#pragma once' in OceanManager.h"
#endif
#define OCEANPLUGIN_OceanManager_generated_h

<<<<<<< HEAD
<<<<<<< HEAD
#define ucf_simulation_Plugins_OceanPlugin_Source_OceanPlugin_Classes_OceanManager_h_75_GENERATED_BODY \
=======
#define OceanProject_Plugins_OceanPlugin_Source_OceanPlugin_Classes_OceanManager_h_75_GENERATED_BODY \
>>>>>>> 8b683923a06151c0902a22a410c7caa957971891
=======
#define OceanProject_Plugins_OceanPlugin_Source_OceanPlugin_Classes_OceanManager_h_75_GENERATED_BODY \
>>>>>>> 26acfffe57e8a565d1348995aace6e6a76a40061
	friend OCEANPLUGIN_API class UScriptStruct* Z_Construct_UScriptStruct_FWaveSetParameters(); \
	static class UScriptStruct* StaticStruct();


<<<<<<< HEAD
<<<<<<< HEAD
#define ucf_simulation_Plugins_OceanPlugin_Source_OceanPlugin_Classes_OceanManager_h_35_GENERATED_BODY \
=======
#define OceanProject_Plugins_OceanPlugin_Source_OceanPlugin_Classes_OceanManager_h_35_GENERATED_BODY \
>>>>>>> 8b683923a06151c0902a22a410c7caa957971891
=======
#define OceanProject_Plugins_OceanPlugin_Source_OceanPlugin_Classes_OceanManager_h_35_GENERATED_BODY \
>>>>>>> 26acfffe57e8a565d1348995aace6e6a76a40061
	friend OCEANPLUGIN_API class UScriptStruct* Z_Construct_UScriptStruct_FWaveParameter(); \
	static class UScriptStruct* StaticStruct();


<<<<<<< HEAD
<<<<<<< HEAD
#define ucf_simulation_Plugins_OceanPlugin_Source_OceanPlugin_Classes_OceanManager_h_136_RPC_WRAPPERS \
=======
#define OceanProject_Plugins_OceanPlugin_Source_OceanPlugin_Classes_OceanManager_h_136_RPC_WRAPPERS \
>>>>>>> 8b683923a06151c0902a22a410c7caa957971891
=======
#define OceanProject_Plugins_OceanPlugin_Source_OceanPlugin_Classes_OceanManager_h_136_RPC_WRAPPERS \
>>>>>>> 26acfffe57e8a565d1348995aace6e6a76a40061
 \
	DECLARE_FUNCTION(execGetHeightmapPixel) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_U); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_V); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FLinearColor*)Z_Param__Result=this->GetHeightmapPixel(Z_Param_U,Z_Param_V); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadLandscapeHeightmap) \
	{ \
		P_GET_OBJECT(UTexture2D,Z_Param_Tex2D); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->LoadLandscapeHeightmap(Z_Param_Tex2D); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetWaveHeightValue) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_location); \
		P_GET_OBJECT(UWorld,Z_Param_World); \
		P_GET_UBOOL(Z_Param_HeightOnly); \
		P_GET_UBOOL(Z_Param_TwoIterations); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=this->GetWaveHeightValue(Z_Param_Out_location,Z_Param_World,Z_Param_HeightOnly,Z_Param_TwoIterations); \
		P_NATIVE_END; \
	}


<<<<<<< HEAD
<<<<<<< HEAD
#define ucf_simulation_Plugins_OceanPlugin_Source_OceanPlugin_Classes_OceanManager_h_136_RPC_WRAPPERS_NO_PURE_DECLS \
=======
#define OceanProject_Plugins_OceanPlugin_Source_OceanPlugin_Classes_OceanManager_h_136_RPC_WRAPPERS_NO_PURE_DECLS \
>>>>>>> 8b683923a06151c0902a22a410c7caa957971891
=======
#define OceanProject_Plugins_OceanPlugin_Source_OceanPlugin_Classes_OceanManager_h_136_RPC_WRAPPERS_NO_PURE_DECLS \
>>>>>>> 26acfffe57e8a565d1348995aace6e6a76a40061
 \
	DECLARE_FUNCTION(execGetHeightmapPixel) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_U); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_V); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FLinearColor*)Z_Param__Result=this->GetHeightmapPixel(Z_Param_U,Z_Param_V); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadLandscapeHeightmap) \
	{ \
		P_GET_OBJECT(UTexture2D,Z_Param_Tex2D); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->LoadLandscapeHeightmap(Z_Param_Tex2D); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetWaveHeightValue) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_location); \
		P_GET_OBJECT(UWorld,Z_Param_World); \
		P_GET_UBOOL(Z_Param_HeightOnly); \
		P_GET_UBOOL(Z_Param_TwoIterations); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=this->GetWaveHeightValue(Z_Param_Out_location,Z_Param_World,Z_Param_HeightOnly,Z_Param_TwoIterations); \
		P_NATIVE_END; \
	}


<<<<<<< HEAD
<<<<<<< HEAD
#define ucf_simulation_Plugins_OceanPlugin_Source_OceanPlugin_Classes_OceanManager_h_136_INCLASS_NO_PURE_DECLS \
=======
#define OceanProject_Plugins_OceanPlugin_Source_OceanPlugin_Classes_OceanManager_h_136_INCLASS_NO_PURE_DECLS \
>>>>>>> 8b683923a06151c0902a22a410c7caa957971891
=======
#define OceanProject_Plugins_OceanPlugin_Source_OceanPlugin_Classes_OceanManager_h_136_INCLASS_NO_PURE_DECLS \
>>>>>>> 26acfffe57e8a565d1348995aace6e6a76a40061
private: \
	static void StaticRegisterNativesAOceanManager(); \
	friend OCEANPLUGIN_API class UClass* Z_Construct_UClass_AOceanManager(); \
public: \
	DECLARE_CLASS(AOceanManager, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/OceanPlugin"), NO_API) \
	DECLARE_SERIALIZER(AOceanManager) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


<<<<<<< HEAD
<<<<<<< HEAD
#define ucf_simulation_Plugins_OceanPlugin_Source_OceanPlugin_Classes_OceanManager_h_136_INCLASS \
=======
#define OceanProject_Plugins_OceanPlugin_Source_OceanPlugin_Classes_OceanManager_h_136_INCLASS \
>>>>>>> 8b683923a06151c0902a22a410c7caa957971891
=======
#define OceanProject_Plugins_OceanPlugin_Source_OceanPlugin_Classes_OceanManager_h_136_INCLASS \
>>>>>>> 26acfffe57e8a565d1348995aace6e6a76a40061
private: \
	static void StaticRegisterNativesAOceanManager(); \
	friend OCEANPLUGIN_API class UClass* Z_Construct_UClass_AOceanManager(); \
public: \
	DECLARE_CLASS(AOceanManager, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/OceanPlugin"), NO_API) \
	DECLARE_SERIALIZER(AOceanManager) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


<<<<<<< HEAD
<<<<<<< HEAD
#define ucf_simulation_Plugins_OceanPlugin_Source_OceanPlugin_Classes_OceanManager_h_136_STANDARD_CONSTRUCTORS \
=======
#define OceanProject_Plugins_OceanPlugin_Source_OceanPlugin_Classes_OceanManager_h_136_STANDARD_CONSTRUCTORS \
>>>>>>> 8b683923a06151c0902a22a410c7caa957971891
=======
#define OceanProject_Plugins_OceanPlugin_Source_OceanPlugin_Classes_OceanManager_h_136_STANDARD_CONSTRUCTORS \
>>>>>>> 26acfffe57e8a565d1348995aace6e6a76a40061
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AOceanManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AOceanManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AOceanManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AOceanManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AOceanManager(AOceanManager&&); \
	NO_API AOceanManager(const AOceanManager&); \
public:


<<<<<<< HEAD
<<<<<<< HEAD
#define ucf_simulation_Plugins_OceanPlugin_Source_OceanPlugin_Classes_OceanManager_h_136_ENHANCED_CONSTRUCTORS \
=======
#define OceanProject_Plugins_OceanPlugin_Source_OceanPlugin_Classes_OceanManager_h_136_ENHANCED_CONSTRUCTORS \
>>>>>>> 8b683923a06151c0902a22a410c7caa957971891
=======
#define OceanProject_Plugins_OceanPlugin_Source_OceanPlugin_Classes_OceanManager_h_136_ENHANCED_CONSTRUCTORS \
>>>>>>> 26acfffe57e8a565d1348995aace6e6a76a40061
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AOceanManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AOceanManager(AOceanManager&&); \
	NO_API AOceanManager(const AOceanManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AOceanManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AOceanManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AOceanManager)


<<<<<<< HEAD
<<<<<<< HEAD
#define ucf_simulation_Plugins_OceanPlugin_Source_OceanPlugin_Classes_OceanManager_h_136_PRIVATE_PROPERTY_OFFSET
#define ucf_simulation_Plugins_OceanPlugin_Source_OceanPlugin_Classes_OceanManager_h_133_PROLOG
#define ucf_simulation_Plugins_OceanPlugin_Source_OceanPlugin_Classes_OceanManager_h_136_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ucf_simulation_Plugins_OceanPlugin_Source_OceanPlugin_Classes_OceanManager_h_136_PRIVATE_PROPERTY_OFFSET \
	ucf_simulation_Plugins_OceanPlugin_Source_OceanPlugin_Classes_OceanManager_h_136_RPC_WRAPPERS \
	ucf_simulation_Plugins_OceanPlugin_Source_OceanPlugin_Classes_OceanManager_h_136_INCLASS \
	ucf_simulation_Plugins_OceanPlugin_Source_OceanPlugin_Classes_OceanManager_h_136_STANDARD_CONSTRUCTORS \
=======
=======
>>>>>>> 26acfffe57e8a565d1348995aace6e6a76a40061
#define OceanProject_Plugins_OceanPlugin_Source_OceanPlugin_Classes_OceanManager_h_136_PRIVATE_PROPERTY_OFFSET
#define OceanProject_Plugins_OceanPlugin_Source_OceanPlugin_Classes_OceanManager_h_133_PROLOG
#define OceanProject_Plugins_OceanPlugin_Source_OceanPlugin_Classes_OceanManager_h_136_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	OceanProject_Plugins_OceanPlugin_Source_OceanPlugin_Classes_OceanManager_h_136_PRIVATE_PROPERTY_OFFSET \
	OceanProject_Plugins_OceanPlugin_Source_OceanPlugin_Classes_OceanManager_h_136_RPC_WRAPPERS \
	OceanProject_Plugins_OceanPlugin_Source_OceanPlugin_Classes_OceanManager_h_136_INCLASS \
	OceanProject_Plugins_OceanPlugin_Source_OceanPlugin_Classes_OceanManager_h_136_STANDARD_CONSTRUCTORS \
<<<<<<< HEAD
>>>>>>> 8b683923a06151c0902a22a410c7caa957971891
=======
>>>>>>> 26acfffe57e8a565d1348995aace6e6a76a40061
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


<<<<<<< HEAD
<<<<<<< HEAD
#define ucf_simulation_Plugins_OceanPlugin_Source_OceanPlugin_Classes_OceanManager_h_136_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ucf_simulation_Plugins_OceanPlugin_Source_OceanPlugin_Classes_OceanManager_h_136_PRIVATE_PROPERTY_OFFSET \
	ucf_simulation_Plugins_OceanPlugin_Source_OceanPlugin_Classes_OceanManager_h_136_RPC_WRAPPERS_NO_PURE_DECLS \
	ucf_simulation_Plugins_OceanPlugin_Source_OceanPlugin_Classes_OceanManager_h_136_INCLASS_NO_PURE_DECLS \
	ucf_simulation_Plugins_OceanPlugin_Source_OceanPlugin_Classes_OceanManager_h_136_ENHANCED_CONSTRUCTORS \
=======
=======
>>>>>>> 26acfffe57e8a565d1348995aace6e6a76a40061
#define OceanProject_Plugins_OceanPlugin_Source_OceanPlugin_Classes_OceanManager_h_136_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	OceanProject_Plugins_OceanPlugin_Source_OceanPlugin_Classes_OceanManager_h_136_PRIVATE_PROPERTY_OFFSET \
	OceanProject_Plugins_OceanPlugin_Source_OceanPlugin_Classes_OceanManager_h_136_RPC_WRAPPERS_NO_PURE_DECLS \
	OceanProject_Plugins_OceanPlugin_Source_OceanPlugin_Classes_OceanManager_h_136_INCLASS_NO_PURE_DECLS \
	OceanProject_Plugins_OceanPlugin_Source_OceanPlugin_Classes_OceanManager_h_136_ENHANCED_CONSTRUCTORS \
<<<<<<< HEAD
>>>>>>> 8b683923a06151c0902a22a410c7caa957971891
=======
>>>>>>> 26acfffe57e8a565d1348995aace6e6a76a40061
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class OceanManager."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
<<<<<<< HEAD
<<<<<<< HEAD
#define CURRENT_FILE_ID ucf_simulation_Plugins_OceanPlugin_Source_OceanPlugin_Classes_OceanManager_h
=======
#define CURRENT_FILE_ID OceanProject_Plugins_OceanPlugin_Source_OceanPlugin_Classes_OceanManager_h
>>>>>>> 8b683923a06151c0902a22a410c7caa957971891
=======
#define CURRENT_FILE_ID OceanProject_Plugins_OceanPlugin_Source_OceanPlugin_Classes_OceanManager_h
>>>>>>> 26acfffe57e8a565d1348995aace6e6a76a40061


PRAGMA_ENABLE_DEPRECATION_WARNINGS
