#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AvatarItemData.h"
#include "ELobbyAvatarItemType.h"
#include "AvatarItemDataRepository.generated.h"

class ULobbyAvatarItemDataAsset;

UCLASS(Blueprintable)
class POLARIS_API UAvatarItemDataRepository : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ELobbyAvatarItemType, ULobbyAvatarItemDataAsset*> item_data_asset_map;
    
    UAvatarItemDataRepository();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    ULobbyAvatarItemDataAsset* GetItemDataAsset(ELobbyAvatarItemType item_type) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FAvatarItemData GetItemData(ELobbyAvatarItemType item_type, int32 item_id) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<ULobbyAvatarItemDataAsset*> GetAllItemDataAsset() const;
    
};

