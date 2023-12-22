#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ELobbyChatAddressType.h"
#include "ELobbyChatBehavior.h"
#include "LobbyChatAddressInfoUser.h"
#include "LobbyChatTextAddressBook.generated.h"

UCLASS(Blueprintable)
class POLARIS_API ULobbyChatTextAddressBook : public UObject {
    GENERATED_BODY()
public:
    ULobbyChatTextAddressBook();

    UFUNCTION(BlueprintCallable)
    void SetAddressSelected(ELobbyChatAddressType InAddress, FLobbyChatAddressInfoUser InUser);
    
    UFUNCTION(BlueprintCallable)
    void Regist(ELobbyChatBehavior in_behavior, const FString& in_player_name, const FString& in_cosmos_id, const FString& in_platform_id, const FString& in_polaris_id, const FString& in_online_id, const int32& in_platform_tag, const FString& in_update_datetime, bool in_session);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetAddressSelected(ELobbyChatAddressType& OutAddress, FLobbyChatAddressInfoUser& OutUser) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetAddressLatestSession(int32 in_num, TArray<FLobbyChatAddressInfoUser>& out_address) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetAddressLatest(ELobbyChatBehavior InBehavior, int32 in_num, TArray<FLobbyChatAddressInfoUser>& out_address) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetAddress(const FString& in_cosmos_id, FLobbyChatAddressInfoUser& out_address) const;
    
};

