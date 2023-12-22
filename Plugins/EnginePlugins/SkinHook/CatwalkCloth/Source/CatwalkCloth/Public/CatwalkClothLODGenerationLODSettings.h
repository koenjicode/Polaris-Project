#pragma once
#include "CoreMinimal.h"
#include "CatwalkClothLODGenerationMeshSectionSettings.h"
#include "CatwalkClothLODGenerationLODSettings.generated.h"

USTRUCT(BlueprintType)
struct FCatwalkClothLODGenerationLODSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FCatwalkClothLODGenerationMeshSectionSettings> LODSetting;
    
    CATWALKCLOTH_API FCatwalkClothLODGenerationLODSettings();
};

