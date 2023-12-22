#pragma once
#include "CoreMinimal.h"
#include "DesignAssignStruct_Pattern.generated.h"

class UTexture;

USTRUCT(BlueprintType)
struct POLARIS_API FDesignAssignStruct_Pattern {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture* Assign_Pattern;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Assign_PatternHue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Assign_PatternSaturation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Assign_PatternBrightness;
    
    FDesignAssignStruct_Pattern();
};

