#pragma once
#include "CoreMinimal.h"
#include "Engine/GameViewportClient.h"
#include "PolarisGameViewportClient.generated.h"

UCLASS(Blueprintable, NonTransient)
class POLARIS_API UPolarisGameViewportClient : public UGameViewportClient {
    GENERATED_BODY()
public:
    UPolarisGameViewportClient();

};

