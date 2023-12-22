#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "CatwalkClothDebugSettings.generated.h"

UCLASS(Blueprintable, Config=CatwalkClothDebug)
class CATWALKCLOTH_API UCatwalkClothDebugSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VertexDebugDrawPointSize;
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 VertexDebugDrawChannels;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor SimulationMeshColor;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DebugDrawFrontBias;
    
    UCatwalkClothDebugSettings();

};

