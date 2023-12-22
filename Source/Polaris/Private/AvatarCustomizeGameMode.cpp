#include "AvatarCustomizeGameMode.h"

AAvatarCustomizeGameMode::AAvatarCustomizeGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->IsTutorial = false;
    this->TransitedFromMainMenu = false;
}


