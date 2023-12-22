#include "DebugHDRSettingsWidget.h"

UDebugHDRSettingsWidget::UDebugHDRSettingsWidget() : UUserWidget(FObjectInitializer::Get()) {
}


void UDebugHDRSettingsWidget::SetUILuminance(float Luminance) {
}

void UDebugHDRSettingsWidget::SetUILevel(float Level) {
}

void UDebugHDRSettingsWidget::SetMinimumLuminance(float Value) {
}

void UDebugHDRSettingsWidget::SetMiddleLuminance(float Value) {
}

void UDebugHDRSettingsWidget::SetMaximumLuminance(float Value) {
}

void UDebugHDRSettingsWidget::SetAcesColorMultiplier(float Value) {
}


bool UDebugHDRSettingsWidget::IsEnabledHDROutput() {
    return false;
}

float UDebugHDRSettingsWidget::GetUILuminance() {
    return 0.0f;
}

float UDebugHDRSettingsWidget::GetUILevel() {
    return 0.0f;
}

float UDebugHDRSettingsWidget::GetMinimumLuminance() {
    return 0.0f;
}

float UDebugHDRSettingsWidget::GetMiddleLuminance() {
    return 0.0f;
}

float UDebugHDRSettingsWidget::GetMaximumLuminance() {
    return 0.0f;
}

float UDebugHDRSettingsWidget::GetAcesColorMultiplier() {
    return 0.0f;
}

void UDebugHDRSettingsWidget::EnableHDROutput(bool Enable, int32 Nits) {
}


