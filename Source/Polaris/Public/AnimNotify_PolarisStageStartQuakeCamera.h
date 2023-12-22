#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "EStageCameraQuakeType.h"
#include "AnimNotify_PolarisStageStartQuakeCamera.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class POLARIS_API UAnimNotify_PolarisStageStartQuakeCamera : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStageCameraQuakeType QuakeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 QuakeFrame;
    
    UAnimNotify_PolarisStageStartQuakeCamera();

};

