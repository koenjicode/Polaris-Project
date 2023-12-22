#pragma once
#include "CoreMinimal.h"
#include "DemoSlaveMeshSettingStruct.generated.h"

class UBaseItem;

USTRUCT(BlueprintType)
struct POLARIS_API FDemoSlaveMeshSettingStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBaseItem* SourceBaseItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> OverrideCatwalkClothLcjFileName;
    
    FDemoSlaveMeshSettingStruct();
};

