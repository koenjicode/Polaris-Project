#include "EventOnChangePostProcessScalarParam.h"

FEventOnChangePostProcessScalarParam::FEventOnChangePostProcessScalarParam() {
    this->Type = EPostProcessScalarType::Saturation;
    this->targetRelativeValue = 0.00f;
    this->interpolationFrames = 0;
    this->cosineInterpolation = false;
    this->isCharacter = false;
}

