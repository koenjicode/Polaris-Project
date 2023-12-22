#include "EventDispatcher.h"

AEventDispatcher::AEventDispatcher(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->EventDispatcherObject = NULL;
}

UEventDispatcherObject* AEventDispatcher::GetEventDispatcherObject() {
    return NULL;
}


