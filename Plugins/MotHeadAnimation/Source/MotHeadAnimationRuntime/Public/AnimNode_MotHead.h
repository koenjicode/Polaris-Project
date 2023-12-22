#pragma once
#include "CoreMinimal.h"
#include "BoneControllers/AnimNode_SkeletalControlBase.h"
#include "UObject/NoExportTypes.h"
#include "Animation/AnimTypes.h"
#include "EMotHeadMatrixSpace.h"
#include "ESupportUEAnimationMode.h"
#include "AnimNode_MotHead.generated.h"

USTRUCT(BlueprintType)
struct MOTHEADANIMATIONRUNTIME_API FAnimNode_MotHead : public FAnimNode_SkeletalControlBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EMotHeadMatrixSpace> MotHeadMatrixSpace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EBoneControlSpace> ControlSpace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayerId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ControlLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESupportUEAnimationMode SupportUEAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceFirstUpdatePhoenix;
    
    FAnimNode_MotHead();
};

