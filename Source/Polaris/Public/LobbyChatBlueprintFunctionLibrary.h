#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ELobbyChatAddressType.h"
#include "EPlayerNameDisplayMode.h"
#include "LobbyChatAddressInfo.h"
#include "LobbyChatData.h"
#include "LobbyChatBlueprintFunctionLibrary.generated.h"

class ULobbyChatText;
class ULobbyChatTextAddressBook;
class ULobbyChatTextBalloon;
class ULobbyChatTextMessages;
class ULobbyChatTextSender;

UCLASS(Blueprintable)
class POLARIS_API ULobbyChatBlueprintFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    ULobbyChatBlueprintFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static void SendTextLocal(const FLobbyChatAddressInfo& InSendTo, const FLobbyChatData& InData);
    
    UFUNCTION(BlueprintCallable)
    static bool SendText(const FLobbyChatAddressInfo& InSendTo, const FString& InMessage, FName InStampName, int32 InTemplateId);
    
    UFUNCTION(BlueprintCallable)
    static void SendSystemAllCategory(const FString& InMessage, bool InMessageID);
    
    UFUNCTION(BlueprintCallable)
    static void SendSystem(ELobbyChatAddressType Address, const FString& InMessageID, bool All);
    
    UFUNCTION(BlueprintCallable)
    static void SelfBalloon(const ELobbyChatAddressType& Address, const FString& Message, const FName& stampName, int32 templateId);
    
    UFUNCTION(BlueprintCallable)
    static bool OutputChatLog(bool InOutput, const FString& InTitle, const FString& InLog, bool InVerbose, bool InCallstack);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EPlayerNameDisplayMode GetPlayerNameMode();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ULobbyChatTextSender* GetChatSender();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ULobbyChatTextMessages* GetChatMessages();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ULobbyChatTextBalloon* GetChatBalloon();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ULobbyChatTextAddressBook* GetChatAddressBook();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ULobbyChatText* GetChat();
    
    UFUNCTION(BlueprintCallable)
    static void ChatKeyboardEnable(bool InEnable);
    
};

