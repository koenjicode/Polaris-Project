#include "PolarisUMGCharacterCustomizeSEST.h"

UPolarisUMGCharacterCustomizeSEST::UPolarisUMGCharacterCustomizeSEST() {
}

























int32 UPolarisUMGCharacterCustomizeSEST::MakeCallbakId(EUMG_CUS_ST_CallbackCategory Category, int32 ID, EUMG_CUS_ST_ButtonType Type) {
    return 0;
}




void UPolarisUMGCharacterCustomizeSEST::InvokeValueChangeCallback(int32 ID, float Value) {
}

void UPolarisUMGCharacterCustomizeSEST::InvokeSelectCallback(int32 ID) {
}

void UPolarisUMGCharacterCustomizeSEST::InvokeButtonClickCallback(int32 ID) {
}









int32 UPolarisUMGCharacterCustomizeSEST::GetCallbakId(int32 ID) {
    return 0;
}

EUMG_CUS_ST_CallbackCategory UPolarisUMGCharacterCustomizeSEST::GetCallbakCategory(int32 ID) {
    return EUMG_CUS_ST_CallbackCategory::SESTCategory;
}

EUMG_CUS_ST_ButtonType UPolarisUMGCharacterCustomizeSEST::GetCallbakButtonType(int32 ID) {
    return EUMG_CUS_ST_ButtonType::Menu;
}




