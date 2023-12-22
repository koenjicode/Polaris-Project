#pragma once
#include "CoreMinimal.h"
#include "Components/Slider.h"
#include "DebugScalabilitySlider.generated.h"

UCLASS(Abstract, Blueprintable)
class POLARIS_API UDebugScalabilitySlider : public USlider {
    GENERATED_BODY()
public:
    UDebugScalabilitySlider();

};

