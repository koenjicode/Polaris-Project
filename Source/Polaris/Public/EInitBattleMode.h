#pragma once
#include "CoreMinimal.h"
#include "EInitBattleMode.generated.h"

UENUM(BlueprintType)
enum class EInitBattleMode : uint8 {
    PreStart1P,
    PreStart2P,
    Drama,
    Round1,
    Round2,
    RoundAction,
    RoundActionDrama,
    WinView,
    WinViewDrama,
    DrawView,
    Continue,
    KeyAutoPlay,
    PracticePre,
    PracticeMain,
    RevengePractice,
    SeamlessRound1,
    SeamlessRound2,
    PlayerInfo,
    Replay,
    Customize,
    CustomizeStartView,
    CustomizeWinView,
    KeyRecord,
    StorySeamlessStart,
    StoryMultipleCpuStart,
    Max,
};

