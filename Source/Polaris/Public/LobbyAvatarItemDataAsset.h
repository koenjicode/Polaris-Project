#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "AvatarItemData.h"
#include "ELobbyAvatarItemType.h"
#include "LobbyAvatarItemDataAsset.generated.h"

UCLASS(Blueprintable)
class POLARIS_API ULobbyAvatarItemDataAsset : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELobbyAvatarItemType item_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FAvatarItemData> item_data_map;
    
    ULobbyAvatarItemDataAsset();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FAvatarItemData GetItemData(int32 item_id) const;
    
};

