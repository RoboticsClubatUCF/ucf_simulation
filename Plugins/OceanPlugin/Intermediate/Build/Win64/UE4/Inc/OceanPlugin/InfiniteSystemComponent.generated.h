// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OCEANPLUGIN_InfiniteSystemComponent_generated_h
#error "InfiniteSystemComponent.generated.h already included, missing '#pragma once' in InfiniteSystemComponent.h"
#endif
#define OCEANPLUGIN_InfiniteSystemComponent_generated_h

#define OceanProject_Plugins_OceanPlugin_Source_OceanPlugin_Classes_InfiniteSystemComponent_h_42_RPC_WRAPPERS
#define OceanProject_Plugins_OceanPlugin_Source_OceanPlugin_Classes_InfiniteSystemComponent_h_42_RPC_WRAPPERS_NO_PURE_DECLS
#define OceanProject_Plugins_OceanPlugin_Source_OceanPlugin_Classes_InfiniteSystemComponent_h_42_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInfiniteSystemComponent(); \
	friend OCEANPLUGIN_API class UClass* Z_Construct_UClass_UInfiniteSystemComponent(); \
public: \
	DECLARE_CLASS(UInfiniteSystemComponent, USceneComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/OceanPlugin"), NO_API) \
	DECLARE_SERIALIZER(UInfiniteSystemComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define OceanProject_Plugins_OceanPlugin_Source_OceanPlugin_Classes_InfiniteSystemComponent_h_42_INCLASS \
private: \
	static void StaticRegisterNativesUInfiniteSystemComponent(); \
	friend OCEANPLUGIN_API class UClass* Z_Construct_UClass_UInfiniteSystemComponent(); \
public: \
	DECLARE_CLASS(UInfiniteSystemComponent, USceneComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/OceanPlugin"), NO_API) \
	DECLARE_SERIALIZER(UInfiniteSystemComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define OceanProject_Plugins_OceanPlugin_Source_OceanPlugin_Classes_InfiniteSystemComponent_h_42_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInfiniteSystemComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInfiniteSystemComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInfiniteSystemComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInfiniteSystemComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInfiniteSystemComponent(UInfiniteSystemComponent&&); \
	NO_API UInfiniteSystemComponent(const UInfiniteSystemComponent&); \
public:


#define OceanProject_Plugins_OceanPlugin_Source_OceanPlugin_Classes_InfiniteSystemComponent_h_42_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInfiniteSystemComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInfiniteSystemComponent(UInfiniteSystemComponent&&); \
	NO_API UInfiniteSystemComponent(const UInfiniteSystemComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInfiniteSystemComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInfiniteSystemComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInfiniteSystemComponent)


#define OceanProject_Plugins_OceanPlugin_Source_OceanPlugin_Classes_InfiniteSystemComponent_h_42_PRIVATE_PROPERTY_OFFSET
#define OceanProject_Plugins_OceanPlugin_Source_OceanPlugin_Classes_InfiniteSystemComponent_h_39_PROLOG
#define OceanProject_Plugins_OceanPlugin_Source_OceanPlugin_Classes_InfiniteSystemComponent_h_42_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	OceanProject_Plugins_OceanPlugin_Source_OceanPlugin_Classes_InfiniteSystemComponent_h_42_PRIVATE_PROPERTY_OFFSET \
	OceanProject_Plugins_OceanPlugin_Source_OceanPlugin_Classes_InfiniteSystemComponent_h_42_RPC_WRAPPERS \
	OceanProject_Plugins_OceanPlugin_Source_OceanPlugin_Classes_InfiniteSystemComponent_h_42_INCLASS \
	OceanProject_Plugins_OceanPlugin_Source_OceanPlugin_Classes_InfiniteSystemComponent_h_42_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define OceanProject_Plugins_OceanPlugin_Source_OceanPlugin_Classes_InfiniteSystemComponent_h_42_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	OceanProject_Plugins_OceanPlugin_Source_OceanPlugin_Classes_InfiniteSystemComponent_h_42_PRIVATE_PROPERTY_OFFSET \
	OceanProject_Plugins_OceanPlugin_Source_OceanPlugin_Classes_InfiniteSystemComponent_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
	OceanProject_Plugins_OceanPlugin_Source_OceanPlugin_Classes_InfiniteSystemComponent_h_42_INCLASS_NO_PURE_DECLS \
	OceanProject_Plugins_OceanPlugin_Source_OceanPlugin_Classes_InfiniteSystemComponent_h_42_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class InfiniteSystemComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID OceanProject_Plugins_OceanPlugin_Source_OceanPlugin_Classes_InfiniteSystemComponent_h


#define FOREACH_ENUM_EFOLLOWMETHOD(op) \
	op(LookAtLocation) \
	op(FollowCamera) \
	op(FollowPawn) \
	op(Stationary) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
