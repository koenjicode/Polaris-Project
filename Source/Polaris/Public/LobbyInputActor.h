#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LobbyInput.h"
#include "LobbyInputActor.generated.h"

class ALobbyInputActor;

UCLASS(Blueprintable)
class POLARIS_API ALobbyInputActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool _isRightMouseButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLobbyInput _input;
    
    ALobbyInputActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    static ALobbyInputActor* LobbyGetInputActor2();
    
    UFUNCTION(BlueprintCallable)
    static AActor* LobbyGetInputActor();
    
};

