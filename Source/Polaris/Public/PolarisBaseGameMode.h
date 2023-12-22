#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "EGameModeType.h"
#include "PolarisBaseGameMode.generated.h"

UCLASS(Blueprintable, NonTransient)
class POLARIS_API APolarisBaseGameMode : public AGameMode {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnExitPause);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnEnterPause);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEnterPause OnEnterPauseDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnExitPause OnExitPauseDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGameModeType GameModeType;
    
    APolarisBaseGameMode(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPause() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDebugPauseStep() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDebugPauseEngineStep() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetGameSpeedRaw() const;
    
};

