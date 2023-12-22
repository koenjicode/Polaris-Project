#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "PolarisStageForcusCameraSoftRef.h"
#include "Templates/SubclassOf.h"
#include "PolarisDramaManager.generated.h"

class APolarisDramaActor;
class APolarisDramaLiveLinkCameraActor;
class APolarisWindDirectionalSource;
class ULevelSequence;

UCLASS(Blueprintable)
class POLARIS_API APolarisDramaManager : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<ULevelSequence>> m_battle_start_common_camera_asset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, TSoftObjectPtr<ULevelSequence>> m_battle_start_exclusive_camera_asset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPolarisStageForcusCameraSoftRef> m_stage_forcus_common_asset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ULevelSequence*> m_battle_start_common_camera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ULevelSequence*> m_stage_forcus_common_camera_1p;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ULevelSequence*> m_stage_forcus_common_camera_2p;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<APolarisWindDirectionalSource*> m_stage_wind_list;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<APolarisDramaActor> DramaActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<APolarisDramaLiveLinkCameraActor> PolarisDramaLiveLinkCameraClass;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform HeaderCameraTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HeaderCameraFOV;
    
    APolarisDramaManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ResetDramaParameterPostProc();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayPostProc(int32 DramaType);
    
};

