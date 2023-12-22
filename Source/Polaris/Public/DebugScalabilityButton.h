#pragma once
#include "CoreMinimal.h"
#include "Components/Button.h"
#include "DebugScalabilityButton.generated.h"

UCLASS(Abstract, Blueprintable)
class POLARIS_API UDebugScalabilityButton : public UButton {
    GENERATED_BODY()
public:
    UDebugScalabilityButton();

};

