#pragma once
#include "CoreMinimal.h"
#include "Components/VerticalBox.h"
#include "DebugScalabilityMenuItem.generated.h"

UCLASS(Abstract, Blueprintable)
class POLARIS_API UDebugScalabilityMenuItem : public UVerticalBox {
    GENERATED_BODY()
public:
    UDebugScalabilityMenuItem();

};

