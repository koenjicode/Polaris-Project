#pragma once
#include "CoreMinimal.h"
#include "PhyscsMaterialAttachBoneInfo.generated.h"

class UNiagaraComponent;

USTRUCT(BlueprintType)
struct FPhyscsMaterialAttachBoneInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UNiagaraComponent> Particle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 surface_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 effect_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isAsyncTrace;
    
    POLARIS_API FPhyscsMaterialAttachBoneInfo();
};

