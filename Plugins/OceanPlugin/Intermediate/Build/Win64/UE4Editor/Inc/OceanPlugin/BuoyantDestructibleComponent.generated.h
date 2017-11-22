// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OCEANPLUGIN_BuoyantDestructibleComponent_generated_h
#error "BuoyantDestructibleComponent.generated.h already included, missing '#pragma once' in BuoyantDestructibleComponent.h"
#endif
#define OCEANPLUGIN_BuoyantDestructibleComponent_generated_h

<<<<<<< HEAD
<<<<<<< HEAD
#define ucf_simulation_Plugins_OceanPlugin_Source_OceanPlugin_Classes_BuoyantDestructibleComponent_h_30_RPC_WRAPPERS
#define ucf_simulation_Plugins_OceanPlugin_Source_OceanPlugin_Classes_BuoyantDestructibleComponent_h_30_RPC_WRAPPERS_NO_PURE_DECLS
#define ucf_simulation_Plugins_OceanPlugin_Source_OceanPlugin_Classes_BuoyantDestructibleComponent_h_30_INCLASS_NO_PURE_DECLS \
=======
#define OceanProject_Plugins_OceanPlugin_Source_OceanPlugin_Classes_BuoyantDestructibleComponent_h_30_RPC_WRAPPERS
#define OceanProject_Plugins_OceanPlugin_Source_OceanPlugin_Classes_BuoyantDestructibleComponent_h_30_RPC_WRAPPERS_NO_PURE_DECLS
#define OceanProject_Plugins_OceanPlugin_Source_OceanPlugin_Classes_BuoyantDestructibleComponent_h_30_INCLASS_NO_PURE_DECLS \
>>>>>>> 8b683923a06151c0902a22a410c7caa957971891
=======
#define OceanProject_Plugins_OceanPlugin_Source_OceanPlugin_Classes_BuoyantDestructibleComponent_h_30_RPC_WRAPPERS
#define OceanProject_Plugins_OceanPlugin_Source_OceanPlugin_Classes_BuoyantDestructibleComponent_h_30_RPC_WRAPPERS_NO_PURE_DECLS
#define OceanProject_Plugins_OceanPlugin_Source_OceanPlugin_Classes_BuoyantDestructibleComponent_h_30_INCLASS_NO_PURE_DECLS \
>>>>>>> 26acfffe57e8a565d1348995aace6e6a76a40061
private: \
	static void StaticRegisterNativesUBuoyantDestructibleComponent(); \
	friend OCEANPLUGIN_API class UClass* Z_Construct_UClass_UBuoyantDestructibleComponent(); \
public: \
	DECLARE_CLASS(UBuoyantDestructibleComponent, UDestructibleComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/OceanPlugin"), NO_API) \
	DECLARE_SERIALIZER(UBuoyantDestructibleComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


<<<<<<< HEAD
<<<<<<< HEAD
#define ucf_simulation_Plugins_OceanPlugin_Source_OceanPlugin_Classes_BuoyantDestructibleComponent_h_30_INCLASS \
=======
#define OceanProject_Plugins_OceanPlugin_Source_OceanPlugin_Classes_BuoyantDestructibleComponent_h_30_INCLASS \
>>>>>>> 8b683923a06151c0902a22a410c7caa957971891
=======
#define OceanProject_Plugins_OceanPlugin_Source_OceanPlugin_Classes_BuoyantDestructibleComponent_h_30_INCLASS \
>>>>>>> 26acfffe57e8a565d1348995aace6e6a76a40061
private: \
	static void StaticRegisterNativesUBuoyantDestructibleComponent(); \
	friend OCEANPLUGIN_API class UClass* Z_Construct_UClass_UBuoyantDestructibleComponent(); \
public: \
	DECLARE_CLASS(UBuoyantDestructibleComponent, UDestructibleComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/OceanPlugin"), NO_API) \
	DECLARE_SERIALIZER(UBuoyantDestructibleComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


<<<<<<< HEAD
<<<<<<< HEAD
#define ucf_simulation_Plugins_OceanPlugin_Source_OceanPlugin_Classes_BuoyantDestructibleComponent_h_30_STANDARD_CONSTRUCTORS \
=======
#define OceanProject_Plugins_OceanPlugin_Source_OceanPlugin_Classes_BuoyantDestructibleComponent_h_30_STANDARD_CONSTRUCTORS \
>>>>>>> 8b683923a06151c0902a22a410c7caa957971891
=======
#define OceanProject_Plugins_OceanPlugin_Source_OceanPlugin_Classes_BuoyantDestructibleComponent_h_30_STANDARD_CONSTRUCTORS \
>>>>>>> 26acfffe57e8a565d1348995aace6e6a76a40061
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBuoyantDestructibleComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBuoyantDestructibleComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBuoyantDestructibleComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBuoyantDestructibleComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBuoyantDestructibleComponent(UBuoyantDestructibleComponent&&); \
	NO_API UBuoyantDestructibleComponent(const UBuoyantDestructibleComponent&); \
public:


<<<<<<< HEAD
<<<<<<< HEAD
#define ucf_simulation_Plugins_OceanPlugin_Source_OceanPlugin_Classes_BuoyantDestructibleComponent_h_30_ENHANCED_CONSTRUCTORS \
=======
#define OceanProject_Plugins_OceanPlugin_Source_OceanPlugin_Classes_BuoyantDestructibleComponent_h_30_ENHANCED_CONSTRUCTORS \
>>>>>>> 8b683923a06151c0902a22a410c7caa957971891
=======
#define OceanProject_Plugins_OceanPlugin_Source_OceanPlugin_Classes_BuoyantDestructibleComponent_h_30_ENHANCED_CONSTRUCTORS \
>>>>>>> 26acfffe57e8a565d1348995aace6e6a76a40061
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBuoyantDestructibleComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBuoyantDestructibleComponent(UBuoyantDestructibleComponent&&); \
	NO_API UBuoyantDestructibleComponent(const UBuoyantDestructibleComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBuoyantDestructibleComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBuoyantDestructibleComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBuoyantDestructibleComponent)


<<<<<<< HEAD
<<<<<<< HEAD
#define ucf_simulation_Plugins_OceanPlugin_Source_OceanPlugin_Classes_BuoyantDestructibleComponent_h_30_PRIVATE_PROPERTY_OFFSET
#define ucf_simulation_Plugins_OceanPlugin_Source_OceanPlugin_Classes_BuoyantDestructibleComponent_h_27_PROLOG
#define ucf_simulation_Plugins_OceanPlugin_Source_OceanPlugin_Classes_BuoyantDestructibleComponent_h_30_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ucf_simulation_Plugins_OceanPlugin_Source_OceanPlugin_Classes_BuoyantDestructibleComponent_h_30_PRIVATE_PROPERTY_OFFSET \
	ucf_simulation_Plugins_OceanPlugin_Source_OceanPlugin_Classes_BuoyantDestructibleComponent_h_30_RPC_WRAPPERS \
	ucf_simulation_Plugins_OceanPlugin_Source_OceanPlugin_Classes_BuoyantDestructibleComponent_h_30_INCLASS \
	ucf_simulation_Plugins_OceanPlugin_Source_OceanPlugin_Classes_BuoyantDestructibleComponent_h_30_STANDARD_CONSTRUCTORS \
=======
=======
>>>>>>> 26acfffe57e8a565d1348995aace6e6a76a40061
#define OceanProject_Plugins_OceanPlugin_Source_OceanPlugin_Classes_BuoyantDestructibleComponent_h_30_PRIVATE_PROPERTY_OFFSET
#define OceanProject_Plugins_OceanPlugin_Source_OceanPlugin_Classes_BuoyantDestructibleComponent_h_27_PROLOG
#define OceanProject_Plugins_OceanPlugin_Source_OceanPlugin_Classes_BuoyantDestructibleComponent_h_30_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	OceanProject_Plugins_OceanPlugin_Source_OceanPlugin_Classes_BuoyantDestructibleComponent_h_30_PRIVATE_PROPERTY_OFFSET \
	OceanProject_Plugins_OceanPlugin_Source_OceanPlugin_Classes_BuoyantDestructibleComponent_h_30_RPC_WRAPPERS \
	OceanProject_Plugins_OceanPlugin_Source_OceanPlugin_Classes_BuoyantDestructibleComponent_h_30_INCLASS \
	OceanProject_Plugins_OceanPlugin_Source_OceanPlugin_Classes_BuoyantDestructibleComponent_h_30_STANDARD_CONSTRUCTORS \
<<<<<<< HEAD
>>>>>>> 8b683923a06151c0902a22a410c7caa957971891
=======
>>>>>>> 26acfffe57e8a565d1348995aace6e6a76a40061
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


<<<<<<< HEAD
<<<<<<< HEAD
#define ucf_simulation_Plugins_OceanPlugin_Source_OceanPlugin_Classes_BuoyantDestructibleComponent_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ucf_simulation_Plugins_OceanPlugin_Source_OceanPlugin_Classes_BuoyantDestructibleComponent_h_30_PRIVATE_PROPERTY_OFFSET \
	ucf_simulation_Plugins_OceanPlugin_Source_OceanPlugin_Classes_BuoyantDestructibleComponent_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	ucf_simulation_Plugins_OceanPlugin_Source_OceanPlugin_Classes_BuoyantDestructibleComponent_h_30_INCLASS_NO_PURE_DECLS \
	ucf_simulation_Plugins_OceanPlugin_Source_OceanPlugin_Classes_BuoyantDestructibleComponent_h_30_ENHANCED_CONSTRUCTORS \
=======
=======
>>>>>>> 26acfffe57e8a565d1348995aace6e6a76a40061
#define OceanProject_Plugins_OceanPlugin_Source_OceanPlugin_Classes_BuoyantDestructibleComponent_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	OceanProject_Plugins_OceanPlugin_Source_OceanPlugin_Classes_BuoyantDestructibleComponent_h_30_PRIVATE_PROPERTY_OFFSET \
	OceanProject_Plugins_OceanPlugin_Source_OceanPlugin_Classes_BuoyantDestructibleComponent_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	OceanProject_Plugins_OceanPlugin_Source_OceanPlugin_Classes_BuoyantDestructibleComponent_h_30_INCLASS_NO_PURE_DECLS \
	OceanProject_Plugins_OceanPlugin_Source_OceanPlugin_Classes_BuoyantDestructibleComponent_h_30_ENHANCED_CONSTRUCTORS \
<<<<<<< HEAD
>>>>>>> 8b683923a06151c0902a22a410c7caa957971891
=======
>>>>>>> 26acfffe57e8a565d1348995aace6e6a76a40061
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class BuoyantDestructibleComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
<<<<<<< HEAD
<<<<<<< HEAD
#define CURRENT_FILE_ID ucf_simulation_Plugins_OceanPlugin_Source_OceanPlugin_Classes_BuoyantDestructibleComponent_h
=======
#define CURRENT_FILE_ID OceanProject_Plugins_OceanPlugin_Source_OceanPlugin_Classes_BuoyantDestructibleComponent_h
>>>>>>> 8b683923a06151c0902a22a410c7caa957971891
=======
#define CURRENT_FILE_ID OceanProject_Plugins_OceanPlugin_Source_OceanPlugin_Classes_BuoyantDestructibleComponent_h
>>>>>>> 26acfffe57e8a565d1348995aace6e6a76a40061


PRAGMA_ENABLE_DEPRECATION_WARNINGS
