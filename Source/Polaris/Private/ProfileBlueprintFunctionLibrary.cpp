#include "ProfileBlueprintFunctionLibrary.h"

UProfileBlueprintFunctionLibrary::UProfileBlueprintFunctionLibrary() {
}

void UProfileBlueprintFunctionLibrary::StartLoadCharacter(FPlayerProfileData& profile_data, FTransform& Transform) {
}

void UProfileBlueprintFunctionLibrary::StartDeleteCharacter() {
}

void UProfileBlueprintFunctionLibrary::SendPlayerProfileSaveRequest(const FPlayerProfileData& Data, UProfileBlueprintFunctionLibrary::FProfileSaveRequestCallback Callback) {
}

void UProfileBlueprintFunctionLibrary::SendPlayerProfileGetRequest(const FString& cosmos_id, UProfileBlueprintFunctionLibrary::FProfileGetRequestCallback Callback) {
}

void UProfileBlueprintFunctionLibrary::SendCosmosKPINo2062(const FPlayerProfileData& Data) {
}

void UProfileBlueprintFunctionLibrary::SendCosmosAPI(int32 apiId, const FString& Json, UProfileBlueprintFunctionLibrary::FAPIResponse Callback) {
}

void UProfileBlueprintFunctionLibrary::PlayAnimationBySequencer(ULevelSequence* sequencer, int32 light_variation_id) {
}

void UProfileBlueprintFunctionLibrary::OpenPlatformProfileUI(int64 platform_id, int32 platform_tag, UProfileBlueprintFunctionLibrary::FPlatformProfileCloseCallback Callback) {
}

bool UProfileBlueprintFunctionLibrary::OpenPlatformCommunicationMessageDialog(UProfileBlueprintFunctionLibrary::FOnFinishPlatformCommunicationMSGDialog Callback) {
    return false;
}

bool UProfileBlueprintFunctionLibrary::OpenCharacterSelect(UProfileBlueprintFunctionLibrary::FCharacterSelectCloseCallback Callback) {
    return false;
}

bool UProfileBlueprintFunctionLibrary::OpenCharacterCustomizeSelect(UProfileBlueprintFunctionLibrary::FCharacterCustomizeSelectCloseCallback Callback) {
    return false;
}

UTexture2D* UProfileBlueprintFunctionLibrary::LoadTexture(const FString& Path) {
    return NULL;
}

bool UProfileBlueprintFunctionLibrary::IsUnlockedShogoBg(int32 shogo_bg_id) {
    return false;
}

bool UProfileBlueprintFunctionLibrary::IsUnlockedShogo(int32 shogo_id) {
    return false;
}

bool UProfileBlueprintFunctionLibrary::IsUnlocked(int32 unlockId) {
    return false;
}

bool UProfileBlueprintFunctionLibrary::IsLoadingCharacter() {
    return false;
}

bool UProfileBlueprintFunctionLibrary::IsEnableUGCParentalControl() {
    return false;
}

bool UProfileBlueprintFunctionLibrary::IsDirtyForCosmosKPINo2062(const FPlayerProfileData lhv, const FPlayerProfileData& rhv) {
    return false;
}

bool UProfileBlueprintFunctionLibrary::IsDirty(const FPlayerProfileData lhv, const FPlayerProfileData& rhv) {
    return false;
}

void UProfileBlueprintFunctionLibrary::InitDefaultProfileByLostItem(FPlayerProfileData& profile_data) {
}

FString UProfileBlueprintFunctionLibrary::GetStringFighterId(int32 fighter_id, bool is_upper) {
    return TEXT("");
}

int32 UProfileBlueprintFunctionLibrary::GetSpecialShogoIdFromShogoBg(int32 shogo_bg_id) {
    return 0;
}

FString UProfileBlueprintFunctionLibrary::GetSmallSizeCharacterIconTexturePathFromServerId(const FString& server_character_id) {
    return TEXT("");
}

FString UProfileBlueprintFunctionLibrary::GetSmallSizeCharacterIconTexturePath(int32 fighter_id) {
    return TEXT("");
}

int32 UProfileBlueprintFunctionLibrary::GetShogoUnlockId(int32 shogo_id) {
    return 0;
}

FString UProfileBlueprintFunctionLibrary::GetShogoTextId(int32 shogo_id) {
    return TEXT("");
}

int32 UProfileBlueprintFunctionLibrary::GetShogoPrice(int32 shogo_id) {
    return 0;
}

TArray<int32> UProfileBlueprintFunctionLibrary::GetShogoIds() {
    return TArray<int32>();
}

int32 UProfileBlueprintFunctionLibrary::GetShogoBgUnlockId(int32 shogo_bg_id) {
    return 0;
}

FString UProfileBlueprintFunctionLibrary::GetShogoBgTexturePath(int32 shogo_bg_id) {
    return TEXT("");
}

FString UProfileBlueprintFunctionLibrary::GetShogoBgTextId(int32 shogo_bg_id) {
    return TEXT("");
}

int32 UProfileBlueprintFunctionLibrary::GetShogoBgPrice(int32 shogo_bg_id) {
    return 0;
}

TArray<int32> UProfileBlueprintFunctionLibrary::GetShogoBgIds() {
    return TArray<int32>();
}

FString UProfileBlueprintFunctionLibrary::GetRankTexturePath(int32 rank) {
    return TEXT("");
}

int32 UProfileBlueprintFunctionLibrary::GetProfileBGNum() {
    return 0;
}

FPlayerProfileData UProfileBlueprintFunctionLibrary::GetPlayerProfileData(EProfileType Type) {
    return FPlayerProfileData{};
}

FText UProfileBlueprintFunctionLibrary::GetPlatformIdText() {
    return FText::GetEmpty();
}

FString UProfileBlueprintFunctionLibrary::GetPlatformIconTexturePath(int32 platform_tag, int32 Type) {
    return TEXT("");
}

int32 UProfileBlueprintFunctionLibrary::GetPlatformbyID(int32 platform_tag) {
    return 0;
}

FString UProfileBlueprintFunctionLibrary::GetPlatform012IconTexturePath(int32 platform012) {
    return TEXT("");
}

int32 UProfileBlueprintFunctionLibrary::GetPlatform() {
    return 0;
}

int32 UProfileBlueprintFunctionLibrary::GetOwnPlatformTag() {
    return 0;
}

FString UProfileBlueprintFunctionLibrary::GetOwnCosmosId() {
    return TEXT("");
}

FString UProfileBlueprintFunctionLibrary::GetCharaCustomizeJson(int32 player_type) {
    return TEXT("");
}

FString UProfileBlueprintFunctionLibrary::GetCharacterStringIdentifier(int32 fighter_id, bool is_upper) {
    return TEXT("");
}

FString UProfileBlueprintFunctionLibrary::GetCharacterShortNameTextId(int32 fighter_id) {
    return TEXT("");
}

FText UProfileBlueprintFunctionLibrary::GetCharacterCustomizeSlotText(int32 fighter_id, int32 costume_type, int32 slot_no) {
    return FText::GetEmpty();
}

FString UProfileBlueprintFunctionLibrary::GetBGThumbnailTexturePath(const FString& texName) {
    return TEXT("");
}

FString UProfileBlueprintFunctionLibrary::GetBGTexturePath(const FString& texName) {
    return TEXT("");
}

void UProfileBlueprintFunctionLibrary::DownloadGhost(int64 cosmosId, const FString& playerName, UProfileBlueprintFunctionLibrary::FDownloadGhostFinishCallback Callback) {
}

bool UProfileBlueprintFunctionLibrary::DisplayUnlockConditionDialog(int32 unlock_id, UProfileBlueprintFunctionLibrary::FDisplayUnlockConditionFinishCallback Callback) {
    return false;
}

bool UProfileBlueprintFunctionLibrary::CheckUsedLockItem(FPlayerProfileData& profile_data) {
    return false;
}

void UProfileBlueprintFunctionLibrary::ChangeHelpElements(int32 Mode) {
}

void UProfileBlueprintFunctionLibrary::ApplyPlayerProfileByParentalControl(FPlayerProfileData& profile_data) {
}


