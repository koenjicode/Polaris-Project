#pragma once
#include "CoreMinimal.h"
#include "Components/TextBlock.h"
#include "TestTextBlock.generated.h"

UCLASS(Blueprintable)
class POLARIS_API UTestTextBlock : public UTextBlock {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Size_Fit;
    
    UTestTextBlock();

    UFUNCTION(BlueprintCallable)
    void CalculateSizeFit();
    
};

