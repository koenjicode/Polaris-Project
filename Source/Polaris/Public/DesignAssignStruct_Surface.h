#pragma once
#include "CoreMinimal.h"
#include "SurfaceData.h"
#include "DesignAssignStruct_Surface.generated.h"

class USurfacePreset;

USTRUCT(BlueprintType)
struct POLARIS_API FDesignAssignStruct_Surface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isUseSurfacePreset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USurfacePreset* Assign_Surface_Preset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSurfaceData Assign_Surface_Data;
    
    FDesignAssignStruct_Surface();
};

