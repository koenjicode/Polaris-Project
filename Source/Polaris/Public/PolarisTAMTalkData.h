#pragma once
#include "CoreMinimal.h"
#include "PolarisTAMMessages.h"
#include "PolarisTAMTalkData.generated.h"

USTRUCT(BlueprintType)
struct POLARIS_API FPolarisTAMTalkData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPolarisTAMMessages> Normal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPolarisTAMMessages> BattleStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPolarisTAMMessages> Win;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPolarisTAMMessages> Lose;
    
    FPolarisTAMTalkData();
};

