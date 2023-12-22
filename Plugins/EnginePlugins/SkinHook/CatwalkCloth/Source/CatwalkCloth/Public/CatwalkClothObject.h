#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CatwalkClothExternalSimulationMesh.h"
#include "CatwalkClothVariation.h"
#include "CatwalkClothObject.generated.h"

class USkeletalMesh;

UCLASS(Blueprintable)
class CATWALKCLOTH_API UCatwalkClothObject : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCatwalkClothVariation> Variations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FCatwalkClothExternalSimulationMesh> ExternalSimulationMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<TSoftObjectPtr<USkeletalMesh>> OriginalMergedMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSerializeSectionConversionInfos;
    
    UCatwalkClothObject();

};

