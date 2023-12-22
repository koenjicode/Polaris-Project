#pragma once
#include "CoreMinimal.h"
#include "GameFramework/CheatManager.h"
#include "DebugPolarisCheatManager.generated.h"

UCLASS(Blueprintable)
class POLARIS_API UDebugPolarisCheatManager : public UCheatManager {
    GENERATED_BODY()
public:
    UDebugPolarisCheatManager();

    UFUNCTION(BlueprintCallable, Exec)
    void PolarisShowMouseCursor(bool bShow);
    
};

