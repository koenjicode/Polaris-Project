#include "PolarisRichTextBlock.h"

UPolarisRichTextBlock::UPolarisRichTextBlock() : URichTextBlock(FObjectInitializer::Get()) {
    this->FontType = EPolarisTextBlockFontType::Normal;
    this->bUseScroll = false;
    this->BeginCurve = NULL;
    this->EndCurve = NULL;
    this->StepSpeed = 600.00f;
    this->OpacityType = EPolarisRichTextBlockOpacityType::None;
    this->IsReverse = false;
    this->IsFixedRightAlignment = false;
    this->ArabicPivotType = EPolarisRichTextBlockArabicPivotType::Right;
    this->ArabicJustification = ETextJustify::Right;
    this->bArabicForceRLM = false;
}

void UPolarisRichTextBlock::UpdateElapsedTime(float delta_time) {
}

void UPolarisRichTextBlock::SetTextID(const FString& NewTextId) {
}

void UPolarisRichTextBlock::SetRawText(const FText& raw_text, bool ReplaceUnsupportedCharacter) {
}

void UPolarisRichTextBlock::SetLineHeightPercentage(float Value) {
}

void UPolarisRichTextBlock::SetElapsedTime(float Time) {
}

void UPolarisRichTextBlock::ResetElapsedTime() {
}

void UPolarisRichTextBlock::RefreshText() {
}


