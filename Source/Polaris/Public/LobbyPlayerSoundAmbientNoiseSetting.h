#pragma once
#include "CoreMinimal.h"
#include "LobbyPlayerSoundAmbientNoiseSetting.generated.h"

USTRUCT(BlueprintType)
struct FLobbyPlayerSoundAmbientNoiseSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString _RTPCName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 _InterpolateTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float _Radius;
    
    POLARIS_API FLobbyPlayerSoundAmbientNoiseSetting();
};

