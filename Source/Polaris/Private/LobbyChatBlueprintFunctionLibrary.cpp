#include "LobbyChatBlueprintFunctionLibrary.h"

ULobbyChatBlueprintFunctionLibrary::ULobbyChatBlueprintFunctionLibrary() {
}

void ULobbyChatBlueprintFunctionLibrary::SendTextLocal(const FLobbyChatAddressInfo& InSendTo, const FLobbyChatData& InData) {
}

bool ULobbyChatBlueprintFunctionLibrary::SendText(const FLobbyChatAddressInfo& InSendTo, const FString& InMessage, FName InStampName, int32 InTemplateId) {
    return false;
}

void ULobbyChatBlueprintFunctionLibrary::SendSystemAllCategory(const FString& InMessage, bool InMessageID) {
}

void ULobbyChatBlueprintFunctionLibrary::SendSystem(ELobbyChatAddressType Address, const FString& InMessageID, bool All) {
}

void ULobbyChatBlueprintFunctionLibrary::SelfBalloon(const ELobbyChatAddressType& Address, const FString& Message, const FName& stampName, int32 templateId) {
}

bool ULobbyChatBlueprintFunctionLibrary::OutputChatLog(bool InOutput, const FString& InTitle, const FString& InLog, bool InVerbose, bool InCallstack) {
    return false;
}

EPlayerNameDisplayMode ULobbyChatBlueprintFunctionLibrary::GetPlayerNameMode() {
    return EPlayerNameDisplayMode::PlayerName;
}

ULobbyChatTextSender* ULobbyChatBlueprintFunctionLibrary::GetChatSender() {
    return NULL;
}

ULobbyChatTextMessages* ULobbyChatBlueprintFunctionLibrary::GetChatMessages() {
    return NULL;
}

ULobbyChatTextBalloon* ULobbyChatBlueprintFunctionLibrary::GetChatBalloon() {
    return NULL;
}

ULobbyChatTextAddressBook* ULobbyChatBlueprintFunctionLibrary::GetChatAddressBook() {
    return NULL;
}

ULobbyChatText* ULobbyChatBlueprintFunctionLibrary::GetChat() {
    return NULL;
}

void ULobbyChatBlueprintFunctionLibrary::ChatKeyboardEnable(bool InEnable) {
}


