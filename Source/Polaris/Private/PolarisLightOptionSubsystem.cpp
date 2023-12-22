#include "PolarisLightOptionSubsystem.h"

UPolarisLightOptionSubsystem::UPolarisLightOptionSubsystem() {
    this->EffectBrightness = -1;
    this->ColorFilterLevel = 0;
    this->CharacterFilterLevel = 0;
    this->ColorSupportType = EColorSupportType::COLOR_SUPPORT_OFF;
    this->ColorFilterType = EColorFilterType::COLOR_FILTER_NONE;
    this->CharacterFilterType = EMaskCharacterFilterType::MASK_CH_NONE;
    this->StageFilterType = EMaskStageFilterType::MASK_STAGE_NONE;
}


