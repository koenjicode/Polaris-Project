#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "DebugAccessibilityWidget.generated.h"

class UWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class POLARIS_API UDebugAccessibilityWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UDebugAccessibilityWidget();

    UFUNCTION(BlueprintCallable)
    UWidget* GetWidgetTreeRoot();
    
};

