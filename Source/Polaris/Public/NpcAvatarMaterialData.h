#pragma once
#include "CoreMinimal.h"
#include "NpcAvatarMaterialParameter.h"
#include "NpcAvatarMaterialData.generated.h"

class UMaterialInstance;

USTRUCT(BlueprintType)
struct FNpcAvatarMaterialData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstance* Material;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNpcAvatarMaterialParameter> Parameters;
    
    POLARIS_API FNpcAvatarMaterialData();
};

