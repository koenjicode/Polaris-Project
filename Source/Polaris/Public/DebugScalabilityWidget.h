#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "DebugScalabilityWidget.generated.h"

class UWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class POLARIS_API UDebugScalabilityWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UDebugScalabilityWidget();

    UFUNCTION(BlueprintCallable)
    UWidget* GetWidgetTreeRoot();
    
};

