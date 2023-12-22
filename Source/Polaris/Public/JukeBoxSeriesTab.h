#pragma once
#include "CoreMinimal.h"
#include "JukeBoxSeriesTab.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FJukeBoxSeriesTab {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Index;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* thumbnail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString textId;
    
    POLARIS_API FJukeBoxSeriesTab();
};

