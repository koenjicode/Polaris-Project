#pragma once
#include "CoreMinimal.h"
#include "EShowcaseType.h"
#include "EStoreItemAttribute.h"
#include "OtherShowcase.generated.h"

USTRUCT(BlueprintType)
struct POLARIS_API FOtherShowcase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName _showcaseId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EShowcaseType _showcaseType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 _order;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStoreItemAttribute _sellType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText _titleText;
    
    FOtherShowcase();
};

