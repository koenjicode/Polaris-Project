#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "PolarisItemFunctionLibrary.generated.h"

UCLASS(Blueprintable)
class POLARIS_API UPolarisItemFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPolarisItemFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static void UnregisterOverrideToneId(int32 PlayerNumber, int32 SourceSoundID);
    
    UFUNCTION(BlueprintCallable)
    static void RegisterOverrideToneId(int32 PlayerNumber, int32 SourceSoundID, int32 DestinationSoundID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetWinnerPlayerNumber();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FTransform FinalizeTransformForConstraintItem(const FTransform& Transform);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FTransform ConvertTransformMayaToUE4(const FTransform& Transform);
    
};

