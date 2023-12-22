#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "PolarisSoundData.h"
#include "PolarisSoundDataName.h"
#include "PolarisSoundDataNiagara.h"
#include "PolarisSoundDataStoryBgmCtrlAct.h"
#include "PolarisSoundDataAsset.generated.h"

class UAkAudioBank;
class UAkAudioEvent;

UCLASS(Blueprintable)
class POLARIS_API UPolarisSoundDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioBank* AudioBank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPolarisSoundData> SoundDataBattleSysTone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPolarisSoundData> SoundDataMotionTone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPolarisSoundData> SoundDataVoiceTone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPolarisSoundData> SoundDataItemTone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPolarisSoundDataName> SoundDataDramaTone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPolarisSoundDataNiagara> SoundDataNiagara;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* SoundDataStoryBgmCore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* SoundDataCharacterEpisodeBgmCore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* SoundDataStoryBgmPause;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* SoundDataStoryBgmResume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FPolarisSoundDataStoryBgmCtrlAct> SoundDataStoryBgmCtrlActMap;
    
    UPolarisSoundDataAsset();

};

