#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "PolarisDramaFunctionLibrary.generated.h"

class UStaticMeshComponent;

UCLASS(Blueprintable)
class POLARIS_API UPolarisDramaFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPolarisDramaFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static void UpdateCameraMeshMaterial_Rbt(UStaticMeshComponent* Mesh);
    
    UFUNCTION(BlueprintCallable)
    static void UpdateCameraMeshMaterial_Cht(UStaticMeshComponent* Mesh);
    
private:
    UFUNCTION(BlueprintCallable)
    static void UpdateCameraMeshMaterial(UStaticMeshComponent* Mesh, bool is_rbt);
    
public:
    UFUNCTION(BlueprintCallable)
    static float GetCameraMaterialV_Rbt();
    
    UFUNCTION(BlueprintCallable)
    static float GetCameraMaterialV_Cht();
    
};

