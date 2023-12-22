#pragma once
#include "CoreMinimal.h"
#include "ELobbyEmoteCategory.generated.h"

UENUM(BlueprintType)
enum class ELobbyEmoteCategory : uint8 {
    None,
    Greeting,
    Battle,
    Emotions,
    Others,
};

