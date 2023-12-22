#pragma once
#include "CoreMinimal.h"
#include "EDramaTrackMotHeadCommandSystem.h"
#include "EPolarisBodyTransformState.h"
#include "EPolarisTracePartsId.h"
#include "PolarisDramaTrackActor.h"
#include "PolarisDramaTrackSystemActor.generated.h"

UCLASS(Blueprintable)
class POLARIS_API APolarisDramaTrackSystemActor : public APolarisDramaTrackActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float GameCameraRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float WindTimeDilation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float StageWindSpeedMul;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float StageWindWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    int32 Blink;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    int32 Blink2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    int32 ForceNextCutResetCloth;
    
    APolarisDramaTrackSystemActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetWorkParamI(int32 player_index, int32 Index, int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void SetWeaponMeshVisible(int32 player_index, int32 Type, bool IsOn, bool isForce);
    
    UFUNCTION(BlueprintCallable)
    void SetStopCloth(int32 player_inde, bool IsStop);
    
    UFUNCTION(BlueprintCallable)
    void SetDynamicBoneNumResetSteps(int32 player_index, int32 Num);
    
    UFUNCTION(BlueprintCallable)
    void SetDynamicBoneGoalStrengthScale(int32 player_index, float Scale);
    
    UFUNCTION(BlueprintCallable)
    void SetClothNumStepsToBlendFromBindPose(int32 player_index, int32 Num);
    
    UFUNCTION(BlueprintCallable)
    void SetBodyTransform(int32 player_index, EPolarisBodyTransformState State, bool isForce);
    
    UFUNCTION(BlueprintCallable)
    void ResetCloth(int32 player_index);
    
    UFUNCTION(BlueprintCallable)
    void RequestMotHeadSystemCommand(EDramaTrackMotHeadCommandSystem Command);
    
    UFUNCTION(BlueprintCallable)
    void ChangeDynamicBoneParameters(int32 player_index, FName VariationName);
    
    UFUNCTION(BlueprintCallable)
    void ChangeCollisionParameters(int32 player_index, FName VariationName);
    
    UFUNCTION(BlueprintCallable)
    void ChangeClothParameters(int32 player_index, FName VariationName);
    
    UFUNCTION(BlueprintCallable)
    void AttachTraceComponent(const EPolarisTracePartsId parts_id, bool isSequence, int32 child_id);
    
};

