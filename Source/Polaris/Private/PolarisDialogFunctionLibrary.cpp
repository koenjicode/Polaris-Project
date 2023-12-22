#include "PolarisDialogFunctionLibrary.h"

UPolarisDialogFunctionLibrary::UPolarisDialogFunctionLibrary() {
}

void UPolarisDialogFunctionLibrary::SetDialogDescription(const FString& Text, bool is_text_id) {
}

void UPolarisDialogFunctionLibrary::SetDialogCursor(int32 Index) {
}

void UPolarisDialogFunctionLibrary::SetDialogCloseAsCancel(bool flag) {
}

void UPolarisDialogFunctionLibrary::SetDialogCancelEnable(bool flag) {
}

void UPolarisDialogFunctionLibrary::SetDialogButtonText(int32 Index, const FString& Text, bool is_text_id) {
}

void UPolarisDialogFunctionLibrary::SetDialogButtonEnable(int32 Index, bool flag) {
}

void UPolarisDialogFunctionLibrary::OpenDialogEx2(const FString& Description, int32 defaultCursor, const TArray<FPolarisDialogButtonParam>& Params, FPolarisDialogButtonDelegate OnOpening, FPolarisDialogButtonDelegate OnCancel, bool IsTextId, bool cancelEnable, bool closeAsCancel, int32 display_side, bool butonCentering, bool buttonHelpTypeUserManual) {
}

void UPolarisDialogFunctionLibrary::OpenDialogEx(const FString& Description, int32 defaultCursor, const TArray<FPolarisDialogButtonParam>& Params, FPolarisDialogButtonDelegate OnOpening, bool IsTextId, int32 display_side) {
}

void UPolarisDialogFunctionLibrary::OpenDialog(const FString& Description, int32 defaultCursor, const TArray<FPolarisDialogButtonParam>& Params, bool IsTextId, int32 display_side) {
}

bool UPolarisDialogFunctionLibrary::IsDialogDecided() {
    return false;
}

bool UPolarisDialogFunctionLibrary::IsDialogClosed() {
    return false;
}

int32 UPolarisDialogFunctionLibrary::GetDialogCursor() {
    return 0;
}

void UPolarisDialogFunctionLibrary::CloseDialog() {
}


