#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "CustomizeItemDataACForUE.h"
#include "CustomizeItemDataCIForUE.h"
#include "CustomizeItemDataEYForUE.h"
#include "CustomizeItemDataIDForUE.h"
#include "CustomizeItemDataMKForUE.h"
#include "CustomizeSESTBakeDataForUE.h"
#include "CustomizeSlotRawData.generated.h"

UCLASS(Blueprintable)
class POLARIS_API UCustomizeSlotRawData : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FCustomizeItemDataCIForUE> CustomizeItemDataCIParamMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FCustomizeItemDataACForUE> CustomizeItemDataACParamMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FCustomizeItemDataMKForUE> CustomizeItemDataMKParamMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FCustomizeItemDataEYForUE> CustomizeItemDataEYParamMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FCustomizeItemDataIDForUE> CustomizeItemDataIDParamMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FCustomizeSESTBakeDataForUE> CustomizeSESTBakeDataParamMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFilePath CustomizeDataFilePath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DataVersion;
    
    UCustomizeSlotRawData();

    UFUNCTION(BlueprintCallable)
    void ConvertToCustomizeData();
    
};

