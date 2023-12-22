#pragma once
#include "CoreMinimal.h"
#include "CatwalkClothComponentStruct.h"
#include "SlaveMeshSetInnerStruct.generated.h"

class UGFurComponent;
class UMeshComponent;

USTRUCT(BlueprintType)
struct POLARIS_API FSlaveMeshSetInnerStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMeshComponent* MeshComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCatwalkClothComponentStruct CatwalkClothCompSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UGFurComponent*> GFurCompArray;
    
    FSlaveMeshSetInnerStruct();
};

