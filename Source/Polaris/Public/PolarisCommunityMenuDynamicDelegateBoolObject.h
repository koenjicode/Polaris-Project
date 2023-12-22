#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PolarisCommunityMenuDynamicDelegateBoolObject.generated.h"

UCLASS(Blueprintable)
class POLARIS_API UPolarisCommunityMenuDynamicDelegateBoolObject : public UObject {
    GENERATED_BODY()
public:
    UPolarisCommunityMenuDynamicDelegateBoolObject();

    UFUNCTION(BlueprintCallable)
    void Callback(bool Result);
    
};

