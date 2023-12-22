#include "CatwalkClothSettings.h"

UCatwalkClothSettings::UCatwalkClothSettings() {
    this->MaxAdaptiveIterationRatio = 2.00f;
    this->MaxAbsoluteAdaptiveIterations = 32;
    this->MaxSimulationDeltaTime = 0.03f;
    this->SubstepThreshold = 0.05f;
}


