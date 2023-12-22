#include "LobbyInputActor.h"

ALobbyInputActor::ALobbyInputActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->_isRightMouseButton = false;
}

ALobbyInputActor* ALobbyInputActor::LobbyGetInputActor2() {
    return NULL;
}

AActor* ALobbyInputActor::LobbyGetInputActor() {
    return NULL;
}


