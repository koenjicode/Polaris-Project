#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "PolarisFaderBlueprintLibrary.generated.h"

UCLASS(Blueprintable)
class POLARIS_API UPolarisFaderBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPolarisFaderBlueprintLibrary();

private:
    UFUNCTION(BlueprintCallable)
    static void WhiteOutArg(int32 Priority, float fade_time);
    
    UFUNCTION(BlueprintCallable)
    static void WhiteOut();
    
    UFUNCTION(BlueprintCallable)
    static void WhiteInArg(int32 Priority, float fade_time);
    
    UFUNCTION(BlueprintCallable)
    static void WhiteIn();
    
    UFUNCTION(BlueprintCallable)
    static void WhiteArg(int32 Priority);
    
    UFUNCTION(BlueprintCallable)
    static void White();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsFinishedFadingArg(int32 Priority);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsFinishedFading();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsFadingArg(int32 Priority);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsFading();
    
    UFUNCTION(BlueprintCallable)
    static void ClearArg(int32 Priority);
    
    UFUNCTION(BlueprintCallable)
    static void Clear();
    
    UFUNCTION(BlueprintCallable)
    static void BlackOutArg(int32 Priority, float fade_time);
    
    UFUNCTION(BlueprintCallable)
    static void BlackOut();
    
    UFUNCTION(BlueprintCallable)
    static void BlackInArg(int32 Priority, float fade_time);
    
    UFUNCTION(BlueprintCallable)
    static void BlackIn();
    
    UFUNCTION(BlueprintCallable)
    static void BlackArg(int32 Priority);
    
    UFUNCTION(BlueprintCallable)
    static void Black();
    
};

