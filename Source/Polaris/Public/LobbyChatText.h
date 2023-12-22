#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EPlayerNameDisplayMode.h"
#include "OnPlayerNameChangedDelegate.h"
#include "LobbyChatText.generated.h"

class ULobbyChatTextAddressBook;
class ULobbyChatTextBalloon;
class ULobbyChatTextMessages;
class ULobbyChatTextSender;

UCLASS(Blueprintable)
class POLARIS_API ULobbyChatText : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ULobbyChatTextBalloon* Balloon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ULobbyChatTextMessages* Messages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ULobbyChatTextSender* Sender;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ULobbyChatTextAddressBook* Address;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerNameChanged OnPlayerNameChangedDelegate;
    
    ULobbyChatText();

    UFUNCTION(BlueprintCallable)
    void Tick(float InDeltaSeconds);
    
private:
    UFUNCTION(BlueprintCallable)
    static void SetDirectChatInfo(int32 InWhisperPlatform012, const FString& InWhisperPlayerName, const FString& InWhisperCosmosId, const FString& InWhisperPlatformId, const FString& InWhisperPolarisId, const FString& InWhisperOnlineId);
    
    UFUNCTION(BlueprintCallable)
    static void ResetDirectChatInfo();
    
public:
    UFUNCTION(BlueprintCallable)
    void PlayerNameModeChange(EPlayerNameDisplayMode InPlayerNameMode);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLobbyJoined() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ULobbyChatTextSender* GetSender() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ULobbyChatTextMessages* GetMessages() const;
    
private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetDirectChatInfo(int32& OutWhisperPlatform012, FString& OutWhisperPlayerName, FString& OutWhisperCosmosId, FString& OutWhisperPlatformId, FString& OutWhisperPolarisId, FString& OutWhisperOnlineId);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ULobbyChatTextBalloon* GetBalloon() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ULobbyChatTextAddressBook* GetAddress() const;
    
};

