#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "AddMessageDelegateNewDelegate.h"
#include "ELobbyChatAddressType.h"
#include "ELobbyChatBehavior.h"
#include "LobbyChatData.h"
#include "RemoveMessageDelegateNewDelegate.h"
#include "LobbyChatTextMessages.generated.h"

UCLASS(Blueprintable)
class POLARIS_API ULobbyChatTextMessages : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRemoveMessageDelegateNew OnMessageRemoveDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAddMessageDelegateNew OnMessageAddDelegate;
    
    ULobbyChatTextMessages();

    UFUNCTION(BlueprintCallable)
    void SetReportUser(FDateTime InDateTime, const FString& InOnlineId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasMessageType(ELobbyChatBehavior InBehavior, ELobbyChatAddressType InType, const int32& InGuid);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasMessageTextId(ELobbyChatBehavior InBehavior, ELobbyChatAddressType InType, const FString& InTextId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasMessage(ELobbyChatBehavior InBehavior, ELobbyChatAddressType InType, const int32& InGuid) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetReportText(int32& OutUnixTime, FString& OutOnlineId, FString& OutText) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetMessageNew(ELobbyChatBehavior InBehavior, FLobbyChatData& OutInfo, const int32& InGuid) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FLobbyChatData> GetMessageLatest(ELobbyChatBehavior InBehavior, ELobbyChatAddressType InType, int32 InNum);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<int32> GetMessageIds(ELobbyChatBehavior InBehavior, ELobbyChatAddressType InType);
    
    UFUNCTION(BlueprintCallable)
    void AddMessageReceive(ELobbyChatAddressType InType, const FString& InMessage, const FString& InCosmosId, const FString& InPolarisId, const FString& InPlatformId, const FString& InOnlineId, const FString& InUserName);
    
};

