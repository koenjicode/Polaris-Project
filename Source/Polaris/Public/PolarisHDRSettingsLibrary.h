#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "PolarisHDRSettingsLibrary.generated.h"

UCLASS(Blueprintable)
class POLARIS_API UPolarisHDRSettingsLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPolarisHDRSettingsLibrary();

    UFUNCTION(BlueprintCallable)
    static bool SupportsHDRDisplayOutput();
    
    UFUNCTION(BlueprintCallable)
    static void SetUIBrightness(int32 Level);
    
    UFUNCTION(BlueprintCallable)
    static void SetToneCurvePoint(FVector2f p1, FVector2f p2, FVector2f p3);
    
    UFUNCTION(BlueprintCallable)
    static void SetToneCurveParam(float ParamH);
    
    UFUNCTION(BlueprintCallable)
    static void SetSDRScreenBrightness(int32 Level);
    
    UFUNCTION(BlueprintCallable)
    static void SetScreenSaturation(int32 Level);
    
    UFUNCTION(BlueprintCallable)
    static void SetHDRScreenBrightness(int32 Level);
    
    UFUNCTION(BlueprintCallable)
    static void SetHDRDisplayNits(int32 DisplayNits);
    
    UFUNCTION(BlueprintCallable)
    static bool IsHDREnabled();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetToneCurveParam();
    
    UFUNCTION(BlueprintCallable)
    static void EnableHDRDisplayOutput(bool bEnable, int32 DisplayNits);
    
};

