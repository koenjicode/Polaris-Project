#pragma once
#include "CoreMinimal.h"
#include "Components/WrapBox.h"
#include "DebugScalabilityRadioButton.generated.h"

UCLASS(Abstract, Blueprintable)
class POLARIS_API UDebugScalabilityRadioButton : public UWrapBox {
    GENERATED_BODY()
public:
    UDebugScalabilityRadioButton();

};

