#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "PolarisUMGStoreItemRibbon.generated.h"

class UPolarisTextBlock;
class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class POLARIS_API UPolarisUMGStoreItemRibbon : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPolarisTextBlock* TB_Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* plate_free;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* plate_recommend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* plate_popular;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* plate_pricedown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* plate_new;
    
public:
    UPolarisUMGStoreItemRibbon();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RepItemInfo(const FName& sell_id);
    
};

