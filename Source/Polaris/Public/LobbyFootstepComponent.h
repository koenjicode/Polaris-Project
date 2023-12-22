#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "LobbyFootstepComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ULobbyFootstepComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 _groundSurfaceType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float _speed;
    
    ULobbyFootstepComponent(const FObjectInitializer& ObjectInitializer);

};

