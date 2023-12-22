#include "CustomizeItemDataUI.h"

FCustomizeItemDataUI::FCustomizeItemDataUI() {
    this->item_unique_id = 0;
    this->item_common_id = 0;
    this->fighter_id = 0;
    this->item_position_id = 0;
    this->default_flag = CUS_DefaultFlagEnum::CUS_DefaultFlag_None;
    this->rarety = 0;
    this->price = 0;
    this->is_new = false;
    this->is_lock = false;
    this->is_equip = false;
    this->is_fight_money = false;
    this->is_ingame_store = false;
    this->is_color_editable = false;
    this->is_sp_effect = false;
    this->is_variation = false;
    this->is_common = false;
    this->is_testing = false;
    this->palette_type = CUS_ColorPaletteEnum::ColorPalette_Default;
    this->is_exclusive = false;
    this->is_reset = false;
    this->is_remove = false;
    this->thumbnail = NULL;
}

