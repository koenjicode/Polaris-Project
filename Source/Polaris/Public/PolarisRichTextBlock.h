#pragma once
#include "CoreMinimal.h"
#include "Framework/Text/TextLayout.h"
#include "Components/RichTextBlock.h"
#include "EPolarisRichTextBlockArabicPivotType.h"
#include "EPolarisRichTextBlockOpacityType.h"
#include "EPolarisTextBlockFontType.h"
#include "PolarisRichTextBlock.generated.h"

class UCurveFloat;

UCLASS(Blueprintable)
class POLARIS_API UPolarisRichTextBlock : public URichTextBlock {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPolarisTextBlockFontType FontType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString textId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseScroll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* BeginCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* EndCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StepSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPolarisRichTextBlockOpacityType OpacityType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsReverse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsFixedRightAlignment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPolarisRichTextBlockArabicPivotType ArabicPivotType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ETextJustify::Type> ArabicJustification;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bArabicForceRLM;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FText RawText;
    
public:
    UPolarisRichTextBlock();

    UFUNCTION(BlueprintCallable)
    void UpdateElapsedTime(float delta_time);
    
    UFUNCTION(BlueprintCallable)
    void SetTextID(const FString& NewTextId);
    
    UFUNCTION(BlueprintCallable)
    void SetRawText(const FText& raw_text, bool ReplaceUnsupportedCharacter);
    
    UFUNCTION(BlueprintCallable)
    void SetLineHeightPercentage(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetElapsedTime(float Time);
    
    UFUNCTION(BlueprintCallable)
    void ResetElapsedTime();
    
    UFUNCTION(BlueprintCallable)
    void RefreshText();
    
};

