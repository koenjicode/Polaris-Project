#pragma once
#include "CoreMinimal.h"
#include "Components/NativeWidgetHost.h"
#include "PolarisWidgetBlueprintSelectedDelegate.h"
#include "PolarisWidgetBlueprintSelectBox.generated.h"

UCLASS(Blueprintable)
class POLARIS_API UPolarisWidgetBlueprintSelectBox : public UNativeWidgetHost {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPolarisWidgetBlueprintSelected OnSelected;
    
    UPolarisWidgetBlueprintSelectBox();

};

