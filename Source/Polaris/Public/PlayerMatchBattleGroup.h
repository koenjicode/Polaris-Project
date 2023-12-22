#pragma once
#include "CoreMinimal.h"
#include "PlayerMatchBattleGroup.generated.h"

USTRUCT(BlueprintType)
struct FPlayerMatchBattleGroup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Number;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool in_battle;
    
    POLARIS_API FPlayerMatchBattleGroup();
};

