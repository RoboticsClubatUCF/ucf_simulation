// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/OceanPluginPrivatePCH.h"
#include "Classes/Fish/FlockFish.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFlockFish() {}
// Cross Module References
	OCEANPLUGIN_API UFunction* Z_Construct_UFunction_AFlockFish_OnBeginOverlap();
	OCEANPLUGIN_API UClass* Z_Construct_UClass_AFlockFish();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	OCEANPLUGIN_API UFunction* Z_Construct_UFunction_AFlockFish_OnEndOverlap();
	OCEANPLUGIN_API UClass* Z_Construct_UClass_AFlockFish_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_OceanPlugin();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
// End Cross Module References
	void AFlockFish::StaticRegisterNativesAFlockFish()
	{
		UClass* Class = AFlockFish::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "OnBeginOverlap", (Native)&AFlockFish::execOnBeginOverlap },
			{ "OnEndOverlap", (Native)&AFlockFish::execOnEndOverlap },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_AFlockFish_OnBeginOverlap()
	{
		struct FlockFish_eventOnBeginOverlap_Parms
		{
			UPrimitiveComponent* activatedComp;
			AActor* otherActor;
			UPrimitiveComponent* otherComp;
			int32 otherBodyIndex;
			bool bFromSweep;
			FHitResult sweepResult;
		};
		UObject* Outer = Z_Construct_UClass_AFlockFish();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("OnBeginOverlap"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00480401, 65535, sizeof(FlockFish_eventOnBeginOverlap_Parms));
			UProperty* NewProp_sweepResult = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("sweepResult"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(sweepResult, FlockFish_eventOnBeginOverlap_Parms), 0x0010008008000182, Z_Construct_UScriptStruct_FHitResult());
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bFromSweep, FlockFish_eventOnBeginOverlap_Parms);
			UProperty* NewProp_bFromSweep = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bFromSweep"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bFromSweep, FlockFish_eventOnBeginOverlap_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(bFromSweep, FlockFish_eventOnBeginOverlap_Parms), sizeof(bool), true);
			UProperty* NewProp_otherBodyIndex = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("otherBodyIndex"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(otherBodyIndex, FlockFish_eventOnBeginOverlap_Parms), 0x0010000000000080);
			UProperty* NewProp_otherComp = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("otherComp"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(otherComp, FlockFish_eventOnBeginOverlap_Parms), 0x0010000000080080, Z_Construct_UClass_UPrimitiveComponent_NoRegister());
			UProperty* NewProp_otherActor = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("otherActor"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(otherActor, FlockFish_eventOnBeginOverlap_Parms), 0x0010000000000080, Z_Construct_UClass_AActor_NoRegister());
			UProperty* NewProp_activatedComp = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("activatedComp"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(activatedComp, FlockFish_eventOnBeginOverlap_Parms), 0x0010000000080080, Z_Construct_UClass_UPrimitiveComponent_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/Fish/FlockFish.h"));
			MetaData->SetValue(NewProp_sweepResult, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_otherComp, TEXT("EditInline"), TEXT("true"));
			MetaData->SetValue(NewProp_activatedComp, TEXT("EditInline"), TEXT("true"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AFlockFish_OnEndOverlap()
	{
		struct FlockFish_eventOnEndOverlap_Parms
		{
			UPrimitiveComponent* activatedComp;
			AActor* otherActor;
			UPrimitiveComponent* otherComp;
			int32 otherBodyIndex;
		};
		UObject* Outer = Z_Construct_UClass_AFlockFish();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("OnEndOverlap"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00080401, 65535, sizeof(FlockFish_eventOnEndOverlap_Parms));
			UProperty* NewProp_otherBodyIndex = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("otherBodyIndex"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(otherBodyIndex, FlockFish_eventOnEndOverlap_Parms), 0x0010000000000080);
			UProperty* NewProp_otherComp = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("otherComp"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(otherComp, FlockFish_eventOnEndOverlap_Parms), 0x0010000000080080, Z_Construct_UClass_UPrimitiveComponent_NoRegister());
			UProperty* NewProp_otherActor = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("otherActor"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(otherActor, FlockFish_eventOnEndOverlap_Parms), 0x0010000000000080, Z_Construct_UClass_AActor_NoRegister());
			UProperty* NewProp_activatedComp = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("activatedComp"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(activatedComp, FlockFish_eventOnEndOverlap_Parms), 0x0010000000080080, Z_Construct_UClass_UPrimitiveComponent_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/Fish/FlockFish.h"));
			MetaData->SetValue(NewProp_otherComp, TEXT("EditInline"), TEXT("true"));
			MetaData->SetValue(NewProp_activatedComp, TEXT("EditInline"), TEXT("true"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFlockFish_NoRegister()
	{
		return AFlockFish::StaticClass();
	}
	UClass* Z_Construct_UClass_AFlockFish()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_APawn();
			Z_Construct_UPackage__Script_OceanPlugin();
			OuterClass = AFlockFish::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20800080u;

				OuterClass->LinkChild(Z_Construct_UFunction_AFlockFish_OnBeginOverlap());
				OuterClass->LinkChild(Z_Construct_UFunction_AFlockFish_OnEndOverlap());

				CPP_BOOL_PROPERTY_BITMASK_STRUCT(DebugMode, AFlockFish);
				UProperty* NewProp_DebugMode = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("DebugMode"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(DebugMode, AFlockFish), 0x0010000000000005, CPP_BOOL_PROPERTY_BITMASK(DebugMode, AFlockFish), sizeof(bool), true);
				UProperty* NewProp_UpdateEveryTick = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("UpdateEveryTick"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(UpdateEveryTick, AFlockFish), 0x0010000000000005);
				UProperty* NewProp_NumNeighborsToEvaluate = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("NumNeighborsToEvaluate"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(NumNeighborsToEvaluate, AFlockFish), 0x0010000000000005);
				UProperty* NewProp_CustomZSeekMax = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CustomZSeekMax"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(CustomZSeekMax, AFlockFish), 0x0010000000000005);
				UProperty* NewProp_CustomZSeekMin = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CustomZSeekMin"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(CustomZSeekMin, AFlockFish), 0x0010000000000005);
				UProperty* NewProp_underwaterMax = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("underwaterMax"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(underwaterMax, AFlockFish), 0x0010000000000005, Z_Construct_UScriptStruct_FVector());
				UProperty* NewProp_underwaterMin = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("underwaterMin"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(underwaterMin, AFlockFish), 0x0010000000000005, Z_Construct_UScriptStruct_FVector());
				UProperty* NewProp_playerType = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("playerType"), RF_Public|RF_Transient|RF_MarkAsNative) UClassProperty(CPP_PROPERTY_BASE(playerType, AFlockFish), 0x0010000000000005, Z_Construct_UClass_UObject_NoRegister(), Z_Construct_UClass_UClass());
				UProperty* NewProp_AvoidanceForce = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("AvoidanceForce"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(AvoidanceForce, AFlockFish), 0x0010000000000005);
				UProperty* NewProp_AvoidForceMultiplier = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("AvoidForceMultiplier"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(AvoidForceMultiplier, AFlockFish), 0x0010000000000005);
				UProperty* NewProp_SeekDecelerationMultiplier = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("SeekDecelerationMultiplier"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(SeekDecelerationMultiplier, AFlockFish), 0x0010000000000005);
				UProperty* NewProp_ChaseAccelerationMultiplier = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ChaseAccelerationMultiplier"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(ChaseAccelerationMultiplier, AFlockFish), 0x0010000000000005);
				UProperty* NewProp_FleeAccelerationMultiplier = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("FleeAccelerationMultiplier"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(FleeAccelerationMultiplier, AFlockFish), 0x0010000000000005);
				UProperty* NewProp_FleeDistanceMultiplier = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("FleeDistanceMultiplier"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(FleeDistanceMultiplier, AFlockFish), 0x0010000000000005);
				UProperty* NewProp_SeperationDistanceMultiplier = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("SeperationDistanceMultiplier"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(SeperationDistanceMultiplier, AFlockFish), 0x0010000000000005);
				UProperty* NewProp_distBehindSpeedUpRange = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("distBehindSpeedUpRange"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(distBehindSpeedUpRange, AFlockFish), 0x0010000000000005);
				UProperty* NewProp_hungerResetTime = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("hungerResetTime"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(hungerResetTime, AFlockFish), 0x0010000000000005);
				UProperty* NewProp_turnFrequency = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("turnFrequency"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(turnFrequency, AFlockFish), 0x0010000000000005);
				UProperty* NewProp_turnSpeed = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("turnSpeed"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(turnSpeed, AFlockFish), 0x0010000000000005);
				UProperty* NewProp_maxSpeed = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("maxSpeed"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(maxSpeed, AFlockFish), 0x0010000000000005);
				UProperty* NewProp_speed = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("speed"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(speed, AFlockFish), 0x0010000000000005);
				UProperty* NewProp_followDist = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("followDist"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(followDist, AFlockFish), 0x0010000000000005);
				UProperty* NewProp_neighborType = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("neighborType"), RF_Public|RF_Transient|RF_MarkAsNative) UClassProperty(CPP_PROPERTY_BASE(neighborType, AFlockFish), 0x0010000000000005, Z_Construct_UClass_UObject_NoRegister(), Z_Construct_UClass_UClass());
				UProperty* NewProp_preyTypes = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("preyTypes"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(preyTypes, AFlockFish), 0x0010000000000005);
				UProperty* NewProp_preyTypes_Inner = new(EC_InternalUseOnlyConstructor, NewProp_preyTypes, TEXT("preyTypes"), RF_Public|RF_Transient|RF_MarkAsNative) UClassProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UClass_UObject_NoRegister(), Z_Construct_UClass_UClass());
				UProperty* NewProp_enemyTypes = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("enemyTypes"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(enemyTypes, AFlockFish), 0x0010000000000005);
				UProperty* NewProp_enemyTypes_Inner = new(EC_InternalUseOnlyConstructor, NewProp_enemyTypes, TEXT("enemyTypes"), RF_Public|RF_Transient|RF_MarkAsNative) UClassProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UClass_UObject_NoRegister(), Z_Construct_UClass_UClass());
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(isLeader, AFlockFish);
				UProperty* NewProp_isLeader = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("isLeader"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(isLeader, AFlockFish), 0x0010000000000005, CPP_BOOL_PROPERTY_BITMASK(isLeader, AFlockFish), sizeof(bool), true);
				UProperty* NewProp_FishInteractionSphere = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("FishInteractionSphere"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(FishInteractionSphere, AFlockFish), 0x00400000000a001d, Z_Construct_UClass_USphereComponent_NoRegister());
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AFlockFish_OnBeginOverlap(), "OnBeginOverlap"); // 323699005
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AFlockFish_OnEndOverlap(), "OnEndOverlap"); // 2154547379
				static TCppClassTypeInfo<TCppClassTypeTraits<AFlockFish> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Navigation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("Fish/FlockFish.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Classes/Fish/FlockFish.h"));
				MetaData->SetValue(OuterClass, TEXT("ObjectInitializerConstructorDeclared"), TEXT(""));
				MetaData->SetValue(NewProp_DebugMode, TEXT("Category"), TEXT("TESTING"));
				MetaData->SetValue(NewProp_DebugMode, TEXT("ModuleRelativePath"), TEXT("Classes/Fish/FlockFish.h"));
				MetaData->SetValue(NewProp_DebugMode, TEXT("ToolTip"), TEXT("Run fish in debug mode"));
				MetaData->SetValue(NewProp_UpdateEveryTick, TEXT("Category"), TEXT("Optimization"));
				MetaData->SetValue(NewProp_UpdateEveryTick, TEXT("ModuleRelativePath"), TEXT("Classes/Fish/FlockFish.h"));
				MetaData->SetValue(NewProp_UpdateEveryTick, TEXT("ToolTip"), TEXT("When set to 0, update every tick, otherwise update after specified time"));
				MetaData->SetValue(NewProp_NumNeighborsToEvaluate, TEXT("Category"), TEXT("Optimization"));
				MetaData->SetValue(NewProp_NumNeighborsToEvaluate, TEXT("ModuleRelativePath"), TEXT("Classes/Fish/FlockFish.h"));
				MetaData->SetValue(NewProp_NumNeighborsToEvaluate, TEXT("ToolTip"), TEXT("Max number of neighbors to evaluate on a Tick (0 for all neighbors)"));
				MetaData->SetValue(NewProp_CustomZSeekMax, TEXT("Category"), TEXT("Environment Variables"));
				MetaData->SetValue(NewProp_CustomZSeekMax, TEXT("ModuleRelativePath"), TEXT("Classes/Fish/FlockFish.h"));
				MetaData->SetValue(NewProp_CustomZSeekMax, TEXT("ToolTip"), TEXT("Custom Z range for targeting (NULL will use full range of min/max)"));
				MetaData->SetValue(NewProp_CustomZSeekMin, TEXT("Category"), TEXT("Environment Variables"));
				MetaData->SetValue(NewProp_CustomZSeekMin, TEXT("ModuleRelativePath"), TEXT("Classes/Fish/FlockFish.h"));
				MetaData->SetValue(NewProp_CustomZSeekMin, TEXT("ToolTip"), TEXT("Custom Z range for targeting (NULL will use full range of min/max)"));
				MetaData->SetValue(NewProp_underwaterMax, TEXT("Category"), TEXT("Environment Variables"));
				MetaData->SetValue(NewProp_underwaterMax, TEXT("ModuleRelativePath"), TEXT("Classes/Fish/FlockFish.h"));
				MetaData->SetValue(NewProp_underwaterMax, TEXT("ToolTip"), TEXT("volume that is considered underwater"));
				MetaData->SetValue(NewProp_underwaterMin, TEXT("Category"), TEXT("Environment Variables"));
				MetaData->SetValue(NewProp_underwaterMin, TEXT("ModuleRelativePath"), TEXT("Classes/Fish/FlockFish.h"));
				MetaData->SetValue(NewProp_underwaterMin, TEXT("ToolTip"), TEXT("volume that is considered underwater"));
				MetaData->SetValue(NewProp_playerType, TEXT("Category"), TEXT("Environment Variables"));
				MetaData->SetValue(NewProp_playerType, TEXT("ModuleRelativePath"), TEXT("Classes/Fish/FlockFish.h"));
				MetaData->SetValue(NewProp_playerType, TEXT("ToolTip"), TEXT("Player the fish will avoid"));
				MetaData->SetValue(NewProp_AvoidanceForce, TEXT("Category"), TEXT("Advanced Settings"));
				MetaData->SetValue(NewProp_AvoidanceForce, TEXT("ModuleRelativePath"), TEXT("Classes/Fish/FlockFish.h"));
				MetaData->SetValue(NewProp_AvoidanceForce, TEXT("ToolTip"), TEXT("Avoidance force"));
				MetaData->SetValue(NewProp_AvoidForceMultiplier, TEXT("Category"), TEXT("Advanced Settings"));
				MetaData->SetValue(NewProp_AvoidForceMultiplier, TEXT("ModuleRelativePath"), TEXT("Classes/Fish/FlockFish.h"));
				MetaData->SetValue(NewProp_AvoidForceMultiplier, TEXT("ToolTip"), TEXT("Avoid Distance Multiplier"));
				MetaData->SetValue(NewProp_SeekDecelerationMultiplier, TEXT("Category"), TEXT("Advanced Settings"));
				MetaData->SetValue(NewProp_SeekDecelerationMultiplier, TEXT("ModuleRelativePath"), TEXT("Classes/Fish/FlockFish.h"));
				MetaData->SetValue(NewProp_SeekDecelerationMultiplier, TEXT("ToolTip"), TEXT("Multiplies with delta time since last tick when lerping to regular speed (While Seeking)"));
				MetaData->SetValue(NewProp_ChaseAccelerationMultiplier, TEXT("Category"), TEXT("Advanced Settings"));
				MetaData->SetValue(NewProp_ChaseAccelerationMultiplier, TEXT("ModuleRelativePath"), TEXT("Classes/Fish/FlockFish.h"));
				MetaData->SetValue(NewProp_ChaseAccelerationMultiplier, TEXT("ToolTip"), TEXT("Multiplies with delta time since last tick when lerping to max speed (While Chasing)"));
				MetaData->SetValue(NewProp_FleeAccelerationMultiplier, TEXT("Category"), TEXT("Advanced Settings"));
				MetaData->SetValue(NewProp_FleeAccelerationMultiplier, TEXT("ModuleRelativePath"), TEXT("Classes/Fish/FlockFish.h"));
				MetaData->SetValue(NewProp_FleeAccelerationMultiplier, TEXT("ToolTip"), TEXT("Multiplies with delta time since last tick when lerping to max speed (While Fleeing)"));
				MetaData->SetValue(NewProp_FleeDistanceMultiplier, TEXT("Category"), TEXT("Advanced Settings"));
				MetaData->SetValue(NewProp_FleeDistanceMultiplier, TEXT("ModuleRelativePath"), TEXT("Classes/Fish/FlockFish.h"));
				MetaData->SetValue(NewProp_FleeDistanceMultiplier, TEXT("ToolTip"), TEXT("Multiplies With Radius of Fish Interaction Sphere for Flee Distance"));
				MetaData->SetValue(NewProp_SeperationDistanceMultiplier, TEXT("Category"), TEXT("Advanced Settings"));
				MetaData->SetValue(NewProp_SeperationDistanceMultiplier, TEXT("ModuleRelativePath"), TEXT("Classes/Fish/FlockFish.h"));
				MetaData->SetValue(NewProp_SeperationDistanceMultiplier, TEXT("ToolTip"), TEXT("Multiplies With Radius of Fish Interaction Sphere for neighbor seperation"));
				MetaData->SetValue(NewProp_distBehindSpeedUpRange, TEXT("Category"), TEXT("Fish Attributes"));
				MetaData->SetValue(NewProp_distBehindSpeedUpRange, TEXT("ModuleRelativePath"), TEXT("Classes/Fish/FlockFish.h"));
				MetaData->SetValue(NewProp_distBehindSpeedUpRange, TEXT("ToolTip"), TEXT("Go faster when fish is this distance behind leader"));
				MetaData->SetValue(NewProp_hungerResetTime, TEXT("Category"), TEXT("Fish Attributes"));
				MetaData->SetValue(NewProp_hungerResetTime, TEXT("ModuleRelativePath"), TEXT("Classes/Fish/FlockFish.h"));
				MetaData->SetValue(NewProp_hungerResetTime, TEXT("ToolTip"), TEXT("time after eating until it is hungry again"));
				MetaData->SetValue(NewProp_turnFrequency, TEXT("Category"), TEXT("Fish Attributes"));
				MetaData->SetValue(NewProp_turnFrequency, TEXT("ModuleRelativePath"), TEXT("Classes/Fish/FlockFish.h"));
				MetaData->SetValue(NewProp_turnFrequency, TEXT("ToolTip"), TEXT("Frequency of turning ( turn every \"turnFrequency\" seconds)"));
				MetaData->SetValue(NewProp_turnSpeed, TEXT("Category"), TEXT("Fish Attributes"));
				MetaData->SetValue(NewProp_turnSpeed, TEXT("ModuleRelativePath"), TEXT("Classes/Fish/FlockFish.h"));
				MetaData->SetValue(NewProp_turnSpeed, TEXT("ToolTip"), TEXT("Speed at which the fish turns (Try to have predators be slightly faster)"));
				MetaData->SetValue(NewProp_maxSpeed, TEXT("Category"), TEXT("Fish Attributes"));
				MetaData->SetValue(NewProp_maxSpeed, TEXT("ModuleRelativePath"), TEXT("Classes/Fish/FlockFish.h"));
				MetaData->SetValue(NewProp_maxSpeed, TEXT("ToolTip"), TEXT("Max Speed"));
				MetaData->SetValue(NewProp_speed, TEXT("Category"), TEXT("Fish Attributes"));
				MetaData->SetValue(NewProp_speed, TEXT("ModuleRelativePath"), TEXT("Classes/Fish/FlockFish.h"));
				MetaData->SetValue(NewProp_speed, TEXT("ToolTip"), TEXT("Defualt Speed"));
				MetaData->SetValue(NewProp_followDist, TEXT("Category"), TEXT("Fish Attributes"));
				MetaData->SetValue(NewProp_followDist, TEXT("ModuleRelativePath"), TEXT("Classes/Fish/FlockFish.h"));
				MetaData->SetValue(NewProp_followDist, TEXT("ToolTip"), TEXT("Distance to that fish will try to remain behind leader"));
				MetaData->SetValue(NewProp_neighborType, TEXT("Category"), TEXT("Fish Attributes"));
				MetaData->SetValue(NewProp_neighborType, TEXT("ModuleRelativePath"), TEXT("Classes/Fish/FlockFish.h"));
				MetaData->SetValue(NewProp_neighborType, TEXT("ToolTip"), TEXT("Neighbor type of the fish ( typically itself, but needed for code atm)"));
				MetaData->SetValue(NewProp_preyTypes, TEXT("Category"), TEXT("Fish Attributes"));
				MetaData->SetValue(NewProp_preyTypes, TEXT("ModuleRelativePath"), TEXT("Classes/Fish/FlockFish.h"));
				MetaData->SetValue(NewProp_preyTypes, TEXT("ToolTip"), TEXT("Prey that the fish will attack"));
				MetaData->SetValue(NewProp_enemyTypes, TEXT("Category"), TEXT("Fish Attributes"));
				MetaData->SetValue(NewProp_enemyTypes, TEXT("ModuleRelativePath"), TEXT("Classes/Fish/FlockFish.h"));
				MetaData->SetValue(NewProp_enemyTypes, TEXT("ToolTip"), TEXT("Enemies that fish will flee from"));
				MetaData->SetValue(NewProp_isLeader, TEXT("Category"), TEXT("Fish Attributes"));
				MetaData->SetValue(NewProp_isLeader, TEXT("ModuleRelativePath"), TEXT("Classes/Fish/FlockFish.h"));
				MetaData->SetValue(NewProp_isLeader, TEXT("ToolTip"), TEXT("Is this fish a leader"));
				MetaData->SetValue(NewProp_FishInteractionSphere, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_FishInteractionSphere, TEXT("Category"), TEXT("Interaction"));
				MetaData->SetValue(NewProp_FishInteractionSphere, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_FishInteractionSphere, TEXT("ModuleRelativePath"), TEXT("Classes/Fish/FlockFish.h"));
				MetaData->SetValue(NewProp_FishInteractionSphere, TEXT("ToolTip"), TEXT("Fish interaction sphere"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFlockFish, 1794060429);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFlockFish(Z_Construct_UClass_AFlockFish, &AFlockFish::StaticClass, TEXT("/Script/OceanPlugin"), TEXT("AFlockFish"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFlockFish);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
