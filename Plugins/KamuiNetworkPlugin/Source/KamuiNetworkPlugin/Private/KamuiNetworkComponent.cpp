#include "KamuiNetworkComponent.h"

UKamuiNetworkComponent::UKamuiNetworkComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UKamuiNetworkComponent::SetMyLocalTransform(FTransform position) {
}

bool UKamuiNetworkComponent::IsConnectedPeer() {
    return false;
}

FTransform UKamuiNetworkComponent::GetPeerTransform() {
    return FTransform{};
}


