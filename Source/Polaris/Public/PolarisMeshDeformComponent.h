#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/SceneComponent.h"
#include "PolarisMeshDeformParam.h"
#include "PolarisMeshDeformComponent.generated.h"

class USkeletalMeshComponent;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class POLARIS_API UPolarisMeshDeformComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPolarisMeshDeformParam> DeformParams;
    
    UPolarisMeshDeformComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    static void UpdateMeshWeightIF(USkeletalMeshComponent* Mesh, UPARAM(Ref) TArray<FPolarisMeshDeformParam>& NewDeformParams, FVector HitPosition, float Damage);
    
    UFUNCTION(BlueprintCallable)
    void UpdateMeshWeight(FVector HitPosition, float Damage);
    
    UFUNCTION(BlueprintCallable)
    static void ResetMeshWeightIF(USkeletalMeshComponent* Mesh, UPARAM(Ref) TArray<FPolarisMeshDeformParam>& NewDeformParams);
    
    UFUNCTION(BlueprintCallable)
    void Init();
    
    UFUNCTION(BlueprintCallable)
    static float GetInfluence(FVector Center, float Radius, FVector HitPosition);
    
};

