#include "PolarisItemFunctionLibrary.h"

UPolarisItemFunctionLibrary::UPolarisItemFunctionLibrary() {
}

void UPolarisItemFunctionLibrary::UnregisterOverrideToneId(int32 PlayerNumber, int32 SourceSoundID) {
}

void UPolarisItemFunctionLibrary::RegisterOverrideToneId(int32 PlayerNumber, int32 SourceSoundID, int32 DestinationSoundID) {
}

int32 UPolarisItemFunctionLibrary::GetWinnerPlayerNumber() {
    return 0;
}

FTransform UPolarisItemFunctionLibrary::FinalizeTransformForConstraintItem(const FTransform& Transform) {
    return FTransform{};
}

FTransform UPolarisItemFunctionLibrary::ConvertTransformMayaToUE4(const FTransform& Transform) {
    return FTransform{};
}


