#pragma once
#include "CoreMinimal.h"
#include "Framework/Text/TextLayout.h"
#include "Framework/Text/TextLayout.h"
#include "Components/TextBlock.h"
#include "EPolarisTextBlockArabicPivotType.h"
#include "EPolarisTextBlockFontType.h"
#include "PolarisTextBlock.generated.h"

UCLASS(Blueprintable)
class POLARIS_API UPolarisTextBlock : public UTextBlock {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPolarisTextBlockFontType FontType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString textId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSizeFit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPolarisTextBlockArabicPivotType ArabicPivotType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ETextJustify::Type> ArabicJustification;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bArabicForceRLM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverride_ArabicTextFlowDirection;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETextFlowDirection ArabicTextFlowDirection;
    
    UPolarisTextBlock();

    UFUNCTION(BlueprintCallable)
    void SetTextID(const FString& NewTextId);
    
    UFUNCTION(BlueprintCallable)
    void SetRawText(const FString& raw_text, bool ReplaceUnsupportedCharacter);
    
    UFUNCTION(BlueprintCallable)
    void SetLineHeightPercentage(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetFontType(EPolarisTextBlockFontType Type);
    
    UFUNCTION(BlueprintCallable)
    void RefreshText();
    
    UFUNCTION(BlueprintCallable)
    void CalculateSizeFit();
    
};

