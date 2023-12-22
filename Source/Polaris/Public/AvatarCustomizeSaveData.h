#pragma once
#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "LobbyAvatarData_Struct.h"
#include "AvatarCustomizeSaveData.generated.h"

UCLASS(Blueprintable)
class POLARIS_API UAvatarCustomizeSaveData : public USaveGame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> thumbnailBuffer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLobbyAvatarData_Struct avatarDataStruct;
    
    UAvatarCustomizeSaveData();

};

