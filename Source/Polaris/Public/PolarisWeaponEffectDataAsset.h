#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EPolarisTracePartsId.h"
#include "WeaponBoneName.h"
#include "PolarisWeaponEffectDataAsset.generated.h"

UCLASS(Blueprintable)
class POLARIS_API UPolarisWeaponEffectDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EPolarisTracePartsId, FWeaponBoneName> WeaponMap;
    
    UPolarisWeaponEffectDataAsset();

};

