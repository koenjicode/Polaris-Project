#include "PolarisUMGFunctionLibrary.h"

UPolarisUMGFunctionLibrary::UPolarisUMGFunctionLibrary() {
}

void UPolarisUMGFunctionLibrary::UseManaDecrypter() {
}

void UPolarisUMGFunctionLibrary::UnuseManaDecrypter() {
}

void UPolarisUMGFunctionLibrary::ShowMouseCursor(UObject* contextObject, bool is_forced) {
}

void UPolarisUMGFunctionLibrary::ShowBattleSubtitleFromId(const FString& ID, int32 frame) {
}

void UPolarisUMGFunctionLibrary::ShowBattleSubtitleFromHash(int64 ID, int32 frame) {
}

void UPolarisUMGFunctionLibrary::ShowBattleSubtitle(const FText& Text, int32 frame) {
}

void UPolarisUMGFunctionLibrary::SetTimerDelegate(int32 ID, FTimerDynamicDelegate Delegate, float Time, float initial_start_delay) {
}

void UPolarisUMGFunctionLibrary::RemoveViewportInGameInstance() {
}

void UPolarisUMGFunctionLibrary::LoadBinary(const FString& file_name, TArray<uint8>& Data, bool& is_success) {
}

bool UPolarisUMGFunctionLibrary::JudgeMouseInput(FVector Value) {
    return false;
}

void UPolarisUMGFunctionLibrary::InvokeKamuiCallback() {
}

void UPolarisUMGFunctionLibrary::HideMouseCursor(UObject* contextObject, bool is_forced) {
}

float UPolarisUMGFunctionLibrary::GetTimeRemapFrame(const UCurveFloat* Curve, float frame) {
    return 0.0f;
}

TArray<UTexture2D*> UPolarisUMGFunctionLibrary::GetTexturesInDirectory(const FString& Directory) {
    return TArray<UTexture2D*>();
}

TArray<UPolarisTextBlock*> UPolarisUMGFunctionLibrary::GetPolarisTextBlocks(UObject* Object) {
    return TArray<UPolarisTextBlock*>();
}

TArray<UPolarisRichTextBlock*> UPolarisUMGFunctionLibrary::GetPolarisRichTextBlocks(UObject* Object) {
    return TArray<UPolarisRichTextBlock*>();
}

FText UPolarisUMGFunctionLibrary::GetLocalizeText(const FString& ID) {
    return FText::GetEmpty();
}

float UPolarisUMGFunctionLibrary::GetCriAtomStreamingTotalBps() {
    return 0.0f;
}

TArray<FString> UPolarisUMGFunctionLibrary::GetAssetNamesInDirectory(const FString& Directory, bool without_extension) {
    return TArray<FString>();
}

float UPolarisUMGFunctionLibrary::FrameToSecond(float frame, float frame_rate) {
    return 0.0f;
}

void UPolarisUMGFunctionLibrary::CreateHSVTexture(const FString& Name, int32 Width, int32 Height, float min_h, float max_h) {
}

void UPolarisUMGFunctionLibrary::ClearTimerDelegate(int32 ID) {
}

bool UPolarisUMGFunctionLibrary::CheckNewlineCharacter(const FString& str) {
    return false;
}

void UPolarisUMGFunctionLibrary::ApplyMouseCursor() {
}

FText UPolarisUMGFunctionLibrary::ApplyGaijiTable(const FText& Text) {
    return FText::GetEmpty();
}

void UPolarisUMGFunctionLibrary::AddToViewportInGameInstance(UUserWidget* Widget, int32 Order) {
}


