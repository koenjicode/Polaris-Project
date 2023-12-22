#include "PhotoMouseInput.h"

FPhotoMouseInput::FPhotoMouseInput() {
    this->LB = false;
    this->RB = false;
    this->MB = false;
    this->MX = 0.00f;
    this->MY = 0.00f;
    this->MX_Prev = 0.00f;
    this->MY_Prev = 0.00f;
    this->M_Move_X = 0.00f;
    this->M_Move_Y = 0.00f;
}

