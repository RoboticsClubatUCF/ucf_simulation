// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APawn;
#ifdef OCEANPLUGIN_CustomVehicleController_generated_h
#error "CustomVehicleController.generated.h already included, missing '#pragma once' in CustomVehicleController.h"
#endif
#define OCEANPLUGIN_CustomVehicleController_generated_h

<<<<<<< HEAD
<<<<<<< HEAD
#define ucf_simulation_Plugins_OceanPlugin_Source_OceanPlugin_Classes_CustomVehicleController_h_32_RPC_WRAPPERS \
=======
#define OceanProject_Plugins_OceanPlugin_Source_OceanPlugin_Classes_CustomVehicleController_h_32_RPC_WRAPPERS \
>>>>>>> 8b683923a06151c0902a22a410c7caa957971891
=======
#define OceanProject_Plugins_OceanPlugin_Source_OceanPlugin_Classes_CustomVehicleController_h_32_RPC_WRAPPERS \
>>>>>>> 26acfffe57e8a565d1348995aace6e6a76a40061
 \
	DECLARE_FUNCTION(execEnableBuoyancy) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->EnableBuoyancy(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDrawBuoyancyPoints) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->DrawBuoyancyPoints(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetIsDriving) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->GetIsDriving(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execExitVehicle) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ExitVehicle(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEnterVehicle) \
	{ \
		P_GET_OBJECT(APawn,Z_Param_Vehicle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->EnterVehicle(Z_Param_Vehicle); \
		P_NATIVE_END; \
	}


<<<<<<< HEAD
<<<<<<< HEAD
#define ucf_simulation_Plugins_OceanPlugin_Source_OceanPlugin_Classes_CustomVehicleController_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
=======
#define OceanProject_Plugins_OceanPlugin_Source_OceanPlugin_Classes_CustomVehicleController_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
>>>>>>> 8b683923a06151c0902a22a410c7caa957971891
=======
#define OceanProject_Plugins_OceanPlugin_Source_OceanPlugin_Classes_CustomVehicleController_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
>>>>>>> 26acfffe57e8a565d1348995aace6e6a76a40061
 \
	DECLARE_FUNCTION(execEnableBuoyancy) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->EnableBuoyancy(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDrawBuoyancyPoints) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->DrawBuoyancyPoints(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetIsDriving) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->GetIsDriving(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execExitVehicle) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ExitVehicle(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEnterVehicle) \
	{ \
		P_GET_OBJECT(APawn,Z_Param_Vehicle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->EnterVehicle(Z_Param_Vehicle); \
		P_NATIVE_END; \
	}


<<<<<<< HEAD
<<<<<<< HEAD
#define ucf_simulation_Plugins_OceanPlugin_Source_OceanPlugin_Classes_CustomVehicleController_h_32_INCLASS_NO_PURE_DECLS \
=======
#define OceanProject_Plugins_OceanPlugin_Source_OceanPlugin_Classes_CustomVehicleController_h_32_INCLASS_NO_PURE_DECLS \
>>>>>>> 8b683923a06151c0902a22a410c7caa957971891
=======
#define OceanProject_Plugins_OceanPlugin_Source_OceanPlugin_Classes_CustomVehicleController_h_32_INCLASS_NO_PURE_DECLS \
>>>>>>> 26acfffe57e8a565d1348995aace6e6a76a40061
private: \
	static void StaticRegisterNativesACustomVehicleController(); \
	friend OCEANPLUGIN_API class UClass* Z_Construct_UClass_ACustomVehicleController(); \
public: \
	DECLARE_CLASS(ACustomVehicleController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), 0, TEXT("/Script/OceanPlugin"), NO_API) \
	DECLARE_SERIALIZER(ACustomVehicleController) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


<<<<<<< HEAD
<<<<<<< HEAD
#define ucf_simulation_Plugins_OceanPlugin_Source_OceanPlugin_Classes_CustomVehicleController_h_32_INCLASS \
=======
#define OceanProject_Plugins_OceanPlugin_Source_OceanPlugin_Classes_CustomVehicleController_h_32_INCLASS \
>>>>>>> 8b683923a06151c0902a22a410c7caa957971891
=======
#define OceanProject_Plugins_OceanPlugin_Source_OceanPlugin_Classes_CustomVehicleController_h_32_INCLASS \
>>>>>>> 26acfffe57e8a565d1348995aace6e6a76a40061
private: \
	static void StaticRegisterNativesACustomVehicleController(); \
	friend OCEANPLUGIN_API class UClass* Z_Construct_UClass_ACustomVehicleController(); \
public: \
	DECLARE_CLASS(ACustomVehicleController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), 0, TEXT("/Script/OceanPlugin"), NO_API) \
	DECLARE_SERIALIZER(ACustomVehicleController) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


<<<<<<< HEAD
<<<<<<< HEAD
#define ucf_simulation_Plugins_OceanPlugin_Source_OceanPlugin_Classes_CustomVehicleController_h_32_STANDARD_CONSTRUCTORS \
=======
#define OceanProject_Plugins_OceanPlugin_Source_OceanPlugin_Classes_CustomVehicleController_h_32_STANDARD_CONSTRUCTORS \
>>>>>>> 8b683923a06151c0902a22a410c7caa957971891
=======
#define OceanProject_Plugins_OceanPlugin_Source_OceanPlugin_Classes_CustomVehicleController_h_32_STANDARD_CONSTRUCTORS \
>>>>>>> 26acfffe57e8a565d1348995aace6e6a76a40061
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACustomVehicleController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACustomVehicleController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACustomVehicleController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACustomVehicleController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACustomVehicleController(ACustomVehicleController&&); \
	NO_API ACustomVehicleController(const ACustomVehicleController&); \
public:


<<<<<<< HEAD
<<<<<<< HEAD
#define ucf_simulation_Plugins_OceanPlugin_Source_OceanPlugin_Classes_CustomVehicleController_h_32_ENHANCED_CONSTRUCTORS \
=======
#define OceanProject_Plugins_OceanPlugin_Source_OceanPlugin_Classes_CustomVehicleController_h_32_ENHANCED_CONSTRUCTORS \
>>>>>>> 8b683923a06151c0902a22a410c7caa957971891
=======
#define OceanProject_Plugins_OceanPlugin_Source_OceanPlugin_Classes_CustomVehicleController_h_32_ENHANCED_CONSTRUCTORS \
>>>>>>> 26acfffe57e8a565d1348995aace6e6a76a40061
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACustomVehicleController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACustomVehicleController(ACustomVehicleController&&); \
	NO_API ACustomVehicleController(const ACustomVehicleController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACustomVehicleController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACustomVehicleController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACustomVehicleController)


<<<<<<< HEAD
<<<<<<< HEAD
#define ucf_simulation_Plugins_OceanPlugin_Source_OceanPlugin_Classes_CustomVehicleController_h_32_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PlayerPawn() { return STRUCT_OFFSET(ACustomVehicleController, PlayerPawn); }


#define ucf_simulation_Plugins_OceanPlugin_Source_OceanPlugin_Classes_CustomVehicleController_h_29_PROLOG
#define ucf_simulation_Plugins_OceanPlugin_Source_OceanPlugin_Classes_CustomVehicleController_h_32_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ucf_simulation_Plugins_OceanPlugin_Source_OceanPlugin_Classes_CustomVehicleController_h_32_PRIVATE_PROPERTY_OFFSET \
	ucf_simulation_Plugins_OceanPlugin_Source_OceanPlugin_Classes_CustomVehicleController_h_32_RPC_WRAPPERS \
	ucf_simulation_Plugins_OceanPlugin_Source_OceanPlugin_Classes_CustomVehicleController_h_32_INCLASS \
	ucf_simulation_Plugins_OceanPlugin_Source_OceanPlugin_Classes_CustomVehicleController_h_32_STANDARD_CONSTRUCTORS \
=======
=======
>>>>>>> 26acfffe57e8a565d1348995aace6e6a76a40061
#define OceanProject_Plugins_OceanPlugin_Source_OceanPlugin_Classes_CustomVehicleController_h_32_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PlayerPawn() { return STRUCT_OFFSET(ACustomVehicleController, PlayerPawn); }


#define OceanProject_Plugins_OceanPlugin_Source_OceanPlugin_Classes_CustomVehicleController_h_29_PROLOG
#define OceanProject_Plugins_OceanPlugin_Source_OceanPlugin_Classes_CustomVehicleController_h_32_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	OceanProject_Plugins_OceanPlugin_Source_OceanPlugin_Classes_CustomVehicleController_h_32_PRIVATE_PROPERTY_OFFSET \
	OceanProject_Plugins_OceanPlugin_Source_OceanPlugin_Classes_CustomVehicleController_h_32_RPC_WRAPPERS \
	OceanProject_Plugins_OceanPlugin_Source_OceanPlugin_Classes_CustomVehicleController_h_32_INCLASS \
	OceanProject_Plugins_OceanPlugin_Source_OceanPlugin_Classes_CustomVehicleController_h_32_STANDARD_CONSTRUCTORS \
<<<<<<< HEAD
>>>>>>> 8b683923a06151c0902a22a410c7caa957971891
=======
>>>>>>> 26acfffe57e8a565d1348995aace6e6a76a40061
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


<<<<<<< HEAD
<<<<<<< HEAD
#define ucf_simulation_Plugins_OceanPlugin_Source_OceanPlugin_Classes_CustomVehicleController_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ucf_simulation_Plugins_OceanPlugin_Source_OceanPlugin_Classes_CustomVehicleController_h_32_PRIVATE_PROPERTY_OFFSET \
	ucf_simulation_Plugins_OceanPlugin_Source_OceanPlugin_Classes_CustomVehicleController_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	ucf_simulation_Plugins_OceanPlugin_Source_OceanPlugin_Classes_CustomVehicleController_h_32_INCLASS_NO_PURE_DECLS \
	ucf_simulation_Plugins_OceanPlugin_Source_OceanPlugin_Classes_CustomVehicleController_h_32_ENHANCED_CONSTRUCTORS \
=======
=======
>>>>>>> 26acfffe57e8a565d1348995aace6e6a76a40061
#define OceanProject_Plugins_OceanPlugin_Source_OceanPlugin_Classes_CustomVehicleController_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	OceanProject_Plugins_OceanPlugin_Source_OceanPlugin_Classes_CustomVehicleController_h_32_PRIVATE_PROPERTY_OFFSET \
	OceanProject_Plugins_OceanPlugin_Source_OceanPlugin_Classes_CustomVehicleController_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	OceanProject_Plugins_OceanPlugin_Source_OceanPlugin_Classes_CustomVehicleController_h_32_INCLASS_NO_PURE_DECLS \
	OceanProject_Plugins_OceanPlugin_Source_OceanPlugin_Classes_CustomVehicleController_h_32_ENHANCED_CONSTRUCTORS \
<<<<<<< HEAD
>>>>>>> 8b683923a06151c0902a22a410c7caa957971891
=======
>>>>>>> 26acfffe57e8a565d1348995aace6e6a76a40061
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class CustomVehicleController."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
<<<<<<< HEAD
<<<<<<< HEAD
#define CURRENT_FILE_ID ucf_simulation_Plugins_OceanPlugin_Source_OceanPlugin_Classes_CustomVehicleController_h
=======
#define CURRENT_FILE_ID OceanProject_Plugins_OceanPlugin_Source_OceanPlugin_Classes_CustomVehicleController_h
>>>>>>> 8b683923a06151c0902a22a410c7caa957971891
=======
#define CURRENT_FILE_ID OceanProject_Plugins_OceanPlugin_Source_OceanPlugin_Classes_CustomVehicleController_h
>>>>>>> 26acfffe57e8a565d1348995aace6e6a76a40061


PRAGMA_ENABLE_DEPRECATION_WARNINGS
