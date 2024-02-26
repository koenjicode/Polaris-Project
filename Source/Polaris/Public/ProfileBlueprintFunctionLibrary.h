#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EProfileType.h"
#include "PlayerProfileData.h"
#include "ProfileBlueprintFunctionLibrary.generated.h"

class ULevelSequence;
class UTexture2D;

UCLASS(Blueprintable)
class POLARIS_API UProfileBlueprintFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_OneParam(FProfileSaveRequestCallback, int32, Status);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FProfileMenuDecideCallback, int32, ID);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FProfileGetRequestCallback, int32, Status, FPlayerProfileData, profile_data);
    DECLARE_DYNAMIC_DELEGATE(FPlatformProfileCloseCallback);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FOnFinishPlatformCommunicationMSGDialog, bool, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDownloadGhostFinishCallback, bool, Result);
    DECLARE_DYNAMIC_DELEGATE(FDisplayUnlockConditionFinishCallback);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FCharacterSelectCloseCallback, int32, fighter_id);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FCharacterCustomizeSelectCloseCallback, int32, costume_type, int32, slot_no);
    DECLARE_DYNAMIC_DELEGATE_ThreeParams(FAPIResponse, int32, apiId, int32, Status, const FString&, recv_json);
    
    UProfileBlueprintFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static void StartLoadCharacter(UPARAM(Ref) FPlayerProfileData& profile_data, UPARAM(Ref) FTransform& Transform, bool is_force);
    
    UFUNCTION(BlueprintCallable)
    static void StartDeleteCharacter();
    
    UFUNCTION(BlueprintCallable)
    static void SendPlayerProfileSaveRequest(const FPlayerProfileData& Data, UProfileBlueprintFunctionLibrary::FProfileSaveRequestCallback Callback);
    
    UFUNCTION(BlueprintCallable)
    static void SendPlayerProfileGetRequest(const FString& cosmos_id, UProfileBlueprintFunctionLibrary::FProfileGetRequestCallback Callback);
    
    UFUNCTION(BlueprintCallable)
    static void SendCosmosKPINo2062(const FPlayerProfileData& Data);
    
    UFUNCTION(BlueprintCallable)
    static void SendCosmosAPI(int32 apiId, const FString& Json, UProfileBlueprintFunctionLibrary::FAPIResponse Callback);
    
    UFUNCTION(BlueprintCallable)
    static void PlayAnimationBySequencer(ULevelSequence* sequencer, int32 light_variation_id);
    
    UFUNCTION(BlueprintCallable)
    static void OpenPlatformProfileUI(int64 platform_id, int32 platform_tag, UProfileBlueprintFunctionLibrary::FPlatformProfileCloseCallback Callback);
    
    UFUNCTION(BlueprintCallable)
    static bool OpenPlatformCommunicationMessageDialog(UProfileBlueprintFunctionLibrary::FOnFinishPlatformCommunicationMSGDialog Callback);
    
    UFUNCTION(BlueprintCallable)
    static bool OpenCharacterSelect(UProfileBlueprintFunctionLibrary::FCharacterSelectCloseCallback Callback);
    
    UFUNCTION(BlueprintCallable)
    static bool OpenCharacterCustomizeSelect(UProfileBlueprintFunctionLibrary::FCharacterCustomizeSelectCloseCallback Callback);
    
    UFUNCTION(BlueprintCallable)
    static UTexture2D* LoadTexture(const FString& Path);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsUnlockedShogoBg(int32 shogo_bg_id);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsUnlockedShogo(int32 shogo_id);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsUnlocked(int32 unlockId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsLoadingCharacter();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsEnableUGCParentalControl();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsDirtyForCosmosKPINo2062(const FPlayerProfileData lhv, const FPlayerProfileData& rhv);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsDirty(const FPlayerProfileData lhv, const FPlayerProfileData& rhv);
    
    UFUNCTION(BlueprintCallable)
    static void InitDefaultProfileByLostItem(UPARAM(Ref) FPlayerProfileData& profile_data);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetStringFighterId(int32 fighter_id, bool is_upper);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetSpecialShogoIdFromShogoBg(int32 shogo_bg_id);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetSmallSizeCharacterIconTexturePathFromServerId(const FString& server_character_id);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetSmallSizeCharacterIconTexturePath(int32 fighter_id);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetShogoUnlockId(int32 shogo_id);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetShogoTextId(int32 shogo_id);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetShogoPrice(int32 shogo_id);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<int32> GetShogoIds();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetShogoBgUnlockId(int32 shogo_bg_id);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetShogoBgTexturePath(int32 shogo_bg_id);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetShogoBgTextId(int32 shogo_bg_id);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetShogoBgPrice(int32 shogo_bg_id);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<int32> GetShogoBgIds();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetRankTexturePath(int32 rank);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetProfileBGNum();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FPlayerProfileData GetPlayerProfileData(EProfileType Type);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetPlatformIdText();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetPlatformIconTexturePath(int32 platform_tag, int32 Type);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetPlatformbyID(int32 platform_tag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetPlatform012IconTexturePath(int32 platform012);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetPlatform();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetOwnPlatformTag();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetOwnCosmosId();
    
    UFUNCTION(BlueprintCallable)
    static FString GetCharaCustomizeJson(int32 player_type);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetCharacterStringIdentifier(int32 fighter_id, bool is_upper);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetCharacterShortNameTextId(int32 fighter_id);
    
    UFUNCTION(BlueprintCallable)
    static FText GetCharacterCustomizeSlotText(int32 fighter_id, int32 costume_type, int32 slot_no);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetBGThumbnailTexturePath(const FString& texName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetBGTexturePath(const FString& texName);
    
    UFUNCTION(BlueprintCallable)
    static void DownloadGhost(int64 cosmosId, const FString& playerName, UProfileBlueprintFunctionLibrary::FDownloadGhostFinishCallback Callback);
    
    UFUNCTION(BlueprintCallable)
    static bool DisplayUnlockConditionDialog(int32 unlock_id, UProfileBlueprintFunctionLibrary::FDisplayUnlockConditionFinishCallback Callback);
    
    UFUNCTION(BlueprintCallable)
    static bool CheckUsedLockItem(UPARAM(Ref) FPlayerProfileData& profile_data);
    
    UFUNCTION(BlueprintCallable)
    static void ChangeHelpElements(int32 Mode);
    
    UFUNCTION(BlueprintCallable)
    static void ApplyPlayerProfileByParentalControl(UPARAM(Ref) FPlayerProfileData& profile_data);
    
};

