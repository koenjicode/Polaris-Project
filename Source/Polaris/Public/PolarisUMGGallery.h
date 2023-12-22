#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GalleryListInfo.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGGallery.generated.h"

class UImage;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class POLARIS_API UPolarisUMGGallery : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGGallery();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateTitleNewIcon(int32 Index, bool onoff);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateMovieUnlock(int32 Index, bool Locked);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateMovieNewIcon(int32 Index, bool onoff);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateIllustUnlock(int32 Index, bool Locked);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateIllustNewIcon(int32 Index, bool onoff);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateCategoryNewIcon(int32 Index, bool onoff);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupMovieList(const TArray<FGalleryListInfo>& infos);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupIllustList(const TArray<FGalleryListInfo>& infos);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Setup();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetUnlockAndTotalItemCount(int32 unlock_count, int32 total_count);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetTitleUnlockCount(int32 Index, int32 Count, int32 Max);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetTitleTexture(int32 Index, const UTexture2D* Texture);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetTitleText(int32 Index, const FString& text_id);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetMovieSize(const FVector2D& Size);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetKeyVisualTexture(const UTexture2D* Texture);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetKeyVisualPurchaseInfo(int32 item_count, int32 price);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetIllustScale(float Scale);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetIllustPosition(const FVector2D& Pos);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetIllustImage(const UTexture2D* Texture);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetFightMoney(int64 fight_money);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SelectTitle(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SelectMovie(int32 Index, bool Force);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SelectIllust(int32 Index, bool Force);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SelectCategory(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RequestAnimMovieIO(bool in);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RequestAnimIO(bool in, bool Force);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RequestAnimIllustIO(bool in);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RequestAnimIllustChangeIO(bool in);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ListOutMovie();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ListOutIllust();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ListInMovie(bool Force);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ListInIllust();
    
    UFUNCTION(BlueprintCallable)
    void InvokeTitleSelectCallback(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void InvokeTitleDecideCallback(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void InvokeListSelectCallback(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void InvokeListDecideCallback(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void InvokeCategorySelectCallback(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void InvokeCategoryDecideCallback(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool HasFinishedAnimTitleClick();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool HasFinishedAnimOut();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool HasFinishedAnimMovieOut();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool HasFinishedAnimMovieIn();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool HasFinishedAnimListOut();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool HasFinishedAnimListItemClick();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool HasFinishedAnimListIn();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool HasFinishedAnimIn();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool HasFinishedAnimIllustOut();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool HasFinishedAnimIllustIn();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool HasFinishedAnimIllustChangeOut();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool HasFinishedAnimIllustChangeIn();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FVector2D GetMovieSize();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UImage* GetMovieImage();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DecideTitle();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DecideMovie();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DecideIllust();
    
};

