#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "CommonEffectData.h"
#include "PolarisEffectDataAsset.generated.h"

class UNiagaraSystem;
class UStaticMesh;
class UTexture;

UCLASS(Blueprintable)
class POLARIS_API UPolarisEffectDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FCommonEffectData> ParticleAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTexture*> TextureDataArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UStaticMesh*> StaticMeshDataArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UNiagaraSystem*> NiagaraDataArray;
    
    UPolarisEffectDataAsset();

};

