#pragma once
#include "CoreMinimal.h"
#include "SqueezeInfoStruct.generated.h"

class UBaseCharacterItem;
class USkeletalMesh;
class USqueezeBoneAsset;

USTRUCT(BlueprintType)
struct POLARIS_API FSqueezeInfoStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBaseCharacterItem* TargetBCI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* ExistSkeletalMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USqueezeBoneAsset* SqueezeBoneAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsClothDisable;
    
    FSqueezeInfoStruct();
};

