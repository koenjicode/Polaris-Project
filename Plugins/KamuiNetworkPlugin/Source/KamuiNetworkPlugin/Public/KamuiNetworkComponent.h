#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "KamuiNetworkComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class KAMUINETWORKPLUGIN_API UKamuiNetworkComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UKamuiNetworkComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetMyLocalTransform(FTransform position);
    
    UFUNCTION(BlueprintCallable)
    bool IsConnectedPeer();
    
    UFUNCTION(BlueprintCallable)
    FTransform GetPeerTransform();
    
};

