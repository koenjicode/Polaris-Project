#include "GFurAsset.h"

UGFurAsset::UGFurAsset() {
    this->SkeletalGrowMesh = NULL;
    this->StaticGrowMesh = NULL;
    this->Material = NULL;
    this->FurSplines = NULL;
    this->LayerCount = 32;
    this->MinScreenSize = 0.00f;
    this->LODFromParent = false;
    this->ShellBias = 1.00f;
    this->FurLength = 1.00f;
    this->MinFurLength = 0.00f;
    this->RemoveFacesWithoutSplines = false;
    this->PhysicsEnabled = true;
    this->ForceDistribution = 2.00f;
    this->Stiffness = 5.00f;
    this->Damping = 5.00f;
    this->MaxForce = 100.00f;
    this->MaxForceTorqueFactor = 0.75f;
    this->ReferenceHairBias = 0.80f;
    this->HairLengthForceUniformity = 0.75f;
    this->MaxPhysicsOffsetLength = 9223372036854775808.00f;
    this->NoiseStrength = 0.00f;
    this->DisableMorphTargets = false;
    this->StreamingDistanceMultiplier = 1.00f;
    this->bVisible = true;
    this->bHiddenInGame = false;
    this->bUseAttachParentBound = false;
    this->bVisibleInReflectionCaptures = true;
    this->bVisibleInRealTimeSkyCaptures = true;
    this->bVisibleInRayTracing = true;
    this->bRenderInMainPass = true;
    this->bRenderInDepthPass = true;
    this->bReceivesDecals = true;
    this->bOwnerNoSee = false;
    this->bOnlyOwnerSee = false;
    this->bTreatAsBackgroundForOcclusion = false;
    this->bUseAsOccluder = true;
    this->bRenderCustomDepth = false;
    this->CustomDepthStencilWriteMask = ERendererStencilMask::ERSM_Default;
    this->CustomDepthStencilValue = 0;
    this->TranslucencySortPriority = 0;
    this->LpvBiasMultiplier = 1.00f;
    this->BoundsScale = 1.00f;
    this->CastShadow = false;
    this->IndirectLightingCacheQuality = ILCQ_Off;
    this->LightmapType = ELightmapType::Default;
    this->bAffectDynamicIndirectLighting = true;
    this->bAffectDistanceFieldLighting = true;
    this->bCastDynamicShadow = true;
    this->bCastStaticShadow = true;
    this->bCastVolumetricTranslucentShadow = false;
    this->bCastContactShadow = true;
    this->bSelfShadowOnly = false;
    this->bCastFarShadow = false;
    this->bCastInsetShadow = false;
    this->bCastCinematicShadow = false;
    this->bCastHiddenShadow = false;
    this->bCastShadowAsTwoSided = false;
    this->bLightAttachmentsAsGroup = false;
    this->bExcludeFromLightAttachmentGroup = false;
    this->bSingleSampleShadowFromStationaryLights = false;
}

void UGFurAsset::SetRenderingAndLightingParams(UPrimitiveComponent* PrimitiveComponent) {
}

void UGFurAsset::SetGFurItems(const UGFurAsset* GFurAsset, UPrimitiveComponent* GFurComponent, bool isExtra) {
}


