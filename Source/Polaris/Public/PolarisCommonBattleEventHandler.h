#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EventDispatcherObject.h"
#include "EventDispatcherObject.h"
#include "EventOnRageArtsBeginParam.h"
#include "EventOnRageArtsEndParam.h"
#include "PolarisCommonBattleEventHandler.generated.h"

UCLASS(Blueprintable)
class APolarisCommonBattleEventHandler : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEventDispatcherObject::FOnRageArtsBegin OnRageArtsBeginDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEventDispatcherObject::FOnRageArtsEnd OnRageArtsEndDelegate;
    
    APolarisCommonBattleEventHandler(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void onRageArtsEnd(const FEventOnRageArtsEndParam& InParam);
    
    UFUNCTION(BlueprintCallable)
    void onRageArtsBegin(const FEventOnRageArtsBeginParam& InParam);
    
};

