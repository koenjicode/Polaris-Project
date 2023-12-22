#include "LobbyChatSubMenuDataAsset.h"

ULobbyChatSubMenuDataAsset::ULobbyChatSubMenuDataAsset() {
    this->ClickedEvent = NULL;
}

FName ULobbyChatSubMenuDataAsset::GetTextID() const {
    return NAME_None;
}

ULobbyChatSubMenuEvent* ULobbyChatSubMenuDataAsset::GetClickedEvent() const {
    return NULL;
}

void ULobbyChatSubMenuDataAsset::ExecuteClickedEvent() const {
}


