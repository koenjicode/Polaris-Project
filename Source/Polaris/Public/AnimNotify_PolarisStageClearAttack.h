#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "AnimNotify_PolarisStageClearAttack.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class POLARIS_API UAnimNotify_PolarisStageClearAttack : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 no;
    
    UAnimNotify_PolarisStageClearAttack();

};

