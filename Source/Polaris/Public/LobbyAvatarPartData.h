#pragma once
#include "CoreMinimal.h"
#include "ELobbyAvatarItemType.h"
#include "LobbyAvatarPartColorData.h"
#include "LobbyAvatarPartData.generated.h"

USTRUCT(BlueprintType)
struct FLobbyAvatarPartData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELobbyAvatarItemType itemType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ItemId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLobbyAvatarPartColorData> colorDatas;
    
    POLARIS_API FLobbyAvatarPartData();
};

