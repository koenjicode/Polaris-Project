#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DebugScalabilityWidget.h"
#include "DebugScalabilityWidgetMenu.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class POLARIS_API UDebugScalabilityWidgetMenu : public UDebugScalabilityWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool NeedsClose;
    
    UDebugScalabilityWidgetMenu();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SyncFocus(bool isFocus);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetPosition(const FVector2D& position);
    
};

