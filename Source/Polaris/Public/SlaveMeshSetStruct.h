#pragma once
#include "CoreMinimal.h"
#include "SlaveMeshSetInnerStruct.h"
#include "SlaveMeshSetStruct.generated.h"

class UItemPrefab;

USTRUCT(BlueprintType)
struct POLARIS_API FSlaveMeshSetStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlaveMeshSetInnerStruct MainMeshSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FSlaveMeshSetInnerStruct> DependencyMeshSetMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UItemPrefab* source_ip;
    
    FSlaveMeshSetStruct();
};

