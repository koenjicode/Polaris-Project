#include "PolarisParentalControl.h"

UPolarisParentalControl::UPolarisParentalControl() {
}

EPolarisParentalControlStatus UPolarisParentalControl::GetStatusNoMultiplayCheck(EPolarisParentalControlType InType) const {
    return EPolarisParentalControlStatus::Unknown;
}

EPolarisParentalControlStatus UPolarisParentalControl::GetStatus(EPolarisParentalControlType InType) const {
    return EPolarisParentalControlStatus::Unknown;
}


