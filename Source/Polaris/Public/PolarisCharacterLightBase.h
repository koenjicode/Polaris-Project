#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EPolarisLightDirection.h"
#include "PolarisCharacterLightBase.generated.h"

UCLASS(Blueprintable)
class POLARIS_API APolarisCharacterLightBase : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPolarisLightDirection OverrideLightType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPolarisLightDirection OverrideLightTypeCurrent;
    
    APolarisCharacterLightBase(const FObjectInitializer& ObjectInitializer);

};

