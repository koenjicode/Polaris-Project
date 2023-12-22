#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PolarisSoloCharacterLoadActor.generated.h"

UCLASS(Blueprintable)
class POLARIS_API APolarisSoloCharacterLoadActor : public AActor {
    GENERATED_BODY()
public:
    APolarisSoloCharacterLoadActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RequestCharacterUnload();
    
    UFUNCTION(BlueprintCallable)
    bool RequestCharacterLoad(int32 fighter_id, int32 customizeslot_id, int32 costumetype_id, const FString& overridePathToCustomizeSet);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLoaded() const;
    
};

