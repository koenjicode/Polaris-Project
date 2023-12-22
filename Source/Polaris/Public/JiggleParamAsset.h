#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "JiggleParam.h"
#include "JiggleParamAsset.generated.h"

UCLASS(Blueprintable)
class POLARIS_API UJiggleParamAsset : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FJiggleParam> JiggleParamArray;
    
    UJiggleParamAsset();

};

