#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ENpcAvatarMaterialParameterType.h"
#include "NpcAvatarMaterialParameter.generated.h"

USTRUCT(BlueprintType)
struct FNpcAvatarMaterialParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENpcAvatarMaterialParameterType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor Value;
    
    POLARIS_API FNpcAvatarMaterialParameter();
};

