#pragma once
#include "CoreMinimal.h"
#include "EGameModeType.generated.h"

UENUM(BlueprintType)
enum class EGameModeType : uint8 {
    E_Type_Base,
    E_Type_Battle,
    E_Type_CharacterSelect,
    E_Type_CharacterCustomzie,
    E_Type_TAM,
    E_Type_LobbyIGS,
    E_Type_AvatarCustomize,
    E_Type_MainMenu,
    E_Type_MainMenu_noUI,
    E_Type_PlayerMatchCreate,
    E_Type_PlayerProfile,
    E_Type_PlayerMatchSearch,
    E_Type_TestMode,
};

