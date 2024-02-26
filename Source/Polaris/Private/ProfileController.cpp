#include "ProfileController.h"

AProfileController::AProfileController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->InputEnabled = false;
}














void AProfileController::OnEndedEdit(bool is_save) {
}




void AProfileController::OnChangedViewType(int32 view_type) {
}


bool AProfileController::IsLightLevelLoaded(int32 view_type) {
    return false;
}

bool AProfileController::IsEnableInput() {
    return false;
}















