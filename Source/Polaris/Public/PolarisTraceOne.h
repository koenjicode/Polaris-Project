#pragma once
#include "CoreMinimal.h"
#include "PolarisTraceOne.generated.h"

class APolarisTraceMeshActor;
class UCurveFloat;
class UPolarisTraceAttachComponent;
class UPolarisTraceEffectCurve;

USTRUCT(BlueprintType)
struct POLARIS_API FPolarisTraceOne {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APolarisTraceMeshActor* Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* FrameScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPolarisTraceEffectCurve* EffectCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPolarisTraceEffectCurve* EffectDeltaCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ParticleSystemId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPolarisTraceAttachComponent* AttachComponent;
    
    FPolarisTraceOne();
};

