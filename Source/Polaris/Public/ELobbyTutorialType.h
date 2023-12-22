#pragma once
#include "CoreMinimal.h"
#include "ELobbyTutorialType.generated.h"

UENUM(BlueprintType)
enum class ELobbyTutorialType : uint8 {
    None,
    AreaEntrance,
    AreaBattle,
    AreaCustomize,
    AreaDojo,
    AreaMiniGame,
    AccessBattle,
    AccessCustomize,
    AccessPractice,
    AccessMiniGame,
    FirstEmote,
    FirstChat,
    FirstVoiceChat,
    FirstChangeClothes,
    FirstLobbyMenu,
    FirstCommunity,
    FirstOnlineBattle,
};

