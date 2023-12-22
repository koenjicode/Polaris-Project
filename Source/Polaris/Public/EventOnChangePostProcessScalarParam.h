#pragma once
#include "CoreMinimal.h"
#include "EPostProcessScalarType.h"
#include "EventOnChangePostProcessScalarParam.generated.h"

USTRUCT(BlueprintType)
struct FEventOnChangePostProcessScalarParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPostProcessScalarType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float targetRelativeValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 interpolationFrames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool cosineInterpolation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isCharacter;
    
    POLARIS_API FEventOnChangePostProcessScalarParam();
};

