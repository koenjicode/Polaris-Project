#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PolarisRichTextBlock.h"
#include "PolarisSubtitleTextBlock.generated.h"

UCLASS(Blueprintable)
class POLARIS_API UPolarisSubtitleTextBlock : public UPolarisRichTextBlock {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D Offset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FontDefaultSize;
    
    UPolarisSubtitleTextBlock();

};

