#pragma once
#include "CoreMinimal.h"
#include "Components/Button.h"
#include "DebugAccessibilityButton.generated.h"

UCLASS(Abstract, Blueprintable)
class POLARIS_API UDebugAccessibilityButton : public UButton {
    GENERATED_BODY()
public:
    UDebugAccessibilityButton();

};

