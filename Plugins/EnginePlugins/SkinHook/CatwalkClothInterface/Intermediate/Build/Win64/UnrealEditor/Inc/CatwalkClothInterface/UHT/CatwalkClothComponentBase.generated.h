// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CatwalkClothComponentBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCatwalkClothCollisionAsset;
class USkinnedMeshComponent;
#ifdef CATWALKCLOTHINTERFACE_CatwalkClothComponentBase_generated_h
#error "CatwalkClothComponentBase.generated.h already included, missing '#pragma once' in CatwalkClothComponentBase.h"
#endif
#define CATWALKCLOTHINTERFACE_CatwalkClothComponentBase_generated_h

#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_SkinHook_CatwalkClothInterface_Source_CatwalkClothInterface_Public_CatwalkClothComponentBase_h_14_SPARSE_DATA
#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_SkinHook_CatwalkClothInterface_Source_CatwalkClothInterface_Public_CatwalkClothComponentBase_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetAttachmentCollision); \
	DECLARE_FUNCTION(execGetCollisionOverride); \
	DECLARE_FUNCTION(execInitializeExternalSimulatonMeshSlots); \
	DECLARE_FUNCTION(execResetClothVertices); \
	DECLARE_FUNCTION(execSetAttachmentCollision); \
	DECLARE_FUNCTION(execSetCollisionOverride);


#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_SkinHook_CatwalkClothInterface_Source_CatwalkClothInterface_Public_CatwalkClothComponentBase_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAttachmentCollision); \
	DECLARE_FUNCTION(execGetCollisionOverride); \
	DECLARE_FUNCTION(execInitializeExternalSimulatonMeshSlots); \
	DECLARE_FUNCTION(execResetClothVertices); \
	DECLARE_FUNCTION(execSetAttachmentCollision); \
	DECLARE_FUNCTION(execSetCollisionOverride);


#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_SkinHook_CatwalkClothInterface_Source_CatwalkClothInterface_Public_CatwalkClothComponentBase_h_14_ACCESSORS
#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_SkinHook_CatwalkClothInterface_Source_CatwalkClothInterface_Public_CatwalkClothComponentBase_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCatwalkClothComponentBase(); \
	friend struct Z_Construct_UClass_UCatwalkClothComponentBase_Statics; \
public: \
	DECLARE_CLASS(UCatwalkClothComponentBase, USceneComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/CatwalkClothInterface"), NO_API) \
	DECLARE_SERIALIZER(UCatwalkClothComponentBase)


#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_SkinHook_CatwalkClothInterface_Source_CatwalkClothInterface_Public_CatwalkClothComponentBase_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUCatwalkClothComponentBase(); \
	friend struct Z_Construct_UClass_UCatwalkClothComponentBase_Statics; \
public: \
	DECLARE_CLASS(UCatwalkClothComponentBase, USceneComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/CatwalkClothInterface"), NO_API) \
	DECLARE_SERIALIZER(UCatwalkClothComponentBase)


#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_SkinHook_CatwalkClothInterface_Source_CatwalkClothInterface_Public_CatwalkClothComponentBase_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCatwalkClothComponentBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCatwalkClothComponentBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCatwalkClothComponentBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCatwalkClothComponentBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCatwalkClothComponentBase(UCatwalkClothComponentBase&&); \
	NO_API UCatwalkClothComponentBase(const UCatwalkClothComponentBase&); \
public: \
	NO_API virtual ~UCatwalkClothComponentBase();


#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_SkinHook_CatwalkClothInterface_Source_CatwalkClothInterface_Public_CatwalkClothComponentBase_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCatwalkClothComponentBase(UCatwalkClothComponentBase&&); \
	NO_API UCatwalkClothComponentBase(const UCatwalkClothComponentBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCatwalkClothComponentBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCatwalkClothComponentBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCatwalkClothComponentBase) \
	NO_API virtual ~UCatwalkClothComponentBase();


#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_SkinHook_CatwalkClothInterface_Source_CatwalkClothInterface_Public_CatwalkClothComponentBase_h_12_PROLOG
#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_SkinHook_CatwalkClothInterface_Source_CatwalkClothInterface_Public_CatwalkClothComponentBase_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_SkinHook_CatwalkClothInterface_Source_CatwalkClothInterface_Public_CatwalkClothComponentBase_h_14_SPARSE_DATA \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_SkinHook_CatwalkClothInterface_Source_CatwalkClothInterface_Public_CatwalkClothComponentBase_h_14_RPC_WRAPPERS \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_SkinHook_CatwalkClothInterface_Source_CatwalkClothInterface_Public_CatwalkClothComponentBase_h_14_ACCESSORS \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_SkinHook_CatwalkClothInterface_Source_CatwalkClothInterface_Public_CatwalkClothComponentBase_h_14_INCLASS \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_SkinHook_CatwalkClothInterface_Source_CatwalkClothInterface_Public_CatwalkClothComponentBase_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_SkinHook_CatwalkClothInterface_Source_CatwalkClothInterface_Public_CatwalkClothComponentBase_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_SkinHook_CatwalkClothInterface_Source_CatwalkClothInterface_Public_CatwalkClothComponentBase_h_14_SPARSE_DATA \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_SkinHook_CatwalkClothInterface_Source_CatwalkClothInterface_Public_CatwalkClothComponentBase_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_SkinHook_CatwalkClothInterface_Source_CatwalkClothInterface_Public_CatwalkClothComponentBase_h_14_ACCESSORS \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_SkinHook_CatwalkClothInterface_Source_CatwalkClothInterface_Public_CatwalkClothComponentBase_h_14_INCLASS_NO_PURE_DECLS \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_SkinHook_CatwalkClothInterface_Source_CatwalkClothInterface_Public_CatwalkClothComponentBase_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CATWALKCLOTHINTERFACE_API UClass* StaticClass<class UCatwalkClothComponentBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_SkinHook_CatwalkClothInterface_Source_CatwalkClothInterface_Public_CatwalkClothComponentBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
