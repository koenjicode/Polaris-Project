#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "KamuiManager.generated.h"

class UPolarisAutoTest;

UCLASS(Blueprintable)
class POLARIS_API UKamuiManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPolarisAutoTest* AutoTest;
    
public:
    UKamuiManager();

};

