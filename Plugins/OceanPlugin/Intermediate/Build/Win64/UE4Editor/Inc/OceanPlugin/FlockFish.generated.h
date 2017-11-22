// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef OCEANPLUGIN_FlockFish_generated_h
#error "FlockFish.generated.h already included, missing '#pragma once' in FlockFish.h"
#endif
#define OCEANPLUGIN_FlockFish_generated_h

<<<<<<< HEAD
<<<<<<< HEAD
#define ucf_simulation_Plugins_OceanPlugin_Source_OceanPlugin_Classes_Fish_FlockFish_h_33_RPC_WRAPPERS \
=======
#define OceanProject_Plugins_OceanPlugin_Source_OceanPlugin_Classes_Fish_FlockFish_h_33_RPC_WRAPPERS \
>>>>>>> 8b683923a06151c0902a22a410c7caa957971891
=======
#define OceanProject_Plugins_OceanPlugin_Source_OceanPlugin_Classes_Fish_FlockFish_h_33_RPC_WRAPPERS \
>>>>>>> 26acfffe57e8a565d1348995aace6e6a76a40061
 \
	DECLARE_FUNCTION(execOnEndOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_activatedComp); \
		P_GET_OBJECT(AActor,Z_Param_otherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_otherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_otherBodyIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnEndOverlap(Z_Param_activatedComp,Z_Param_otherActor,Z_Param_otherComp,Z_Param_otherBodyIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnBeginOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_activatedComp); \
		P_GET_OBJECT(AActor,Z_Param_otherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_otherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_otherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_sweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnBeginOverlap(Z_Param_activatedComp,Z_Param_otherActor,Z_Param_otherComp,Z_Param_otherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_sweepResult); \
		P_NATIVE_END; \
	}


<<<<<<< HEAD
<<<<<<< HEAD
#define ucf_simulation_Plugins_OceanPlugin_Source_OceanPlugin_Classes_Fish_FlockFish_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
=======
#define OceanProject_Plugins_OceanPlugin_Source_OceanPlugin_Classes_Fish_FlockFish_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
>>>>>>> 8b683923a06151c0902a22a410c7caa957971891
=======
#define OceanProject_Plugins_OceanPlugin_Source_OceanPlugin_Classes_Fish_FlockFish_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
>>>>>>> 26acfffe57e8a565d1348995aace6e6a76a40061
 \
	DECLARE_FUNCTION(execOnEndOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_activatedComp); \
		P_GET_OBJECT(AActor,Z_Param_otherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_otherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_otherBodyIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnEndOverlap(Z_Param_activatedComp,Z_Param_otherActor,Z_Param_otherComp,Z_Param_otherBodyIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnBeginOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_activatedComp); \
		P_GET_OBJECT(AActor,Z_Param_otherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_otherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_otherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_sweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnBeginOverlap(Z_Param_activatedComp,Z_Param_otherActor,Z_Param_otherComp,Z_Param_otherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_sweepResult); \
		P_NATIVE_END; \
	}


<<<<<<< HEAD
<<<<<<< HEAD
#define ucf_simulation_Plugins_OceanPlugin_Source_OceanPlugin_Classes_Fish_FlockFish_h_33_INCLASS_NO_PURE_DECLS \
=======
#define OceanProject_Plugins_OceanPlugin_Source_OceanPlugin_Classes_Fish_FlockFish_h_33_INCLASS_NO_PURE_DECLS \
>>>>>>> 8b683923a06151c0902a22a410c7caa957971891
=======
#define OceanProject_Plugins_OceanPlugin_Source_OceanPlugin_Classes_Fish_FlockFish_h_33_INCLASS_NO_PURE_DECLS \
>>>>>>> 26acfffe57e8a565d1348995aace6e6a76a40061
private: \
	static void StaticRegisterNativesAFlockFish(); \
	friend OCEANPLUGIN_API class UClass* Z_Construct_UClass_AFlockFish(); \
public: \
	DECLARE_CLASS(AFlockFish, APawn, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/OceanPlugin"), NO_API) \
	DECLARE_SERIALIZER(AFlockFish) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


<<<<<<< HEAD
<<<<<<< HEAD
#define ucf_simulation_Plugins_OceanPlugin_Source_OceanPlugin_Classes_Fish_FlockFish_h_33_INCLASS \
=======
#define OceanProject_Plugins_OceanPlugin_Source_OceanPlugin_Classes_Fish_FlockFish_h_33_INCLASS \
>>>>>>> 8b683923a06151c0902a22a410c7caa957971891
=======
#define OceanProject_Plugins_OceanPlugin_Source_OceanPlugin_Classes_Fish_FlockFish_h_33_INCLASS \
>>>>>>> 26acfffe57e8a565d1348995aace6e6a76a40061
private: \
	static void StaticRegisterNativesAFlockFish(); \
	friend OCEANPLUGIN_API class UClass* Z_Construct_UClass_AFlockFish(); \
public: \
	DECLARE_CLASS(AFlockFish, APawn, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/OceanPlugin"), NO_API) \
	DECLARE_SERIALIZER(AFlockFish) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


<<<<<<< HEAD
<<<<<<< HEAD
#define ucf_simulation_Plugins_OceanPlugin_Source_OceanPlugin_Classes_Fish_FlockFish_h_33_STANDARD_CONSTRUCTORS \
=======
#define OceanProject_Plugins_OceanPlugin_Source_OceanPlugin_Classes_Fish_FlockFish_h_33_STANDARD_CONSTRUCTORS \
>>>>>>> 8b683923a06151c0902a22a410c7caa957971891
=======
#define OceanProject_Plugins_OceanPlugin_Source_OceanPlugin_Classes_Fish_FlockFish_h_33_STANDARD_CONSTRUCTORS \
>>>>>>> 26acfffe57e8a565d1348995aace6e6a76a40061
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFlockFish(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFlockFish) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFlockFish); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFlockFish); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFlockFish(AFlockFish&&); \
	NO_API AFlockFish(const AFlockFish&); \
public:


<<<<<<< HEAD
<<<<<<< HEAD
#define ucf_simulation_Plugins_OceanPlugin_Source_OceanPlugin_Classes_Fish_FlockFish_h_33_ENHANCED_CONSTRUCTORS \
=======
#define OceanProject_Plugins_OceanPlugin_Source_OceanPlugin_Classes_Fish_FlockFish_h_33_ENHANCED_CONSTRUCTORS \
>>>>>>> 8b683923a06151c0902a22a410c7caa957971891
=======
#define OceanProject_Plugins_OceanPlugin_Source_OceanPlugin_Classes_Fish_FlockFish_h_33_ENHANCED_CONSTRUCTORS \
>>>>>>> 26acfffe57e8a565d1348995aace6e6a76a40061
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFlockFish(AFlockFish&&); \
	NO_API AFlockFish(const AFlockFish&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFlockFish); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFlockFish); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFlockFish)


<<<<<<< HEAD
<<<<<<< HEAD
#define ucf_simulation_Plugins_OceanPlugin_Source_OceanPlugin_Classes_Fish_FlockFish_h_33_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__FishInteractionSphere() { return STRUCT_OFFSET(AFlockFish, FishInteractionSphere); }


#define ucf_simulation_Plugins_OceanPlugin_Source_OceanPlugin_Classes_Fish_FlockFish_h_30_PROLOG
#define ucf_simulation_Plugins_OceanPlugin_Source_OceanPlugin_Classes_Fish_FlockFish_h_33_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ucf_simulation_Plugins_OceanPlugin_Source_OceanPlugin_Classes_Fish_FlockFish_h_33_PRIVATE_PROPERTY_OFFSET \
	ucf_simulation_Plugins_OceanPlugin_Source_OceanPlugin_Classes_Fish_FlockFish_h_33_RPC_WRAPPERS \
	ucf_simulation_Plugins_OceanPlugin_Source_OceanPlugin_Classes_Fish_FlockFish_h_33_INCLASS \
	ucf_simulation_Plugins_OceanPlugin_Source_OceanPlugin_Classes_Fish_FlockFish_h_33_STANDARD_CONSTRUCTORS \
=======
=======
>>>>>>> 26acfffe57e8a565d1348995aace6e6a76a40061
#define OceanProject_Plugins_OceanPlugin_Source_OceanPlugin_Classes_Fish_FlockFish_h_33_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__FishInteractionSphere() { return STRUCT_OFFSET(AFlockFish, FishInteractionSphere); }


#define OceanProject_Plugins_OceanPlugin_Source_OceanPlugin_Classes_Fish_FlockFish_h_30_PROLOG
#define OceanProject_Plugins_OceanPlugin_Source_OceanPlugin_Classes_Fish_FlockFish_h_33_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	OceanProject_Plugins_OceanPlugin_Source_OceanPlugin_Classes_Fish_FlockFish_h_33_PRIVATE_PROPERTY_OFFSET \
	OceanProject_Plugins_OceanPlugin_Source_OceanPlugin_Classes_Fish_FlockFish_h_33_RPC_WRAPPERS \
	OceanProject_Plugins_OceanPlugin_Source_OceanPlugin_Classes_Fish_FlockFish_h_33_INCLASS \
	OceanProject_Plugins_OceanPlugin_Source_OceanPlugin_Classes_Fish_FlockFish_h_33_STANDARD_CONSTRUCTORS \
<<<<<<< HEAD
>>>>>>> 8b683923a06151c0902a22a410c7caa957971891
=======
>>>>>>> 26acfffe57e8a565d1348995aace6e6a76a40061
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


<<<<<<< HEAD
<<<<<<< HEAD
#define ucf_simulation_Plugins_OceanPlugin_Source_OceanPlugin_Classes_Fish_FlockFish_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ucf_simulation_Plugins_OceanPlugin_Source_OceanPlugin_Classes_Fish_FlockFish_h_33_PRIVATE_PROPERTY_OFFSET \
	ucf_simulation_Plugins_OceanPlugin_Source_OceanPlugin_Classes_Fish_FlockFish_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	ucf_simulation_Plugins_OceanPlugin_Source_OceanPlugin_Classes_Fish_FlockFish_h_33_INCLASS_NO_PURE_DECLS \
	ucf_simulation_Plugins_OceanPlugin_Source_OceanPlugin_Classes_Fish_FlockFish_h_33_ENHANCED_CONSTRUCTORS \
=======
=======
>>>>>>> 26acfffe57e8a565d1348995aace6e6a76a40061
#define OceanProject_Plugins_OceanPlugin_Source_OceanPlugin_Classes_Fish_FlockFish_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	OceanProject_Plugins_OceanPlugin_Source_OceanPlugin_Classes_Fish_FlockFish_h_33_PRIVATE_PROPERTY_OFFSET \
	OceanProject_Plugins_OceanPlugin_Source_OceanPlugin_Classes_Fish_FlockFish_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	OceanProject_Plugins_OceanPlugin_Source_OceanPlugin_Classes_Fish_FlockFish_h_33_INCLASS_NO_PURE_DECLS \
	OceanProject_Plugins_OceanPlugin_Source_OceanPlugin_Classes_Fish_FlockFish_h_33_ENHANCED_CONSTRUCTORS \
<<<<<<< HEAD
>>>>>>> 8b683923a06151c0902a22a410c7caa957971891
=======
>>>>>>> 26acfffe57e8a565d1348995aace6e6a76a40061
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
<<<<<<< HEAD
<<<<<<< HEAD
#define CURRENT_FILE_ID ucf_simulation_Plugins_OceanPlugin_Source_OceanPlugin_Classes_Fish_FlockFish_h
=======
#define CURRENT_FILE_ID OceanProject_Plugins_OceanPlugin_Source_OceanPlugin_Classes_Fish_FlockFish_h
>>>>>>> 8b683923a06151c0902a22a410c7caa957971891
=======
#define CURRENT_FILE_ID OceanProject_Plugins_OceanPlugin_Source_OceanPlugin_Classes_Fish_FlockFish_h
>>>>>>> 26acfffe57e8a565d1348995aace6e6a76a40061


PRAGMA_ENABLE_DEPRECATION_WARNINGS
