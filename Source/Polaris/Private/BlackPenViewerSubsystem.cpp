#include "BlackPenViewerSubsystem.h"

UBlackPenViewerSubsystem::UBlackPenViewerSubsystem() {
    this->m_character_viewer_controller = NULL;
    this->m_avatar_viewer_controller = NULL;
    this->m_plcust_viewer_controller = NULL;
    this->m_profcust_viewer_controller = NULL;
    this->m_image_viewer_controller = NULL;
}

void UBlackPenViewerSubsystem::SetProfCustViewerController(ABlackPenProfCustViewerController* Controller) {
}

void UBlackPenViewerSubsystem::SetPlCustViewerController(ABlackPenPlCustViewerController* Controller) {
}

void UBlackPenViewerSubsystem::SetImageViewerController(ABlackPenImageViewerController* Controller) {
}

void UBlackPenViewerSubsystem::SetCharacterViewerController(ABlackPenCharacterViewerController* Controller) {
}

void UBlackPenViewerSubsystem::SetAvatarViewerController(ABlackPenAvatarViewerController* Controller) {
}

ABlackPenProfCustViewerController* UBlackPenViewerSubsystem::GetProfCustViewerController() const {
    return NULL;
}

ABlackPenPlCustViewerController* UBlackPenViewerSubsystem::GetPlCustViewerController() const {
    return NULL;
}

ABlackPenImageViewerController* UBlackPenViewerSubsystem::GetImageViewerController() const {
    return NULL;
}

ABlackPenCharacterViewerController* UBlackPenViewerSubsystem::GetCharacterViewerController() const {
    return NULL;
}

ABlackPenAvatarViewerController* UBlackPenViewerSubsystem::GetAvatarViewerController() const {
    return NULL;
}


