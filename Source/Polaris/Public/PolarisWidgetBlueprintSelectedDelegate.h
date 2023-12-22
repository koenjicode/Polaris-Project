#pragma once
#include "CoreMinimal.h"
#include "PolarisWidgetBlueprintSelectBox_TextWidgetInfo.h"
#include "PolarisWidgetBlueprintSelectedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FPolarisWidgetBlueprintSelected, const TArray<FPolarisWidgetBlueprintSelectBox_TextWidgetInfo>&, Info);

