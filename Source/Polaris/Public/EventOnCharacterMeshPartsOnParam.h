#pragma once
#include "CoreMinimal.h"
#include "EventOnCharacterMeshPartsOnParam.generated.h"

USTRUCT(BlueprintType)
struct FEventOnCharacterMeshPartsOnParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 player_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 mesh_num;
    
    POLARIS_API FEventOnCharacterMeshPartsOnParam();
};

