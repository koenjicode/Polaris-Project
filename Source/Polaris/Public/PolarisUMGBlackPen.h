#pragma once
#include "CoreMinimal.h"
#include "BlackPen.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGBlackPen.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class POLARIS_API UPolarisUMGBlackPen : public UPolarisUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBlackPen> IconDatas;
    
public:
    UPolarisUMGBlackPen();

};

