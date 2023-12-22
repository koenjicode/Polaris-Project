#include "PolarisTextBlock.h"

UPolarisTextBlock::UPolarisTextBlock() {
    this->FontType = EPolarisTextBlockFontType::Normal;
    this->bSizeFit = false;
    this->ArabicPivotType = EPolarisTextBlockArabicPivotType::Right;
    this->ArabicJustification = ETextJustify::Right;
    this->bArabicForceRLM = false;
    this->bOverride_ArabicTextFlowDirection = false;
    this->ArabicTextFlowDirection = ETextFlowDirection::Auto;
}

void UPolarisTextBlock::SetTextID(const FString& NewTextId) {
}

void UPolarisTextBlock::SetRawText(const FString& raw_text, bool ReplaceUnsupportedCharacter) {
}

void UPolarisTextBlock::SetLineHeightPercentage(float Value) {
}

void UPolarisTextBlock::SetFontType(EPolarisTextBlockFontType Type) {
}

void UPolarisTextBlock::RefreshText() {
}

void UPolarisTextBlock::CalculateSizeFit() {
}


