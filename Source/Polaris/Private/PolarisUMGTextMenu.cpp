#include "PolarisUMGTextMenu.h"

UPolarisUMGTextMenu::UPolarisUMGTextMenu() {
}

void UPolarisUMGTextMenu::TransitionPrevMenu() {
}

void UPolarisUMGTextMenu::TransitionNextMenu() {
}

void UPolarisUMGTextMenu::SubCurrentMenuParam() {
}

void UPolarisUMGTextMenu::StartTextMenu(int32 ID) {
}

void UPolarisUMGTextMenu::SetSelectable(int32 ID, bool flag) {
}

void UPolarisUMGTextMenu::SetMenuParam(int32 ID, int32 Param) {
}

void UPolarisUMGTextMenu::SetCurrentMenuParam(int32 Param) {
}

void UPolarisUMGTextMenu::RefreshCommand(int32 ID) {
}

UTextBlock* UPolarisUMGTextMenu::GetMenuText(int32 ID) const {
    return NULL;
}

int32 UPolarisUMGTextMenu::GetMenuParam(int32 ID) const {
    return 0;
}

UTextBlock* UPolarisUMGTextMenu::GetCurrentMenuText() const {
    return NULL;
}

int32 UPolarisUMGTextMenu::GetCurrentMenuParam() const {
    return 0;
}

int32 UPolarisUMGTextMenu::GetCurrentMenuIndex() const {
    return 0;
}

int32 UPolarisUMGTextMenu::GetCurrentMenuId() const {
    return 0;
}

void UPolarisUMGTextMenu::ExecCommand(int32 ID) {
}

void UPolarisUMGTextMenu::AddCurrentMenuParam() {
}

void UPolarisUMGTextMenu::AddCommand(int32 ID, FPolarisUMGTextMenuDelegate Activate, FPolarisUMGTextMenuDelegate inactivate, FPolarisUMGTextMenuEditingDelegate editing, FPolarisUMGTextMenuSelectableDelegate selectable, FPolarisUMGTextMenuClampDelegate Clamp, UTextBlock* Text, int32 Param, int32 step, bool is_selectable) {
}


