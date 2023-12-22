#pragma once
#include "CoreMinimal.h"
#include "Widgets/Text/ISlateEditableTextWidget.h"
#include "Components/SlateWrapperTypes.h"
#include "Components/MultiLineEditableText.h"
#include "PolarisMultiLineEditableText.generated.h"

UCLASS(Blueprintable)
class POLARIS_API UPolarisMultiLineEditableText : public UMultiLineEditableText {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EVirtualKeyboardType::Type> KeyboardType;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVirtualKeyboardTrigger VirtualKeyboardTrigger;
    
    UPolarisMultiLineEditableText();

};

