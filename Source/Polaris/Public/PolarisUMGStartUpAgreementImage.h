#pragma once
#include "CoreMinimal.h"
#include "PolarisUMGStartUpAgreement.h"
#include "PolarisUMGStartUpAgreementImage.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class POLARIS_API UPolarisUMGStartUpAgreementImage : public UPolarisUMGStartUpAgreement {
    GENERATED_BODY()
public:
    UPolarisUMGStartUpAgreementImage();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetLanguage(int32 lang);
    
};

