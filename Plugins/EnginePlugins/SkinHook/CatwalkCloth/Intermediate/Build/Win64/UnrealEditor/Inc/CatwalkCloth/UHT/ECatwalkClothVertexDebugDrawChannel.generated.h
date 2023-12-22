// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ECatwalkClothVertexDebugDrawChannel.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CATWALKCLOTH_ECatwalkClothVertexDebugDrawChannel_generated_h
#error "ECatwalkClothVertexDebugDrawChannel.generated.h already included, missing '#pragma once' in ECatwalkClothVertexDebugDrawChannel.h"
#endif
#define CATWALKCLOTH_ECatwalkClothVertexDebugDrawChannel_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_SkinHook_CatwalkCloth_Source_CatwalkCloth_Public_ECatwalkClothVertexDebugDrawChannel_h


#define FOREACH_ENUM_ECATWALKCLOTHVERTEXDEBUGDRAWCHANNEL(op) \
	op(ECatwalkClothVertexDebugDrawChannel::Collision) \
	op(ECatwalkClothVertexDebugDrawChannel::MaxDistance) \
	op(ECatwalkClothVertexDebugDrawChannel::BackstopLimit) \
	op(ECatwalkClothVertexDebugDrawChannel::FrontstopLimit) \
	op(ECatwalkClothVertexDebugDrawChannel::SelfCollision) 

enum class ECatwalkClothVertexDebugDrawChannel : uint8;
template<> struct TIsUEnumClass<ECatwalkClothVertexDebugDrawChannel> { enum { Value = true }; };
template<> CATWALKCLOTH_API UEnum* StaticEnum<ECatwalkClothVertexDebugDrawChannel>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
