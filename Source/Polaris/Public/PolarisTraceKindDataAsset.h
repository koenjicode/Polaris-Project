#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "PolarisTraceKindDataAsset.generated.h"

class UMaterialInterface;
class UPolarisTraceEffectCurve;
class UPolarisTraceMeshDataAsset;

UCLASS(Blueprintable)
class POLARIS_API UPolarisTraceKindDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPolarisTraceMeshDataAsset* MeshSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInterface*> MaterialArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ParticleSystemTemplateId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPolarisTraceEffectCurve* EffectCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPolarisTraceEffectCurve* EffectDeltaCurve;
    
    UPolarisTraceKindDataAsset();

};

