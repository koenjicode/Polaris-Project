#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MobAnimationSet.generated.h"

class UAnimSequence;

UCLASS(Blueprintable)
class POLARIS_API UMobAnimationSet : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 no;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* IdleAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* CheerSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* TerrorSequence;
    
    UMobAnimationSet();

};

