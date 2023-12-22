#pragma once
#include "CoreMinimal.h"
#include "GS_StoreMenuType.generated.h"

UENUM(BlueprintType)
enum class GS_StoreMenuType : uint8 {
    Home,
    CharaItem,
    AvatarItem,
    OtherItem,
    CurrencyStore,
    BlackPen,
    ItemDetails,
    HomePickUp,
    SelectItemType,
    ItemList,
    PlyCusMenu,
    PrfCusMenu,
    BlackPenPremium,
    BlackPenLevel,
    BlackPenMission,
    MenuNum,
};

