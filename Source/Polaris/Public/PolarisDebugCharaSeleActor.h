#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PolarisDebugCharaSeleActor.generated.h"

class APolarisDebugCustomizeActor;
class UCustomizeSet;

UCLASS(Blueprintable)
class POLARIS_API APolarisDebugCharaSeleActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FighterId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCustomizeSet* OverrideCustomizeSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsMirror;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APolarisDebugCustomizeActor* MyDebugCustomizeActor;
    
    APolarisDebugCharaSeleActor(const FObjectInitializer& ObjectInitializer);

};

