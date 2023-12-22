#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "PolarisTextFunctionLibrary.generated.h"

class UObject;
class UUserWidget;

UCLASS(Blueprintable)
class POLARIS_API UPolarisTextFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPolarisTextFunctionLibrary();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void RefreshAllTextBlock(UObject* WorldContextObject, bool is_update_font);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsLocalizeReady();
    
    UFUNCTION(BlueprintCallable)
    static void CalculateTextSizeFit(UUserWidget* Root);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText ApplyReplaceTable(const FText& Text);
    
};

