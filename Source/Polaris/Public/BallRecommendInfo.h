#pragma once
#include "CoreMinimal.h"
#include "BallRecommendMoveInfo.h"
#include "BallRecommendInfo.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct POLARIS_API FBallRecommendInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* CharacterFaceTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* CharacterNameTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Caption;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBallRecommendMoveInfo> Moves;
    
    FBallRecommendInfo();
};

