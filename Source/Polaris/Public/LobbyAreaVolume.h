#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "ELobbyArea.h"
#include "LobbyAreaVolume.generated.h"

UCLASS(Blueprintable)
class POLARIS_API ALobbyAreaVolume : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELobbyArea Area;
    
    ALobbyAreaVolume(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    float GetAreaDistance(const FVector& InLocation) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ELobbyArea GetArea() const;
    
};

