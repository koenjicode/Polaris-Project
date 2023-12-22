#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SqueezeBoneData.h"
#include "SqueezeBoneAsset.generated.h"

UCLASS(Blueprintable)
class POLARIS_API USqueezeBoneAsset : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FSqueezeBoneData> SqueezeBoneDataArray;
    
    USqueezeBoneAsset();

};

