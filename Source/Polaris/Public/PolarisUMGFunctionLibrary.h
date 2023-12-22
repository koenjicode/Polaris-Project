#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/TimerHandle.h"
#include "PolarisUMGFunctionLibrary.generated.h"

class UCurveFloat;
class UObject;
class UPolarisRichTextBlock;
class UPolarisTextBlock;
class UTexture2D;
class UUserWidget;

UCLASS(Blueprintable)
class POLARIS_API UPolarisUMGFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPolarisUMGFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static void UseManaDecrypter();
    
    UFUNCTION(BlueprintCallable)
    static void UnuseManaDecrypter();
    
    UFUNCTION(BlueprintCallable)
    static void ShowMouseCursor(UObject* contextObject, bool is_forced);
    
    UFUNCTION(BlueprintCallable)
    static void ShowBattleSubtitleFromId(const FString& ID, int32 frame);
    
    UFUNCTION(BlueprintCallable)
    static void ShowBattleSubtitleFromHash(int64 ID, int32 frame);
    
    UFUNCTION(BlueprintCallable)
    static void ShowBattleSubtitle(const FText& Text, int32 frame);
    
    UFUNCTION(BlueprintCallable)
    static void SetTimerDelegate(int32 ID, FTimerDynamicDelegate Delegate, float Time, float initial_start_delay);
    
    UFUNCTION(BlueprintCallable)
    static void RemoveViewportInGameInstance();
    
    UFUNCTION(BlueprintCallable)
    static void LoadBinary(const FString& file_name, TArray<uint8>& Data, bool& is_success);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool JudgeMouseInput(FVector Value);
    
    UFUNCTION(BlueprintCallable)
    static void InvokeKamuiCallback();
    
    UFUNCTION(BlueprintCallable)
    static void HideMouseCursor(UObject* contextObject, bool is_forced);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetTimeRemapFrame(const UCurveFloat* Curve, float frame);
    
    UFUNCTION(BlueprintCallable)
    static TArray<UTexture2D*> GetTexturesInDirectory(const FString& Directory);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<UPolarisTextBlock*> GetPolarisTextBlocks(UObject* Object);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<UPolarisRichTextBlock*> GetPolarisRichTextBlocks(UObject* Object);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetLocalizeText(const FString& ID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetCriAtomStreamingTotalBps();
    
    UFUNCTION(BlueprintCallable)
    static TArray<FString> GetAssetNamesInDirectory(const FString& Directory, bool without_extension);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float FrameToSecond(float frame, float frame_rate);
    
    UFUNCTION(BlueprintCallable)
    static void CreateHSVTexture(const FString& Name, int32 Width, int32 Height, float min_h, float max_h);
    
    UFUNCTION(BlueprintCallable)
    static void ClearTimerDelegate(int32 ID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CheckNewlineCharacter(const FString& str);
    
    UFUNCTION(BlueprintCallable)
    static void ApplyMouseCursor();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText ApplyGaijiTable(const FText& Text);
    
    UFUNCTION(BlueprintCallable)
    static void AddToViewportInGameInstance(UUserWidget* Widget, int32 Order);
    
};

