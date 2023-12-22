#pragma once
#include "CoreMinimal.h"
#include "ExtraItemStruct.generated.h"

class USkeletalMesh;

USTRUCT(BlueprintType)
struct POLARIS_API FExtraItemStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* ExtraItemMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ExtraDefaultConstaraintNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsExtraDefaultConstaraintNode;
    
    FExtraItemStruct();
};

