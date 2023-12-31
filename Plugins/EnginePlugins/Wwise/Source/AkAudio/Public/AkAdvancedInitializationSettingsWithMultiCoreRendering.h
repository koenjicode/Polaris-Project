#pragma once
#include "CoreMinimal.h"
#include "AkAdvancedInitializationSettings.h"
#include "AkAdvancedInitializationSettingsWithMultiCoreRendering.generated.h"

USTRUCT(BlueprintType)
struct FAkAdvancedInitializationSettingsWithMultiCoreRendering : public FAkAdvancedInitializationSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnableMultiCoreRendering;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 MaxNumJobWorkers;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 JobWorkerMaxExecutionTimeUSec;
    
    AKAUDIO_API FAkAdvancedInitializationSettingsWithMultiCoreRendering();
};

