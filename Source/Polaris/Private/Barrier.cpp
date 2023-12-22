#include "Barrier.h"

ABarrier::ABarrier(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

FBarrierInitializeRequestOne ABarrier::PopInitializeRequest() {
    return FBarrierInitializeRequestOne{};
}


