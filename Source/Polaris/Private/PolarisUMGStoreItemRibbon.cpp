#include "PolarisUMGStoreItemRibbon.h"

UPolarisUMGStoreItemRibbon::UPolarisUMGStoreItemRibbon() : UUserWidget(FObjectInitializer::Get()) {
    this->TB_Title = NULL;
    this->plate_free = NULL;
    this->plate_recommend = NULL;
    this->plate_popular = NULL;
    this->plate_pricedown = NULL;
    this->plate_new = NULL;
}

void UPolarisUMGStoreItemRibbon::RepItemInfo_Implementation(const FName& sell_id) {
}


