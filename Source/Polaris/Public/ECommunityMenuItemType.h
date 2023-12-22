#pragma once
#include "CoreMinimal.h"
#include "ECommunityMenuItemType.generated.h"

UENUM(BlueprintType)
enum class ECommunityMenuItemType : uint8 {
    PlayersInLounge,
    NotificationsList,
    FollowList,
    FriendList,
    Rival,
    PlayedWith,
    MyProfile,
    BlockList,
};

