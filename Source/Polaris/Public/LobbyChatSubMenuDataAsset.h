#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "LobbyChatSubMenuDataAsset.generated.h"

class ULobbyChatSubMenuEvent;

UCLASS(Blueprintable)
class POLARIS_API ULobbyChatSubMenuDataAsset : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName textId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULobbyChatSubMenuEvent* ClickedEvent;
    
public:
    ULobbyChatSubMenuDataAsset();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetTextID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ULobbyChatSubMenuEvent* GetClickedEvent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void ExecuteClickedEvent() const;
    
};

