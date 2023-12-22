#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DesignAssignStruct_Color.generated.h"

USTRUCT(BlueprintType)
struct POLARIS_API FDesignAssignStruct_Color {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor Assign_Color;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Assign_DontColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Assign_EnableChangeHue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Assign_Hue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Assign_Saturation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Assign_Brightness;
    
    FDesignAssignStruct_Color();
};

