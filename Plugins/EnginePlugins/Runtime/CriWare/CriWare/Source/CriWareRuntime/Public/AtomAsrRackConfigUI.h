#pragma once
#include "CoreMinimal.h"
#include "EAtomSoundRendererType.h"
#include "AtomAsrRackConfigUI.generated.h"

USTRUCT(BlueprintType)
struct FAtomAsrRackConfigUI {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EAtomSoundRendererType::Type> SoundRendererTypeUI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ElementID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseOutputPort;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UserIndex;
    
    CRIWARERUNTIME_API FAtomAsrRackConfigUI();
};

