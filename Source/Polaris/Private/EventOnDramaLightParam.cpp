#include "EventOnDramaLightParam.h"

FEventOnDramaLightParam::FEventOnDramaLightParam() {
    this->bIsAvailable = false;
    this->player_id = 0;
    this->light_pos = EDramaLightOriginPositionType::POS_CENTER;
    this->start_frame = 0;
    this->end_frame = 0;
    this->Height = 0.00f;
    this->contact_shadow_length = 0.00f;
    this->attenuation_radius = 0.00f;
    this->character_specular_spec_scale = 0.00f;
    this->light_material_color_scale_r = 0.00f;
    this->light_material_color_scale_g = 0.00f;
    this->light_material_color_scale_b = 0.00f;
}

