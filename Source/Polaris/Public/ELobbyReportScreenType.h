#pragma once
#include "CoreMinimal.h"
#include "ELobbyReportScreenType.generated.h"

UENUM(BlueprintType)
enum class ELobbyReportScreenType : uint8 {
    Invalid,
    Profile,
    PostBattleResult,
    Watching,
    Replay_MenuBeforePlayback,
    Ghost_PostBattleResult,
    LeaderBord,
    TextChat,
    InSession_PlayerMatch = 10,
    InSession_Tournament,
    FriendList,
    LobbySelect,
    FollowList,
    Rival,
    PlayedTogether,
    LobbyPlayerList,
    BlockList,
    Customize,
    AvatorAccess,
    Other,
};

