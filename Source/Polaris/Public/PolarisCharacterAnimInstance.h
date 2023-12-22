#pragma once
#include "CoreMinimal.h"
#include "MotHeadAnimInstance.h"
#include "PolarisCharacterAnimInstance.generated.h"

class APolarisCharacterActor;
class UPolarisCharacterMotionOverrideData;

UCLASS(Blueprintable, NonTransient)
class POLARIS_API UPolarisCharacterAnimInstance : public UMotHeadAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FacialBlend;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APolarisCharacterActor* Player;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<UPolarisCharacterMotionOverrideData*> MotionOverrideDatas;
    
    UPolarisCharacterAnimInstance();

};

