#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CustomizeSetDebugItem.generated.h"

UCLASS(Blueprintable)
class POLARIS_API UCustomizeSetDebugItem : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CaptureBankID;
    
    UCustomizeSetDebugItem();

};

