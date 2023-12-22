#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "AvatarCustomizeDebugFL.generated.h"

class UDataTable;
class UObject;

UCLASS(Blueprintable)
class POLARIS_API UAvatarCustomizeDebugFL : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAvatarCustomizeDebugFL();

    UFUNCTION(BlueprintCallable)
    static void SetAssetThumbnail(const FAssetData& AssetData, const TArray<FColor>& colorDatas, int32 SizeX, int32 SizeY);
    
    UFUNCTION(BlueprintCallable)
    static void SaveAsset(UObject* Asset);
    
    UFUNCTION(BlueprintCallable)
    static void ReimportDataTable(UDataTable* DataTable);
    
    UFUNCTION(BlueprintCallable)
    static void GetAssetThumbnailImageData(UObject* Asset, TArray<uint8>& ImageDatas);
    
};

