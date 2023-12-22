#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ProfileController.generated.h"

UCLASS(Blueprintable)
class POLARIS_API AProfileController : public AActor {
    GENERATED_BODY()
public:
    AProfileController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowCharacterLoadingIcon();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetCurrentVerticalIndex(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetCurrentHorizontalIndex(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUse();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUp();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRight();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnR3();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnR2();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnR1();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLeft();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnL3();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnL2();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnL1();
    
    UFUNCTION(BlueprintCallable)
    void OnEndedEdit(bool is_save);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDown();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDetail();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDecide();
    
    UFUNCTION(BlueprintCallable)
    void OnChangedViewType(int32 view_type);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCancel(int32 device_type);
    
    UFUNCTION(BlueprintCallable)
    bool IsLightLevelLoaded(int32 view_type);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsCurrentVerticalRepeat();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsCurrentHorizontalRepeat();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HideCharacterLoadingIcon();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool HasEmote(const FString& pose_id);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    int32 GetCurrentVerticalNum();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    TArray<uint8> GetCurrentVerticalMask();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    int32 GetCurrentVerticalIndex();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    int32 GetCurrentHorizontalNum();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    TArray<uint8> GetCurrentHorizontalMask();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    int32 GetCurrentHorizontalIndex();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    AActor* GetCharacterSpawnRoot();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    AActor* GetCameraController();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    int32 GetBgUnlockId(const FString& bg_id);
    
};

