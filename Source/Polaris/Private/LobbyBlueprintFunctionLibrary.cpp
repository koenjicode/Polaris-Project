#include "LobbyBlueprintFunctionLibrary.h"

ULobbyBlueprintFunctionLibrary::ULobbyBlueprintFunctionLibrary() {
}

void ULobbyBlueprintFunctionLibrary::RequestCrossPrivilege(const FString& xuid, ULobbyBlueprintFunctionLibrary::FLobbyOnGetBool OnGetBool) {
}

void ULobbyBlueprintFunctionLibrary::PlayPolarisCharacterAnimation(APolarisCharacterActor* Actor) {
}

void ULobbyBlueprintFunctionLibrary::LobbyVoiceChatTestInit() {
}

void ULobbyBlueprintFunctionLibrary::LobbyVoiceChatTestFunc2() {
}

void ULobbyBlueprintFunctionLibrary::LobbyVoiceChatTestFunc() {
}

void ULobbyBlueprintFunctionLibrary::LobbyTreatKeyboardAsGamepad(bool asGamepad) {
}

FString ULobbyBlueprintFunctionLibrary::LobbyToDisplayPolarisId(const FString& polarisId) {
    return TEXT("");
}

FString ULobbyBlueprintFunctionLibrary::LobbyToDisplayPlatformId(const FString& platformId, int32 platform012) {
    return TEXT("");
}

void ULobbyBlueprintFunctionLibrary::LobbyTestFunc2() {
}

void ULobbyBlueprintFunctionLibrary::LobbyTestFunc() {
}

void ULobbyBlueprintFunctionLibrary::LobbyShowInformationBar(const FString& textId) {
}

void ULobbyBlueprintFunctionLibrary::LobbyShowConnectionIcon() {
}

void ULobbyBlueprintFunctionLibrary::LobbySetSwingParam(int32 infoTranslation, const FName StrParam1, int32 NumParam1) {
}

void ULobbyBlueprintFunctionLibrary::LobbySetPlayerSide(int32 side) {
}

void ULobbyBlueprintFunctionLibrary::LobbySetPlayername2(const FString& playerName, const FString& Language, ULobbyBlueprintFunctionLibrary::FOnGetStatus OnSetPlayername) {
}

void ULobbyBlueprintFunctionLibrary::LobbySetPlayerName(const FString& playerName) {
}

void ULobbyBlueprintFunctionLibrary::LobbySetFighterId(int32 FighterId) {
}

void ULobbyBlueprintFunctionLibrary::LobbySetCrossplayLobbyFlag(bool is_crossplay_lobby) {
}

void ULobbyBlueprintFunctionLibrary::LobbySetCrossplayFlag(bool is_crossplay) {
}

void ULobbyBlueprintFunctionLibrary::LobbyScreenShot2(const FString& Path, bool withUI) {
}

void ULobbyBlueprintFunctionLibrary::LobbyScreenShot(const FString& Filename, bool withUI) {
}

void ULobbyBlueprintFunctionLibrary::LobbySavePath(TArray<float>& times, TArray<FRotator>& rotators, TArray<FVector>& locations) {
}

void ULobbyBlueprintFunctionLibrary::LobbyRapidJsonTest() {
}

void ULobbyBlueprintFunctionLibrary::LobbyPrintString(const FString& InString, bool bWarning) {
}

int32 ULobbyBlueprintFunctionLibrary::LobbyPlayerNameKind() {
    return 0;
}

int32 ULobbyBlueprintFunctionLibrary::LobbyPlatformTagToPlatform012(int32 platformTag) {
    return 0;
}

int32 ULobbyBlueprintFunctionLibrary::LobbyPlatformTagFrom012(int32 platform012) {
    return 0;
}

void ULobbyBlueprintFunctionLibrary::LobbyOpenProfileInCommunityMenu(int64 cosmosId, ULobbyBlueprintFunctionLibrary::FProfileFinishCallback Callback) {
}

void ULobbyBlueprintFunctionLibrary::LobbyOpenPlatformProfileUI(const FString& platformId, int32 platform012, ULobbyBlueprintFunctionLibrary::FLobbyOpenPlatformProfileUIDelegate OnClose) {
}

bool ULobbyBlueprintFunctionLibrary::LobbyNotificationExistsInvitation() {
    return false;
}

bool ULobbyBlueprintFunctionLibrary::LobbyNotificationExistsFriendRequest() {
    return false;
}

void ULobbyBlueprintFunctionLibrary::LobbyNotificationClearInvitation() {
}

void ULobbyBlueprintFunctionLibrary::LobbyLoadPathList(TArray<FString>& Paths) {
}

void ULobbyBlueprintFunctionLibrary::LobbyLoadPath(FString& Path, TArray<float>& times, TArray<FRotator>& rotators, TArray<FVector>& locations) {
}

void ULobbyBlueprintFunctionLibrary::LobbyJoinInvitedSession(const FInviteSessionInfo& invite_session_info, ULobbyBlueprintFunctionLibrary::FLobbyOnGetBool Callback) {
}

bool ULobbyBlueprintFunctionLibrary::LobbyIsTrialVersion() {
    return false;
}

bool ULobbyBlueprintFunctionLibrary::LobbyIsSystemInitialized() {
    return false;
}

bool ULobbyBlueprintFunctionLibrary::LobbyIsShipping() {
    return false;
}

bool ULobbyBlueprintFunctionLibrary::LobbyIsShaderCompiling() {
    return false;
}

bool ULobbyBlueprintFunctionLibrary::LobbyIsPlayerMatchModeInWatchingBattleScene() {
    return false;
}

bool ULobbyBlueprintFunctionLibrary::LobbyIsOpenProfileChatInWatchingBattle() {
    return false;
}

bool ULobbyBlueprintFunctionLibrary::LobbyIsOpenProfileChatInPlayerMatchRoom() {
    return false;
}

bool ULobbyBlueprintFunctionLibrary::LobbyIsOpenProfileChatInOnlineLobby() {
    return false;
}

bool ULobbyBlueprintFunctionLibrary::LobbyIsOpenPlayerProfileView() {
    return false;
}

bool ULobbyBlueprintFunctionLibrary::LobbyIsNetworkInitialized() {
    return false;
}

bool ULobbyBlueprintFunctionLibrary::LobbyIsInWatchingBattleScene() {
    return false;
}

bool ULobbyBlueprintFunctionLibrary::LobbyIsInPlayerMatchSearchSessionScene() {
    return false;
}

bool ULobbyBlueprintFunctionLibrary::LobbyIsInPlayerMatchRoomScene() {
    return false;
}

bool ULobbyBlueprintFunctionLibrary::LobbyIsInOnlineLobbyScene() {
    return false;
}

bool ULobbyBlueprintFunctionLibrary::LobbyIsInCommunityMenuScene() {
    return false;
}

bool ULobbyBlueprintFunctionLibrary::LobbyIsFirstPlayLounge() {
    return false;
}

bool ULobbyBlueprintFunctionLibrary::LobbyIsEnableIGS() {
    return false;
}

bool ULobbyBlueprintFunctionLibrary::LobbyIsEnableCustomizeSlot() {
    return false;
}

bool ULobbyBlueprintFunctionLibrary::LobbyIsDisableSwing() {
    return false;
}

bool ULobbyBlueprintFunctionLibrary::LobbyIsDisableLobbySound() {
    return false;
}

bool ULobbyBlueprintFunctionLibrary::LobbyIsCnt2() {
    return false;
}

bool ULobbyBlueprintFunctionLibrary::LobbyIsCbt() {
    return false;
}

void ULobbyBlueprintFunctionLibrary::LobbyInputConvert(const float& inX, const float& inY, float& OutValue, float& outRadian) {
}

void ULobbyBlueprintFunctionLibrary::LobbyInformationBarPush() {
}

void ULobbyBlueprintFunctionLibrary::LobbyInformationBarPop() {
}

void ULobbyBlueprintFunctionLibrary::LobbyInformationBarClear() {
}

FString ULobbyBlueprintFunctionLibrary::LobbyI64toa(int64 Number) {
    return TEXT("");
}

void ULobbyBlueprintFunctionLibrary::LobbyHideInformationBar() {
}

void ULobbyBlueprintFunctionLibrary::LobbyHideConnectionIcon() {
}

void ULobbyBlueprintFunctionLibrary::LobbyHideButtonHelp() {
}

void ULobbyBlueprintFunctionLibrary::LobbyGotoPlayerMatchRoomInCommunityMenu() {
}

void ULobbyBlueprintFunctionLibrary::LobbyGotoMultiPlayStart(ULobbyBlueprintFunctionLibrary::FLobbyOnGetBool Callback) {
}

void ULobbyBlueprintFunctionLibrary::LobbyGetServerLabel(FString& Result) {
}

void ULobbyBlueprintFunctionLibrary::LobbyGetSecondaryName(FString& secondaryName) {
}

void ULobbyBlueprintFunctionLibrary::LobbyGetSavedataPlayerName(FString& playerName) {
}

bool ULobbyBlueprintFunctionLibrary::LobbyGetProfileUserName(FString& userName) {
    return false;
}

FString ULobbyBlueprintFunctionLibrary::LobbyGetPolarisIdInsertHyphen(const FString& polaris_id) {
    return TEXT("");
}

FString ULobbyBlueprintFunctionLibrary::LobbyGetPolarisId2() {
    return TEXT("");
}

FName ULobbyBlueprintFunctionLibrary::LobbyGetPolarisId() {
    return NAME_None;
}

ELobbyPlayerStatus ULobbyBlueprintFunctionLibrary::LobbyGetPlayerStatus(int32 Index) {
    return ELobbyPlayerStatus::None;
}

void ULobbyBlueprintFunctionLibrary::LobbyGetPlayernameAndLanguage(ULobbyBlueprintFunctionLibrary::FOnGetPlayernameAndLanguage OnGetPlayernameAndLanguage) {
}

bool ULobbyBlueprintFunctionLibrary::LobbyGetPlayerName(FString& playerName) {
    return false;
}

void ULobbyBlueprintFunctionLibrary::LobbyGetPlayerId(FString& Result) {
}

int32 ULobbyBlueprintFunctionLibrary::LobbyGetPlatformTag() {
    return 0;
}

int32 ULobbyBlueprintFunctionLibrary::LobbyGetPlatform012() {
    return 0;
}

void ULobbyBlueprintFunctionLibrary::LobbyGetOnlineId(FString& Result) {
}

bool ULobbyBlueprintFunctionLibrary::LobbyGetNetworkLocalName(FString& userName) {
    return false;
}

FString ULobbyBlueprintFunctionLibrary::LobbyGetNetLangugaeCode() {
    return TEXT("");
}

int32 ULobbyBlueprintFunctionLibrary::LobbyGetMyChatPrivilegeStatus() {
    return 0;
}

void ULobbyBlueprintFunctionLibrary::LobbyGetLocalTimeLocalizedStringFromIso8601(const FString& Iso8601Text, FString& DateText, FString& TimeText, bool Seconds) {
}

void ULobbyBlueprintFunctionLibrary::LobbyGetLocalTimeLocalizedString(const FDateTime& UtcDateTime, FString& DateText, FString& TimeText, bool Seconds) {
}

void ULobbyBlueprintFunctionLibrary::LobbyGetHelpListItemsByIndex(int32 Index, TArray<FLobbyMenuHelpItem>& items) {
}

void ULobbyBlueprintFunctionLibrary::LobbyGetHelpListItems(const FString& categoryTextId, TArray<FLobbyMenuHelpItem>& items) {
}

void ULobbyBlueprintFunctionLibrary::LobbyGetHelpListCategoryList(TArray<FString>& Categories) {
}

bool ULobbyBlueprintFunctionLibrary::LobbyGetGameSettingCrossPlayFlag() {
    return false;
}

void ULobbyBlueprintFunctionLibrary::LobbyGetFighters(TArray<FString>& Result) {
}

bool ULobbyBlueprintFunctionLibrary::LobbyGetCrossplayLobbyFlag() {
    return false;
}

bool ULobbyBlueprintFunctionLibrary::LobbyGetCrossplayFlag() {
    return false;
}

int32 ULobbyBlueprintFunctionLibrary::LobbyGetCrossFlagTest() {
    return 0;
}

int64 ULobbyBlueprintFunctionLibrary::LobbyGetCosmosId() {
    return 0;
}

float ULobbyBlueprintFunctionLibrary::LobbyGetCameraSettingTrackingSpeedRate() {
    return 0.0f;
}

bool ULobbyBlueprintFunctionLibrary::LobbyGetCameraSettingReverseUpDownFlag() {
    return false;
}

bool ULobbyBlueprintFunctionLibrary::LobbyGetCameraSettingReverseLeftRightFlag() {
    return false;
}

float ULobbyBlueprintFunctionLibrary::LobbyGetCameraSettingMoveSpeedRate() {
    return 0.0f;
}

int32 ULobbyBlueprintFunctionLibrary::LobbyGetCameraSettingMouseOperationType() {
    return 0;
}

bool ULobbyBlueprintFunctionLibrary::LobbyGetCameraSettingAutoTrackingFlag() {
    return false;
}

int32 ULobbyBlueprintFunctionLibrary::LobbyGetBasePlatformTag() {
    return 0;
}

void ULobbyBlueprintFunctionLibrary::LobbyEnableKeyboard(bool bEnable) {
}

void ULobbyBlueprintFunctionLibrary::LobbyDownloadGhostInWatchingBattle(int64 cosmosId, const FString& playerName, ULobbyBlueprintFunctionLibrary::FDownloadGhostFinishCallback Callback) {
}

void ULobbyBlueprintFunctionLibrary::LobbyDownloadGhostInPlayerProfileView(int64 cosmosId, const FString& playerName, ULobbyBlueprintFunctionLibrary::FDownloadGhostFinishCallback Callback) {
}

void ULobbyBlueprintFunctionLibrary::LobbyDownloadGhostInPlayerMatchSearchSession(int64 cosmosId, const FString& playerName, ULobbyBlueprintFunctionLibrary::FDownloadGhostFinishCallback Callback) {
}

void ULobbyBlueprintFunctionLibrary::LobbyDownloadGhostInPlayerMatchRoom(int64 cosmosId, const FString& playerName, ULobbyBlueprintFunctionLibrary::FDownloadGhostFinishCallback Callback) {
}

void ULobbyBlueprintFunctionLibrary::LobbyDownloadGhostInCommunityMenu(int64 cosmosId, const FString& playerName, ULobbyBlueprintFunctionLibrary::FDownloadGhostFinishCallback Callback) {
}

FString ULobbyBlueprintFunctionLibrary::LobbyCosmosIdToString(int64 cosmosId) {
    return TEXT("");
}

void ULobbyBlueprintFunctionLibrary::LobbyCloseProfileChatInWatchingBattle() {
}

void ULobbyBlueprintFunctionLibrary::LobbyCloseProfileChatInPlayerMatchRoom() {
}

void ULobbyBlueprintFunctionLibrary::LobbyCloseProfileChatInOnlineLobby() {
}

bool ULobbyBlueprintFunctionLibrary::LobbyCheckToken() {
    return false;
}

void ULobbyBlueprintFunctionLibrary::LobbyButtonHelpTest() {
}

void ULobbyBlueprintFunctionLibrary::LobbyButtonHelpSitting() {
}

void ULobbyBlueprintFunctionLibrary::LobbyButtonHelpScene(const FString& Scene) {
}

void ULobbyBlueprintFunctionLibrary::LobbyButtonHelpReturn() {
}

void ULobbyBlueprintFunctionLibrary::LobbyButtonHelpPush() {
}

void ULobbyBlueprintFunctionLibrary::LobbyButtonHelpPop() {
}

void ULobbyBlueprintFunctionLibrary::LobbyButtonHelpEmoteListPlay() {
}

void ULobbyBlueprintFunctionLibrary::LobbyButtonHelpEmoteListChangeRegistered() {
}

void ULobbyBlueprintFunctionLibrary::LobbyButtonHelpEmoteListChange() {
}

void ULobbyBlueprintFunctionLibrary::LobbyButtonHelpEmote() {
}

void ULobbyBlueprintFunctionLibrary::LobbyButtonHelpDefault() {
}

void ULobbyBlueprintFunctionLibrary::LobbyButtonHelpDecide() {
}

void ULobbyBlueprintFunctionLibrary::LobbyButtonHelpClear() {
}

void ULobbyBlueprintFunctionLibrary::LobbyButtonHelpCameraShift() {
}

int64 ULobbyBlueprintFunctionLibrary::LobbyAtoi64(const FString& numstr) {
    return 0;
}

void ULobbyBlueprintFunctionLibrary::LobbyApiTest2(int32 apiId, const TArray<FString>& args) {
}

void ULobbyBlueprintFunctionLibrary::LobbyApiTest(int32 apiId) {
}

void ULobbyBlueprintFunctionLibrary::LobbyApiRequestSetBool(int32 apiId, const FString& arg, bool Value, ULobbyBlueprintFunctionLibrary::FLobbyOnGetStatus OnGetStatus) {
}

void ULobbyBlueprintFunctionLibrary::LobbyApiRequestReportUser(const FString& targetUserId, int32 violationType, const FString& comment) {
}

void ULobbyBlueprintFunctionLibrary::LobbyApiRequestReportItem(const FString& targetUserId, const FString& targetUgcId, int32 violationType, const FString& comment) {
}

void ULobbyBlueprintFunctionLibrary::LobbyApiRequestPlayingTogetherUserList(ULobbyBlueprintFunctionLibrary::FLobbyOnGetTogetherUserList OnGetTogetherUserList) {
}

void ULobbyBlueprintFunctionLibrary::LobbyApiRequestPlatformFriendList3(ULobbyBlueprintFunctionLibrary::FLobbyOnGetPlatformList OnGetPlatformFriendList) {
}

void ULobbyBlueprintFunctionLibrary::LobbyApiRequestPlatformFriendList2(const FString& token, ULobbyBlueprintFunctionLibrary::FLobbyOnGetPlatformList OnGetPlatformFriendList) {
}

void ULobbyBlueprintFunctionLibrary::LobbyApiRequestPlatformFriendList(ULobbyBlueprintFunctionLibrary::FLobbyOnGetPlatformList OnGetPlatformFriendList) {
}

void ULobbyBlueprintFunctionLibrary::LobbyApiRequestGetBool(int32 apiId, const FString& arg, ULobbyBlueprintFunctionLibrary::FLobbyOnGetBool OnGetBool) {
}

void ULobbyBlueprintFunctionLibrary::LobbyApiRequestFriendRequestRemove(const FString& targetUserId) {
}

void ULobbyBlueprintFunctionLibrary::LobbyApiRequestFriendRequest(const FString& targetUserId, const FString& steamId) {
}

void ULobbyBlueprintFunctionLibrary::LobbyApiRequestFriendRemove(const FString& targetUserId) {
}

void ULobbyBlueprintFunctionLibrary::LobbyApiRequestFriendList(ULobbyBlueprintFunctionLibrary::FLobbyOnGetUserList OnGetUserList) {
}

void ULobbyBlueprintFunctionLibrary::LobbyApiRequestFriendApprove(const FString& targetUserId) {
}

void ULobbyBlueprintFunctionLibrary::LobbyApiRequestBlockList(ULobbyBlueprintFunctionLibrary::FLobbyOnGetBlockList OnGetBlockList) {
}

void ULobbyBlueprintFunctionLibrary::LobbyApiRequestApplyingFriend(ULobbyBlueprintFunctionLibrary::FLobbyOnGetApplyingList OnGetApplyingList) {
}

void ULobbyBlueprintFunctionLibrary::LobbyApiRequestAppliedFriend(ULobbyBlueprintFunctionLibrary::FLobbyOnGetAwatingList OnGetAwatingList) {
}

bool ULobbyBlueprintFunctionLibrary::LobbyActivateDirectChatInWatchingBattle(const int32& InPlatform012, const FString& InPlayerName, const FString& InCosmosId, const FString& InPlatformId, const FString& InPolarisId, const FString& InOnlineId) {
    return false;
}

bool ULobbyBlueprintFunctionLibrary::LobbyActivateDirectChatInPlayerMatchRoom(const int32& InPlatform012, const FString& InPlayerName, const FString& InCosmosId, const FString& InPlatformId, const FString& InPolarisId, const FString& InOnlineId) {
    return false;
}

void ULobbyBlueprintFunctionLibrary::LobbNotificationClearFriendRequest() {
}

bool ULobbyBlueprintFunctionLibrary::GetMyCrossPrivilege(bool InFriendOnly, bool InAll) {
    return false;
}

int64 ULobbyBlueprintFunctionLibrary::ConvertCosmosIdToInt64(const FName& cosmosId) {
    return 0;
}


