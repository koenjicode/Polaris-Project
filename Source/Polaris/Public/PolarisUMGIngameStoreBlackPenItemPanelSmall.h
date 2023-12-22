#pragma once
#include "CoreMinimal.h"
#include "BlackPenDetail.h"
#include "BlackPenItem.h"
#include "BlackPenItemDetail.h"
#include "PolarisUMGIngameStoreItemPanel.h"
#include "PolarisUMGIngameStoreBlackPenItemPanelSmall.generated.h"

class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class POLARIS_API UPolarisUMGIngameStoreBlackPenItemPanelSmall : public UPolarisUMGIngameStoreItemPanel {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackPenItem bp_item;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackPenItemDetail bp_item_detail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackPenDetail bp_detail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 bp_debug_rarity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* bp_debug_tex2d;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName bp_debug_item_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName bp_debug_sell_id;
    
public:
    UPolarisUMGIngameStoreBlackPenItemPanelSmall();

    UFUNCTION(BlueprintCallable)
    UTexture2D* SetTextureByPath(const FString& Path);
    
    UFUNCTION(BlueprintCallable)
    UTexture2D* GetTextureByItemId(FName item_id);
    
};

