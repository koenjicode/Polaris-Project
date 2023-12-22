#pragma once
#include "CoreMinimal.h"
#include "PolarisDialogButtonDelegateDelegate.h"
#include "PolarisDialogButtonParam.generated.h"

USTRUCT(BlueprintType)
struct FPolarisDialogButtonParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPolarisDialogButtonDelegate OnDecide;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsTextId;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsGhost;
    
    POLARIS_API FPolarisDialogButtonParam();
};

