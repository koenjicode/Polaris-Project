#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PolarisDebugCustomizeMapActor.generated.h"

UCLASS(Blueprintable)
class POLARIS_API APolarisDebugCustomizeMapActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsEnablePlayInSave;
    
    APolarisDebugCustomizeMapActor(const FObjectInitializer& ObjectInitializer);

};

