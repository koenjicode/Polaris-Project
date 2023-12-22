#include "PolarisUMGStageSelect.h"

UPolarisUMGStageSelect::UPolarisUMGStageSelect() {
}







void UPolarisUMGStageSelect::InvokeSelectCallback(int32 ID) {
}

void UPolarisUMGStageSelect::InvokeDecideMovieCallback() {
}

void UPolarisUMGStageSelect::InvokeDecideCallback(int32 ID) {
}

TArray<int32> UPolarisUMGStageSelect::GetStageSelectableList() {
    return TArray<int32>();
}

FString UPolarisUMGStageSelect::GetStageNameTextId(int32 stageId) {
    return TEXT("");
}

UTexture2D* UPolarisUMGStageSelect::GetPanelTexture(const int32 stageId) {
    return NULL;
}

UTexture2D* UPolarisUMGStageSelect::GetNameTexture(const int32 stageId) {
    return NULL;
}

UTexture2D* UPolarisUMGStageSelect::GetMapTexture(const int32 stageId) {
    return NULL;
}

FString UPolarisUMGStageSelect::GetLoopMovieName(int32 stageId) {
    return TEXT("");
}

FString UPolarisUMGStageSelect::GetDecideMovieName(int32 stageId) {
    return TEXT("");
}

UTexture2D* UPolarisUMGStageSelect::GetBgTexture(const int32 stageId) {
    return NULL;
}







