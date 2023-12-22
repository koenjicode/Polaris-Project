#pragma once
#include "CoreMinimal.h"
#include "PolarisBaseGameMode.h"
#include "IngameStoreMode.generated.h"

class UPolarisStoreItemDataIntermediate;

UCLASS(Blueprintable, NonTransient)
class POLARIS_API AIngameStoreMode : public APolarisBaseGameMode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPolarisStoreItemDataIntermediate* item_data_intermediate_store;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPolarisStoreItemDataIntermediate* item_data_intermediate_blackpen;
    
public:
    AIngameStoreMode(const FObjectInitializer& ObjectInitializer);

};

