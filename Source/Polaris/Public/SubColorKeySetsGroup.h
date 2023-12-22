#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ESubColorKeySetsType.h"
#include "SubColorKeySets.h"
#include "SubColorKeySetsGroup.generated.h"

UCLASS(Blueprintable)
class POLARIS_API USubColorKeySetsGroup : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSubColorKeySets SubColorKeySets_TipColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSubColorKeySets SubColorKeySets_BaseColor_H;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSubColorKeySets SubColorKeySets_BaseColor_L;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSubColorKeySets SubColorKeySets_BaseColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSubColorKeySets SubColorKeySets_SSS_InnerColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSubColorKeySets SubColorKeySets_SSS_OuterColor;
    
    USubColorKeySetsGroup();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetSubColorKeySets(FSubColorKeySets& _SubColorKeySets, ESubColorKeySetsType _type);
    
};

