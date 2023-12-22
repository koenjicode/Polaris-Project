#pragma once
#include "CoreMinimal.h"
#include "PolarisUserWidget.h"
#include "PolarisPS5TournamentsStart.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class POLARIS_API UPolarisPS5TournamentsStart : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisPS5TournamentsStart();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetWallpaper(int32 Index);
    
};

