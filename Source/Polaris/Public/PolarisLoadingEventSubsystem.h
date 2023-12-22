#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "Request.h"
#include "PolarisLoadingEventSubsystem.generated.h"

UCLASS(Blueprintable)
class POLARIS_API UPolarisLoadingEventSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRequest> m_ReauestQueue;
    
public:
    UPolarisLoadingEventSubsystem();

};

