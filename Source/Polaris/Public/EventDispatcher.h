#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EventDispatcher.generated.h"

class UEventDispatcherObject;

UCLASS(Blueprintable)
class POLARIS_API AEventDispatcher : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UEventDispatcherObject* EventDispatcherObject;
    
public:
    AEventDispatcher(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    UEventDispatcherObject* GetEventDispatcherObject();
    
};

