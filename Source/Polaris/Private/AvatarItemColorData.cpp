#include "AvatarItemColorData.h"

FAvatarItemColorData::FAvatarItemColorData() {
    this->color_type = EAvatarColorType::Skin;
    this->material_id = 0;
    this->color_palette_id = 0;
    this->focus_part_type = EAvatarPartType::Face;
}

