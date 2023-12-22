#include "PolarisBattleCameraPawn.h"
#include "Components/BoxComponent.h"

APolarisBattleCameraPawn::APolarisBattleCameraPawn(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("Box"));
    this->BoxComponent = (UBoxComponent*)RootComponent;
}


