#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "KamuiNetworkBPFunctionLibrary.generated.h"

UCLASS(Blueprintable)
class KAMUINETWORKPLUGIN_API UKamuiNetworkBPFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UKamuiNetworkBPFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static bool KamuinetworkTick();
    
    UFUNCTION(BlueprintCallable)
    static bool KamuinetworkStartServices();
    
    UFUNCTION(BlueprintCallable)
    static bool KamuinetworkStartServerServices();
    
    UFUNCTION(BlueprintCallable)
    static void KamuinetworkStartMatching();
    
    UFUNCTION(BlueprintCallable)
    static void KamuinetworkEndServices();
    
    UFUNCTION(BlueprintCallable)
    static void KamuinetworkEndServerServices();
    
};

