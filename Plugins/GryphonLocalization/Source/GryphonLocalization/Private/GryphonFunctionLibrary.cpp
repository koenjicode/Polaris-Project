#include "GryphonFunctionLibrary.h"

UGryphonFunctionLibrary::UGryphonFunctionLibrary() {
}

void UGryphonFunctionLibrary::UnregisterAsset(const FString& Category) {
}

void UGryphonFunctionLibrary::RegisterAsset(const FString& Category, const FString& AssetName) {
}

bool UGryphonFunctionLibrary::HasText(const FString& textId) {
    return false;
}

FText UGryphonFunctionLibrary::GetText(const FString& textId) {
    return FText::GetEmpty();
}

FString UGryphonFunctionLibrary::GetString(const FString& textId) {
    return TEXT("");
}


