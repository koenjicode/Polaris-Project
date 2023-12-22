#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "DebugEffectShotInterface.generated.h"

class UAuraCharacterItem;
class UDebugEffectItem;
class UEffectCharacterItem;
class UObject;

UINTERFACE(Blueprintable, MinimalAPI)
class UDebugEffectShotInterface : public UInterface {
    GENERATED_BODY()
};

class IDebugEffectShotInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateCaptureBorder(int32 Width, int32 Height);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool SaveAndCheckoutLoadAssets(const TArray<UObject*>& AssetToSave);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool SaveAndCheckoutLoadAsset(UObject* AssetToSave);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UDebugEffectItem* CreateNewDebugEffectItemForEffect(UEffectCharacterItem* Item, int32 fighter_id);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UDebugEffectItem* CreateNewDebugEffectItemForAura(UAuraCharacterItem* Item, int32 fighter_id);
    
};

