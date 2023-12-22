#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EDramaTrackBoneId.h"
#include "EDramaTrackCommonEffectId.h"
#include "EDramaTrackEffectSize.h"
#include "EDramaTrackFacialBoneId.h"
#include "EDramaTrackMotHeadCommandEffect.h"
#include "EPolarisTracePartsId.h"
#include "PolarisDramaTrackActor.h"
#include "RequestCharacterEffectNotMotHead.h"
#include "RequestItemId.h"
#include "PolarisDramaTrackEffectActor.generated.h"

class UNiagaraComponent;
class UNiagaraSystem;

UCLASS(Blueprintable)
class POLARIS_API APolarisDramaTrackEffectActor : public APolarisDramaTrackActor {
    GENERATED_BODY()
public:
    APolarisDramaTrackEffectActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ResetStageSmoke();
    
    UFUNCTION(BlueprintCallable)
    void ResetStageParticle();
    
    UFUNCTION(BlueprintCallable)
    void ResetStageEffectAll();
    
    UFUNCTION(BlueprintCallable)
    void RequestMotHeadEffectCommand(EDramaTrackMotHeadCommandEffect Command, int32 player_index, EDramaTrackBoneId bone_id, EDramaTrackCommonEffectId common_effect_id, int32 effect_id, EDramaTrackEffectSize effect_size, EPolarisTracePartsId parts_id, FRequestItemId item_id, int32 frame);
    
    UFUNCTION(BlueprintCallable)
    void RequestLocalOffsetEffect(UNiagaraSystem* niagara_asset, FVector offset_location, FRotator offset_rotation, int32 player_index, int32 effect_id);
    
    UFUNCTION(BlueprintCallable)
    void RequestFacialEffect(EDramaTrackFacialBoneId facial_bone_id, int32 player_index, int32 effect_id);
    
    UFUNCTION(BlueprintCallable)
    void RequestCharacterEffectPlayerIdAite(FRequestCharacterEffectNotMotHead Request);
    
    UFUNCTION(BlueprintCallable)
    void RequestCharacterEffectPlayerId(FRequestCharacterEffectNotMotHead Request);
    
    UFUNCTION(BlueprintCallable)
    UNiagaraComponent* RequestCharacterEffectNotMotHead(FRequestCharacterEffectNotMotHead Request);
    
    UFUNCTION(BlueprintCallable)
    void CancelEffect(int32 player_index, int32 effect_id);
    
    UFUNCTION(BlueprintCallable)
    void CancelCharacterEffectPlayerId(int32 player_id, int32 effect_id);
    
};

