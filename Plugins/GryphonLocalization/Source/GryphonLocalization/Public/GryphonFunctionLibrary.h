#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GryphonFunctionLibrary.generated.h"

UCLASS(Blueprintable)
class GRYPHONLOCALIZATION_API UGryphonFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGryphonFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static void UnregisterAsset(const FString& Category);
    
    UFUNCTION(BlueprintCallable)
    static void RegisterAsset(const FString& Category, const FString& AssetName);
    
    UFUNCTION(BlueprintCallable)
    static bool HasText(const FString& textId);
    
    UFUNCTION(BlueprintCallable)
    static FText GetText(const FString& textId);
    
    UFUNCTION(BlueprintCallable)
    static FString GetString(const FString& textId);
    
};

