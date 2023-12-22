#pragma once
#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "KamuiNetworkLibraryGameInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class KAMUINETWORKPLUGIN_API UKamuiNetworkLibraryGameInstance : public UGameInstance {
    GENERATED_BODY()
public:
    UKamuiNetworkLibraryGameInstance();

};

