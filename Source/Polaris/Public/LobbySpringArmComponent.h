#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/SpringArmComponent.h"
#include "LobbySpringArmComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class POLARIS_API ULobbySpringArmComponent : public USpringArmComponent {
    GENERATED_BODY()
public:
    ULobbySpringArmComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void SetProperty(double closeSpeed, double awaySpeed, double heightOffset_Near, double heightOffset_Std, double distance_Std);
    
    UFUNCTION(BlueprintCallable)
    void ResetLocationModify();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetModifiedWorldLocation() const;
    
};

