#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "LobbyStamp.generated.h"

UCLASS(Blueprintable)
class POLARIS_API ULobbyStamp : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegate, bool, isSuccess);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> _inventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> _favorites;
    
    ULobbyStamp();

    UFUNCTION(BlueprintCallable)
    void RemoveFavorite(const FName& stampId);
    
    UFUNCTION(BlueprintCallable)
    bool IsFavoriteUploading();
    
    UFUNCTION(BlueprintCallable)
    void DownloadFavorites(ULobbyStamp::FDelegate OnDownloadFavorites);
    
    UFUNCTION(BlueprintCallable)
    void ChangeFavorite(const FName& srcStampId, const FName& dstStampId);
    
    UFUNCTION(BlueprintCallable)
    void AddFavorite(const FName& stampId);
    
};

