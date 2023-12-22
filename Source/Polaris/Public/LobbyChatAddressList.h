#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "LobbyChatAddressUserInfoType.h"
#include "LobbyChatAddressList.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class POLARIS_API ULobbyChatAddressList : public UUserWidget {
    GENERATED_BODY()
public:
    ULobbyChatAddressList();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FLobbyChatAddressUserInfoType> MoveTopAddressInfo(const TArray<FLobbyChatAddressUserInfoType>& InAddressInfo, const FString& InCosmosId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FLobbyChatAddressUserInfoType> CoalesceAddressInfo(const TArray<FLobbyChatAddressUserInfoType>& InAddressLatestInfo, const TArray<FLobbyChatAddressUserInfoType>& InTogetherInfo) const;
    
};

