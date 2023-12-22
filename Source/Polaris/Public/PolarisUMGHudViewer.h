#pragma once
#include "CoreMinimal.h"
#include "PolarisUMGTextMenu.h"
#include "PolarisUMGHudViewer.generated.h"

class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class POLARIS_API UPolarisUMGHudViewer : public UPolarisUMGTextMenu {
    GENERATED_BODY()
public:
    UPolarisUMGHudViewer();

protected:
    UFUNCTION(BlueprintCallable)
    UTexture2D* GetFighterTexture(int32 side, int32 fighter_id);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetFighterName(int32 fighter_id, FString& old_name, FString& new_name);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 ClampFighterId(int32 fighter_id);
    
};

