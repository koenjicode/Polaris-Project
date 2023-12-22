#pragma once
#include "CoreMinimal.h"
#include "EventOnCharacterMeshPartsOffParam.generated.h"

USTRUCT(BlueprintType)
struct FEventOnCharacterMeshPartsOffParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 player_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 mesh_num;
    
    POLARIS_API FEventOnCharacterMeshPartsOffParam();
};

