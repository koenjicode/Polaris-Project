#pragma once
#include "CoreMinimal.h"
#include "CatwalkClothLODGenerationMeshSectionSettings.generated.h"

USTRUCT(BlueprintType)
struct FCatwalkClothLODGenerationMeshSectionSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<float> SectionEffectRadius;
    
    CATWALKCLOTH_API FCatwalkClothLODGenerationMeshSectionSettings();
};

