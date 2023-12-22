#include "PolarisRadialForceActor.h"
#include "PolarisRadialForceComponent.h"

APolarisRadialForceActor::APolarisRadialForceActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<UPolarisRadialForceComponent>(TEXT("ForceComponent0"));
    this->ForceComponent = (UPolarisRadialForceComponent*)RootComponent;
    this->WindDirectionalSourceComponent = NULL;
    this->IsWind = false;
    this->EndTime = 0.00f;
    this->StartRadius = 0.00f;
    this->EndRadius = 0.00f;
    this->ImpulseInterval = 0.00f;
    this->Timer = 0.00f;
    this->LIFE = 0.00f;
    this->DelayImpluseMaxCount = 0;
    this->DelayImpluseInterval = 0;
}


