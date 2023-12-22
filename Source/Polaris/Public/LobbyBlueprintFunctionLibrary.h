#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ELobbyPlayerStatus.h"
#include "InviteSessionInfo.h"
#include "LobbyMenuHelpItem.h"
#include "UserListDataArray.h"
#include "LobbyBlueprintFunctionLibrary.generated.h"

class APolarisCharacterActor;

UCLASS(Blueprintable)
class POLARIS_API ULobbyBlueprintFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE(FProfileFinishCallback);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FOnGetStatus, int32, Status);
    DECLARE_DYNAMIC_DELEGATE_ThreeParams(FOnGetPlayernameAndLanguage, int32, Status, const FString&, playerName, const FString&, Language);
    DECLARE_DYNAMIC_DELEGATE(FLobbyOpenPlatformProfileUIDelegate);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FLobbyOnGetUserList, const TArray<FUserListDataArray>&, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FLobbyOnGetTogetherUserList, const TArray<FUserListDataArray>&, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FLobbyOnGetStatus, int32, Status);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FLobbyOnGetPlatformList, const TArray<FUserListDataArray>&, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FLobbyOnGetBool, bool, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FLobbyOnGetBlockList, const TArray<FUserListDataArray>&, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FLobbyOnGetAwatingList, const TArray<FUserListDataArray>&, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FLobbyOnGetApplyingList, const TArray<FUserListDataArray>&, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDownloadGhostFinishCallback, bool, Result);
    
    ULobbyBlueprintFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static void RequestCrossPrivilege(const FString& xuid, ULobbyBlueprintFunctionLibrary::FLobbyOnGetBool OnGetBool);
    
    UFUNCTION(BlueprintCallable)
    static void PlayPolarisCharacterAnimation(APolarisCharacterActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static void LobbyVoiceChatTestInit();
    
    UFUNCTION(BlueprintCallable)
    static void LobbyVoiceChatTestFunc2();
    
    UFUNCTION(BlueprintCallable)
    static void LobbyVoiceChatTestFunc();
    
    UFUNCTION(BlueprintCallable)
    static void LobbyTreatKeyboardAsGamepad(bool asGamepad);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString LobbyToDisplayPolarisId(const FString& polarisId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString LobbyToDisplayPlatformId(const FString& platformId, int32 platform012);
    
    UFUNCTION(BlueprintCallable)
    static void LobbyTestFunc2();
    
    UFUNCTION(BlueprintCallable)
    static void LobbyTestFunc();
    
    UFUNCTION(BlueprintCallable)
    static void LobbyShowInformationBar(const FString& textId);
    
    UFUNCTION(BlueprintCallable)
    static void LobbyShowConnectionIcon();
    
    UFUNCTION(BlueprintCallable)
    static void LobbySetSwingParam(int32 infoTranslation, const FName StrParam1, int32 NumParam1);
    
    UFUNCTION(BlueprintCallable)
    static void LobbySetPlayerSide(int32 side);
    
    UFUNCTION(BlueprintCallable)
    static void LobbySetPlayername2(const FString& playerName, const FString& Language, ULobbyBlueprintFunctionLibrary::FOnGetStatus OnSetPlayername);
    
    UFUNCTION(BlueprintCallable)
    static void LobbySetPlayerName(const FString& playerName);
    
    UFUNCTION(BlueprintCallable)
    static void LobbySetFighterId(int32 FighterId);
    
    UFUNCTION(BlueprintCallable)
    static void LobbySetCrossplayLobbyFlag(bool is_crossplay_lobby);
    
    UFUNCTION(BlueprintCallable)
    static void LobbySetCrossplayFlag(bool is_crossplay);
    
    UFUNCTION(BlueprintCallable)
    static void LobbyScreenShot2(const FString& Path, bool withUI);
    
    UFUNCTION(BlueprintCallable)
    static void LobbyScreenShot(const FString& Filename, bool withUI);
    
    UFUNCTION(BlueprintCallable)
    static void LobbySavePath(UPARAM(Ref) TArray<float>& times, UPARAM(Ref) TArray<FRotator>& rotators, UPARAM(Ref) TArray<FVector>& locations);
    
    UFUNCTION(BlueprintCallable)
    static void LobbyRapidJsonTest();
    
    UFUNCTION(BlueprintCallable)
    static void LobbyPrintString(const FString& InString, bool bWarning);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 LobbyPlayerNameKind();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 LobbyPlatformTagToPlatform012(int32 platformTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 LobbyPlatformTagFrom012(int32 platform012);
    
    UFUNCTION(BlueprintCallable)
    static void LobbyOpenProfileInCommunityMenu(int64 cosmosId, ULobbyBlueprintFunctionLibrary::FProfileFinishCallback Callback);
    
    UFUNCTION(BlueprintCallable)
    static void LobbyOpenPlatformProfileUI(const FString& platformId, int32 platform012, ULobbyBlueprintFunctionLibrary::FLobbyOpenPlatformProfileUIDelegate OnClose);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool LobbyNotificationExistsInvitation();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool LobbyNotificationExistsFriendRequest();
    
    UFUNCTION(BlueprintCallable)
    static void LobbyNotificationClearInvitation();
    
    UFUNCTION(BlueprintCallable)
    static void LobbyLoadPathList(TArray<FString>& Paths);
    
    UFUNCTION(BlueprintCallable)
    static void LobbyLoadPath(UPARAM(Ref) FString& Path, TArray<float>& times, TArray<FRotator>& rotators, TArray<FVector>& locations);
    
    UFUNCTION(BlueprintCallable)
    static void LobbyJoinInvitedSession(const FInviteSessionInfo& invite_session_info, ULobbyBlueprintFunctionLibrary::FLobbyOnGetBool Callback);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool LobbyIsTrialVersion();
    
    UFUNCTION(BlueprintCallable)
    static bool LobbyIsSystemInitialized();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool LobbyIsShipping();
    
    UFUNCTION(BlueprintCallable)
    static bool LobbyIsShaderCompiling();
    
    UFUNCTION(BlueprintCallable)
    static bool LobbyIsPlayerMatchModeInWatchingBattleScene();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool LobbyIsOpenProfileChatInWatchingBattle();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool LobbyIsOpenProfileChatInPlayerMatchRoom();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool LobbyIsOpenProfileChatInOnlineLobby();
    
    UFUNCTION(BlueprintCallable)
    static bool LobbyIsOpenPlayerProfileView();
    
    UFUNCTION(BlueprintCallable)
    static bool LobbyIsNetworkInitialized();
    
    UFUNCTION(BlueprintCallable)
    static bool LobbyIsInWatchingBattleScene();
    
    UFUNCTION(BlueprintCallable)
    static bool LobbyIsInPlayerMatchSearchSessionScene();
    
    UFUNCTION(BlueprintCallable)
    static bool LobbyIsInPlayerMatchRoomScene();
    
    UFUNCTION(BlueprintCallable)
    static bool LobbyIsInOnlineLobbyScene();
    
    UFUNCTION(BlueprintCallable)
    static bool LobbyIsInCommunityMenuScene();
    
    UFUNCTION(BlueprintCallable)
    static bool LobbyIsFirstPlayLounge();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool LobbyIsEnableIGS();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool LobbyIsEnableCustomizeSlot();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool LobbyIsDisableSwing();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool LobbyIsDisableLobbySound();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool LobbyIsCnt2();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool LobbyIsCbt();
    
    UFUNCTION(BlueprintCallable)
    static void LobbyInputConvert(const float& inX, const float& inY, float& OutValue, float& outRadian);
    
    UFUNCTION(BlueprintCallable)
    static void LobbyInformationBarPush();
    
    UFUNCTION(BlueprintCallable)
    static void LobbyInformationBarPop();
    
    UFUNCTION(BlueprintCallable)
    static void LobbyInformationBarClear();
    
    UFUNCTION(BlueprintPure)
    static FString LobbyI64toa(int64 Number);
    
    UFUNCTION(BlueprintCallable)
    static void LobbyHideInformationBar();
    
    UFUNCTION(BlueprintCallable)
    static void LobbyHideConnectionIcon();
    
    UFUNCTION(BlueprintCallable)
    static void LobbyHideButtonHelp();
    
    UFUNCTION(BlueprintCallable)
    static void LobbyGotoPlayerMatchRoomInCommunityMenu();
    
    UFUNCTION(BlueprintCallable)
    static void LobbyGotoMultiPlayStart(ULobbyBlueprintFunctionLibrary::FLobbyOnGetBool Callback);
    
    UFUNCTION(BlueprintCallable)
    static void LobbyGetServerLabel(FString& Result);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void LobbyGetSecondaryName(FString& secondaryName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void LobbyGetSavedataPlayerName(FString& playerName);
    
    UFUNCTION(BlueprintCallable)
    static bool LobbyGetProfileUserName(FString& userName);
    
    UFUNCTION(BlueprintCallable)
    static FString LobbyGetPolarisIdInsertHyphen(const FString& polaris_id);
    
    UFUNCTION(BlueprintCallable)
    static FString LobbyGetPolarisId2();
    
    UFUNCTION(BlueprintCallable)
    static FName LobbyGetPolarisId();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ELobbyPlayerStatus LobbyGetPlayerStatus(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    static void LobbyGetPlayernameAndLanguage(ULobbyBlueprintFunctionLibrary::FOnGetPlayernameAndLanguage OnGetPlayernameAndLanguage);
    
    UFUNCTION(BlueprintCallable)
    static bool LobbyGetPlayerName(FString& playerName);
    
    UFUNCTION(BlueprintCallable)
    static void LobbyGetPlayerId(FString& Result);
    
    UFUNCTION(BlueprintCallable)
    static int32 LobbyGetPlatformTag();
    
    UFUNCTION(BlueprintCallable)
    static int32 LobbyGetPlatform012();
    
    UFUNCTION(BlueprintCallable)
    static void LobbyGetOnlineId(FString& Result);
    
    UFUNCTION(BlueprintCallable)
    static bool LobbyGetNetworkLocalName(FString& userName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString LobbyGetNetLangugaeCode();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 LobbyGetMyChatPrivilegeStatus();
    
    UFUNCTION(BlueprintCallable)
    static void LobbyGetLocalTimeLocalizedStringFromIso8601(const FString& Iso8601Text, FString& DateText, FString& TimeText, bool Seconds);
    
    UFUNCTION(BlueprintCallable)
    static void LobbyGetLocalTimeLocalizedString(const FDateTime& UtcDateTime, FString& DateText, FString& TimeText, bool Seconds);
    
    UFUNCTION(BlueprintCallable)
    static void LobbyGetHelpListItemsByIndex(int32 Index, TArray<FLobbyMenuHelpItem>& items);
    
    UFUNCTION(BlueprintCallable)
    static void LobbyGetHelpListItems(const FString& categoryTextId, TArray<FLobbyMenuHelpItem>& items);
    
    UFUNCTION(BlueprintCallable)
    static void LobbyGetHelpListCategoryList(TArray<FString>& Categories);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool LobbyGetGameSettingCrossPlayFlag();
    
    UFUNCTION(BlueprintCallable)
    static void LobbyGetFighters(TArray<FString>& Result);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool LobbyGetCrossplayLobbyFlag();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool LobbyGetCrossplayFlag();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 LobbyGetCrossFlagTest();
    
    UFUNCTION(BlueprintPure)
    static int64 LobbyGetCosmosId();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float LobbyGetCameraSettingTrackingSpeedRate();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool LobbyGetCameraSettingReverseUpDownFlag();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool LobbyGetCameraSettingReverseLeftRightFlag();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float LobbyGetCameraSettingMoveSpeedRate();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 LobbyGetCameraSettingMouseOperationType();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool LobbyGetCameraSettingAutoTrackingFlag();
    
    UFUNCTION(BlueprintCallable)
    static int32 LobbyGetBasePlatformTag();
    
    UFUNCTION(BlueprintCallable)
    static void LobbyEnableKeyboard(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    static void LobbyDownloadGhostInWatchingBattle(int64 cosmosId, const FString& playerName, ULobbyBlueprintFunctionLibrary::FDownloadGhostFinishCallback Callback);
    
    UFUNCTION(BlueprintCallable)
    static void LobbyDownloadGhostInPlayerProfileView(int64 cosmosId, const FString& playerName, ULobbyBlueprintFunctionLibrary::FDownloadGhostFinishCallback Callback);
    
    UFUNCTION(BlueprintCallable)
    static void LobbyDownloadGhostInPlayerMatchSearchSession(int64 cosmosId, const FString& playerName, ULobbyBlueprintFunctionLibrary::FDownloadGhostFinishCallback Callback);
    
    UFUNCTION(BlueprintCallable)
    static void LobbyDownloadGhostInPlayerMatchRoom(int64 cosmosId, const FString& playerName, ULobbyBlueprintFunctionLibrary::FDownloadGhostFinishCallback Callback);
    
    UFUNCTION(BlueprintCallable)
    static void LobbyDownloadGhostInCommunityMenu(int64 cosmosId, const FString& playerName, ULobbyBlueprintFunctionLibrary::FDownloadGhostFinishCallback Callback);
    
    UFUNCTION(BlueprintPure)
    static FString LobbyCosmosIdToString(int64 cosmosId);
    
    UFUNCTION(BlueprintCallable)
    static void LobbyCloseProfileChatInWatchingBattle();
    
    UFUNCTION(BlueprintCallable)
    static void LobbyCloseProfileChatInPlayerMatchRoom();
    
    UFUNCTION(BlueprintCallable)
    static void LobbyCloseProfileChatInOnlineLobby();
    
    UFUNCTION(BlueprintCallable)
    static bool LobbyCheckToken();
    
    UFUNCTION(BlueprintCallable)
    static void LobbyButtonHelpTest();
    
    UFUNCTION(BlueprintCallable)
    static void LobbyButtonHelpSitting();
    
    UFUNCTION(BlueprintCallable)
    static void LobbyButtonHelpScene(const FString& Scene);
    
    UFUNCTION(BlueprintCallable)
    static void LobbyButtonHelpReturn();
    
    UFUNCTION(BlueprintCallable)
    static void LobbyButtonHelpPush();
    
    UFUNCTION(BlueprintCallable)
    static void LobbyButtonHelpPop();
    
    UFUNCTION(BlueprintCallable)
    static void LobbyButtonHelpEmoteListPlay();
    
    UFUNCTION(BlueprintCallable)
    static void LobbyButtonHelpEmoteListChangeRegistered();
    
    UFUNCTION(BlueprintCallable)
    static void LobbyButtonHelpEmoteListChange();
    
    UFUNCTION(BlueprintCallable)
    static void LobbyButtonHelpEmote();
    
    UFUNCTION(BlueprintCallable)
    static void LobbyButtonHelpDefault();
    
    UFUNCTION(BlueprintCallable)
    static void LobbyButtonHelpDecide();
    
    UFUNCTION(BlueprintCallable)
    static void LobbyButtonHelpClear();
    
    UFUNCTION(BlueprintCallable)
    static void LobbyButtonHelpCameraShift();
    
    UFUNCTION(BlueprintPure)
    static int64 LobbyAtoi64(const FString& numstr);
    
    UFUNCTION(BlueprintCallable)
    static void LobbyApiTest2(int32 apiId, const TArray<FString>& args);
    
    UFUNCTION(BlueprintCallable)
    static void LobbyApiTest(int32 apiId);
    
    UFUNCTION(BlueprintCallable)
    static void LobbyApiRequestSetBool(int32 apiId, const FString& arg, bool Value, ULobbyBlueprintFunctionLibrary::FLobbyOnGetStatus OnGetStatus);
    
    UFUNCTION(BlueprintCallable)
    static void LobbyApiRequestReportUser(const FString& targetUserId, int32 violationType, const FString& comment);
    
    UFUNCTION(BlueprintCallable)
    static void LobbyApiRequestReportItem(const FString& targetUserId, const FString& targetUgcId, int32 violationType, const FString& comment);
    
    UFUNCTION(BlueprintCallable)
    static void LobbyApiRequestPlayingTogetherUserList(ULobbyBlueprintFunctionLibrary::FLobbyOnGetTogetherUserList OnGetTogetherUserList);
    
    UFUNCTION(BlueprintCallable)
    static void LobbyApiRequestPlatformFriendList3(ULobbyBlueprintFunctionLibrary::FLobbyOnGetPlatformList OnGetPlatformFriendList);
    
    UFUNCTION(BlueprintCallable)
    static void LobbyApiRequestPlatformFriendList2(const FString& token, ULobbyBlueprintFunctionLibrary::FLobbyOnGetPlatformList OnGetPlatformFriendList);
    
    UFUNCTION(BlueprintCallable)
    static void LobbyApiRequestPlatformFriendList(ULobbyBlueprintFunctionLibrary::FLobbyOnGetPlatformList OnGetPlatformFriendList);
    
    UFUNCTION(BlueprintCallable)
    static void LobbyApiRequestGetBool(int32 apiId, const FString& arg, ULobbyBlueprintFunctionLibrary::FLobbyOnGetBool OnGetBool);
    
    UFUNCTION(BlueprintCallable)
    static void LobbyApiRequestFriendRequestRemove(const FString& targetUserId);
    
    UFUNCTION(BlueprintCallable)
    static void LobbyApiRequestFriendRequest(const FString& targetUserId, const FString& steamId);
    
    UFUNCTION(BlueprintCallable)
    static void LobbyApiRequestFriendRemove(const FString& targetUserId);
    
    UFUNCTION(BlueprintCallable)
    static void LobbyApiRequestFriendList(ULobbyBlueprintFunctionLibrary::FLobbyOnGetUserList OnGetUserList);
    
    UFUNCTION(BlueprintCallable)
    static void LobbyApiRequestFriendApprove(const FString& targetUserId);
    
    UFUNCTION(BlueprintCallable)
    static void LobbyApiRequestBlockList(ULobbyBlueprintFunctionLibrary::FLobbyOnGetBlockList OnGetBlockList);
    
    UFUNCTION(BlueprintCallable)
    static void LobbyApiRequestApplyingFriend(ULobbyBlueprintFunctionLibrary::FLobbyOnGetApplyingList OnGetApplyingList);
    
    UFUNCTION(BlueprintCallable)
    static void LobbyApiRequestAppliedFriend(ULobbyBlueprintFunctionLibrary::FLobbyOnGetAwatingList OnGetAwatingList);
    
    UFUNCTION(BlueprintCallable)
    static bool LobbyActivateDirectChatInWatchingBattle(const int32& InPlatform012, const FString& InPlayerName, const FString& InCosmosId, const FString& InPlatformId, const FString& InPolarisId, const FString& InOnlineId);
    
    UFUNCTION(BlueprintCallable)
    static bool LobbyActivateDirectChatInPlayerMatchRoom(const int32& InPlatform012, const FString& InPlayerName, const FString& InCosmosId, const FString& InPlatformId, const FString& InPolarisId, const FString& InOnlineId);
    
    UFUNCTION(BlueprintCallable)
    static void LobbNotificationClearFriendRequest();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetMyCrossPrivilege(bool InFriendOnly, bool InAll);
    
    UFUNCTION(BlueprintPure)
    static int64 ConvertCosmosIdToInt64(const FName& cosmosId);
    
};

