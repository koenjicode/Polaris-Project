#include "JiggleParam.h"

FJiggleParam::FJiggleParam() {
    this->translateEnabled = false;
    this->rotateEnabled = false;
    this->scaleEnabled = false;
    this->Envelope = 0.00f;
    this->Stiffness = 0.00f;
    this->Damping = 0.00f;
    this->translateXLimit = false;
    this->translateXMin = 0.00f;
    this->translateXMax = 0.00f;
    this->translateYLimit = false;
    this->translateYMin = 0.00f;
    this->translateYMax = 0.00f;
    this->translateZLimit = false;
    this->translateZMin = 0.00f;
    this->translateZMax = 0.00f;
    this->rotateXLimit = false;
    this->rotateXMin = 0.00f;
    this->rotateXMax = 0.00f;
    this->rotateYLimit = false;
    this->rotateYMin = 0.00f;
    this->rotateYMax = 0.00f;
    this->rotateZLimit = false;
    this->rotateZMin = 0.00f;
    this->rotateZMax = 0.00f;
    this->scaleXLimit = false;
    this->scaleXMin = 0.00f;
    this->scaleXMax = 0.00f;
    this->scaleYLimit = false;
    this->scaleYMin = 0.00f;
    this->scaleYMax = 0.00f;
    this->scaleZLimit = false;
    this->scaleZMin = 0.00f;
    this->scaleZMax = 0.00f;
}

