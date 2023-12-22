#pragma once
#include "CoreMinimal.h"
#include "Subsystems/EngineSubsystem.h"
#include "EColorFilterType.h"
#include "EColorSupportType.h"
#include "EMaskCharacterFilterType.h"
#include "EMaskStageFilterType.h"
#include "PolarisLightOptionSubsystem.generated.h"

UCLASS(Blueprintable)
class POLARIS_API UPolarisLightOptionSubsystem : public UEngineSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EffectBrightness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ColorFilterLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CharacterFilterLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EColorSupportType ColorSupportType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EColorFilterType ColorFilterType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMaskCharacterFilterType CharacterFilterType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMaskStageFilterType StageFilterType;
    
    UPolarisLightOptionSubsystem();

};

