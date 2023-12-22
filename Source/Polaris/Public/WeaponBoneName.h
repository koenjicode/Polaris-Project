#pragma once
#include "CoreMinimal.h"
#include "WeaponBoneName.generated.h"

USTRUCT(BlueprintType)
struct FWeaponBoneName {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName WeaponName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName WeaponBoneName;
    
    POLARIS_API FWeaponBoneName();
};

