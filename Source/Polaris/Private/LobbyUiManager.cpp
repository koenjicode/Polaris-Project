#include "LobbyUiManager.h"

ALobbyUiManager::ALobbyUiManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->_isMenuActive = false;
}

bool ALobbyUiManager::LobbyIsMenuActive() {
    return false;
}

AActor* ALobbyUiManager::LobbyGetUiManager() {
    return NULL;
}







void ALobbyUiManager::CallOnTalkFinish() {
}

void ALobbyUiManager::CallOnMenuDecide(int32 Index) {
}

void ALobbyUiManager::CallOnMenuCancel() {
}


