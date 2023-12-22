#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "DebugImageBlueprintLibrary.generated.h"

class UUserWidget;

UCLASS(Blueprintable)
class POLARIS_API UDebugImageBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UDebugImageBlueprintLibrary();

private:
    UFUNCTION(BlueprintCallable)
    static void TakeWidgetScreenShot(UUserWidget* Widget, int32 Width, int32 Height, TArray<FColor>& resultColor);
    
    UFUNCTION(BlueprintCallable)
    static void SaveRawImage(const TArray<uint8>& raw, const FString& FilePath);
    
    UFUNCTION(BlueprintCallable)
    static void SaveImage(const TArray<FColor>& Data, int32 Width, int32 Height, const FString& FilePath);
    
};

