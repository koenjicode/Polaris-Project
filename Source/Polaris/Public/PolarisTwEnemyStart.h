#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerStart.h"
#include "EStoryTwAct.h"
#include "EStoryTwPointType.h"
#include "PolarisTwEnemyStart.generated.h"

class APolarisTwEnemyNavObj;

UCLASS(Blueprintable)
class POLARIS_API APolarisTwEnemyStart : public APlayerStart {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EStoryTwPointType PointType;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EStoryTwAct Act;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString FormationType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RepopInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RepopLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<APolarisTwEnemyNavObj*> NavRoots;
    
    APolarisTwEnemyStart(const FObjectInitializer& ObjectInitializer);

};

