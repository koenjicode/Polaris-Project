#pragma once
#include "CoreMinimal.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGTAMTaskList.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class POLARIS_API UPolarisUMGTAMTaskList : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGTAMTaskList();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetText(FName Text);
    
};

