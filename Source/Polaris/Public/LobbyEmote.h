#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ELobbyEmoteCategory.h"
#include "LobbyEmoteAnimSequence.h"
#include "LobbyEmote.generated.h"

class UDataTable;
class ULobbyEmote;
class UTexture2D;

UCLASS(Blueprintable)
class POLARIS_API ULobbyEmote : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_OneParam(FOnCallbackSuccess, bool, isSuccess);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnCallbackCustomize, bool, isSuccess, const TArray<FName>&, emoteIndices);
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* _dataTable;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, int32> _inventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, UTexture2D*> _icons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FLobbyEmoteAnimSequence> _animations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> _shortcuts;
    
    ULobbyEmote();

    UFUNCTION(BlueprintCallable)
    void UploadShortcuts(const TArray<FName>& shortcuts, ULobbyEmote::FOnCallbackSuccess OnDownloadShortcuts);
    
    UFUNCTION(BlueprintCallable)
    void SetupShortcutsIfEmpty();
    
    UFUNCTION(BlueprintCallable)
    void ResetCustomize();
    
    UFUNCTION(BlueprintCallable)
    void ReleaseIconsForLounge();
    
    UFUNCTION(BlueprintCallable)
    void ReleaseAnimationsForProfile();
    
    UFUNCTION(BlueprintCallable)
    void ReleaseAnimationsForLounge();
    
    UFUNCTION(BlueprintCallable)
    void PrepareForCustomize(ULobbyEmote::FOnCallbackCustomize OnPrepareForCustomize);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ULobbyEmote* LobbyEmoteManager();
    
    UFUNCTION(BlueprintCallable)
    void LoadIconsForLounge(ULobbyEmote::FOnCallbackSuccess OnLoadIcons);
    
    UFUNCTION(BlueprintCallable)
    void LoadAnimationsForLounge(ULobbyEmote::FOnCallbackSuccess OnLoadAnimationsForLounge);
    
    UFUNCTION(BlueprintCallable)
    void LoadAnimationForView(const FName& emoteId, ULobbyEmote::FOnCallbackSuccess OnLoadAnimationForView);
    
    UFUNCTION(BlueprintCallable)
    bool IsInitialized();
    
    UFUNCTION(BlueprintCallable)
    bool IsExist(const FName& emoteId);
    
    UFUNCTION(BlueprintCallable)
    bool IsChanged();
    
    UFUNCTION(BlueprintCallable)
    void ImportInventory();
    
    UFUNCTION(BlueprintCallable)
    FString GetTextID(const FName& emoteId);
    
    UFUNCTION(BlueprintCallable)
    ELobbyEmoteCategory GetCategory(const FName& emoteId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetAllEmoteId(TArray<FName>& Result);
    
    UFUNCTION(BlueprintCallable)
    bool FindAnimation(bool& EnableCancel, FName& FacialId, FLobbyEmoteAnimSequence& Animation, const FName& emoteId);
    
    UFUNCTION(BlueprintCallable)
    void DownloadShortcuts(ULobbyEmote::FOnCallbackSuccess OnDownloadShortcuts);
    
    UFUNCTION(BlueprintCallable)
    void ChangeCustomize(int32 slotIndex);
    
};

