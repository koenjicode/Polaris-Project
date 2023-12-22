#include "LobbyChatTextSender.h"

ULobbyChatTextSender::ULobbyChatTextSender() {
}

bool ULobbyChatTextSender::SendText(const FLobbyChatAddressInfo& InSendTo, const FString& InMessage, FName InStampName, int32 InTemplateId) {
    return false;
}

bool ULobbyChatTextSender::CanSend(float& OutParcent) const {
    return false;
}


