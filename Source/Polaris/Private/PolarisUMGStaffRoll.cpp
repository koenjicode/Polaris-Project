#include "PolarisUMGStaffRoll.h"

UPolarisUMGStaffRoll::UPolarisUMGStaffRoll() {
}

void UPolarisUMGStaffRoll::SetStaffrollParam(float scroll_speed, int32 line_size, int32 font_size_TITLE_1, int32 font_size_TITLE_2, int32 font_size_TITLE_3, int32 font_size_TITLE_4, int32 font_size_TITLE_5, int32 font_size_BOLD, int32 font_size_NAME, int32 font_size_AUTHOR_TITLE, int32 font_size_RIGHT_NOTATION) {
}

void UPolarisUMGStaffRoll::SetLogoTex(UTexture2D* tex) {
}

void UPolarisUMGStaffRoll::SetIsTextureLoadingFinished(bool flag) {
}

void UPolarisUMGStaffRoll::SetIsPause(bool flag) {
}

void UPolarisUMGStaffRoll::SetIsFinished(bool flag) {
}

void UPolarisUMGStaffRoll::SetIsFbsLoadingFinished(bool flag) {
}

void UPolarisUMGStaffRoll::SetIsFadout(bool flag) {
}

void UPolarisUMGStaffRoll::SetFastForwardValue(int32 Value) {
}


FStaffRollParamStruct UPolarisUMGStaffRoll::GetStaffrollParam() {
    return FStaffRollParamStruct{};
}

TArray<FString> UPolarisUMGStaffRoll::GetLogoTypeArray() {
    return TArray<FString>();
}

TArray<UTexture2D*> UPolarisUMGStaffRoll::GetLogoTexArray() {
    return TArray<UTexture2D*>();
}

bool UPolarisUMGStaffRoll::GetIsTextureLoadingFinished() {
    return false;
}

bool UPolarisUMGStaffRoll::GetIsPause() {
    return false;
}

bool UPolarisUMGStaffRoll::GetIsFinished() {
    return false;
}

bool UPolarisUMGStaffRoll::GetIsFbsLoadingFinished() {
    return false;
}

bool UPolarisUMGStaffRoll::GetIsFadeOut() {
    return false;
}

TArray<FStaffRollFbsDataStruct> UPolarisUMGStaffRoll::GetFbsRowData() {
    return TArray<FStaffRollFbsDataStruct>();
}

int32 UPolarisUMGStaffRoll::GetFastForwardValue() {
    return 0;
}



void UPolarisUMGStaffRoll::AddLogoType(const FString& logo_type) {
}

void UPolarisUMGStaffRoll::AddFbsRowData(FStaffRollFbsDataStruct fbsdata) {
}


