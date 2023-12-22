#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "BaseSESTItem.generated.h"

class UTexture2D;

UCLASS(Blueprintable)
class POLARIS_API UBaseSESTItem : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SESTParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* SESTTexture;
    
    UBaseSESTItem();

};

