#pragma once
#include "CoreMinimal.h"
#include "ELobbyHelpButtonSceneType.generated.h"

UENUM(BlueprintType)
enum class ELobbyHelpButtonSceneType : uint8 {
    None,
    ChatBase,
    ChatStampTempBase,
    MatchingAnywhereBase,
    ChatAddressBase,
};

