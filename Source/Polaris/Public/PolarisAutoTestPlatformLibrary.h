#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "PolarisAutoTestPlatformLibrary.generated.h"

UCLASS(Blueprintable)
class POLARIS_API UPolarisAutoTestPlatformLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPolarisAutoTestPlatformLibrary();

    UFUNCTION(BlueprintCallable)
    static void AutoTest_EndGpuCapture();
    
    UFUNCTION(BlueprintCallable)
    static void AutoTest_CaptureFrame(const FString& Filename);
    
    UFUNCTION(BlueprintCallable)
    static void AutoTest_BeginGpuCapture(const FString& Filename);
    
};

