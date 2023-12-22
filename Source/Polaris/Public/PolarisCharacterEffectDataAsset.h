#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "CharacterEffectData.h"
#include "PolarisCharacterEffectDataAsset.generated.h"

UCLASS(Blueprintable)
class POLARIS_API UPolarisCharacterEffectDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FCharacterEffectData> CharacterEffect;
    
    UPolarisCharacterEffectDataAsset();

};

