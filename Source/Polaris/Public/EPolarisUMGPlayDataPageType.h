#pragma once
#include "CoreMinimal.h"
#include "EPolarisUMGPlayDataPageType.generated.h"

UENUM(BlueprintType)
enum class EPolarisUMGPlayDataPageType : uint8 {
    PlayRecord,
    BattleOnline,
    Others,
    PlayStats,
    Stage,
    CharaDataRank,
    CharaDataOnline,
    CharaDataOffline,
};

