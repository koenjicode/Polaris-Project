#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AvatarCustomizeGameController.generated.h"

UCLASS(Blueprintable)
class POLARIS_API AAvatarCustomizeGameController : public AActor {
    GENERATED_BODY()
public:
    AAvatarCustomizeGameController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateVerticalCursor(int32 Cursor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateShoulderCursor(int32 Cursor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateRightTrigger(bool isPressing);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateRightStick(float xValue, float yValue);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateLeftTrigger(bool isPressing);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateLeftStick(float xValue, float yValue);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateHorizontalCursor(int32 Cursor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartScene();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSpecialRightPressed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSpecialLeftPressed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFaceButtonTopPressed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFaceButtonLeftPressed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    TArray<uint8> GetVerticalCursorMask();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    int32 GetMaxVerticalCursorCount();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    int32 GetMaxShoulderCursorCount();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    int32 GetMaxHorizontalCursorCount();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    int32 GetCurrentVerticalCursor();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    int32 GetCurrentShoulderCursor();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    int32 GetCurrentHorizontalCursor();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Decide();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool CanRepeatHorizontalCursor();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Cancel();
    
};

