#include "PolarisStoreFunctionLibrary.h"

UPolarisStoreFunctionLibrary::UPolarisStoreFunctionLibrary() {
}

bool UPolarisStoreFunctionLibrary::IsSpecificLogoDisplayRequiredInStore() {
    return false;
}

bool UPolarisStoreFunctionLibrary::IsAlertNeededInStore() {
    return false;
}

int32 UPolarisStoreFunctionLibrary::GetUpdateVcNoInStore() {
    return 0;
}

int32 UPolarisStoreFunctionLibrary::GetCurrentVcNumInStore() {
    return 0;
}


