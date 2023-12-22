#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "BoolDispatcherDelegate.h"
#include "LobbyDevelopmentGISubsystem.generated.h"

UCLASS(Blueprintable)
class POLARIS_API ULobbyDevelopmentGISubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoolDispatcher OnChangedAgeingAutoPlayFlag;
    
    ULobbyDevelopmentGISubsystem();

    UFUNCTION(BlueprintCallable)
    void SetAgeingAutoPlay(const bool Ageing);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAgeingAutoPlay() const;
    
};

