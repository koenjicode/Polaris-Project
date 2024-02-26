#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EPolarisTAMAdviceType.h"
#include "EPolarisTAMBuddyMemoType.h"
#include "EPolarisTAMBuddyMenuType.h"
#include "EPolarisTAMCampMapIconType.h"
#include "EPolarisTAMLobbyType.h"
#include "EPolarisTAMMachineBattleClearType.h"
#include "EPolarisTAMNpcBattleState.h"
#include "EPolarisTAMRestartType.h"
#include "EPolarisTAMTalkType.h"
#include "PolarisTAMFunctionLibrary.generated.h"

class UDataTable;
class ULobbyAvatarData;
class UNpcAvatarData;
class UTexture2D;

UCLASS(Blueprintable)
class POLARIS_API UPolarisTAMFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPolarisTAMFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static void UpdateNextScenarioID(int32 current_id, bool is_special);
    
    UFUNCTION(BlueprintCallable)
    static void UpdateCampUnlockSpotIndex(EPolarisTAMLobbyType Type);
    
    UFUNCTION(BlueprintCallable)
    static void UpdateCampUnlockSpotAnimIndex();
    
    UFUNCTION(BlueprintCallable)
    static void UpdateCampScenarioID();
    
    UFUNCTION(BlueprintCallable)
    static void UnlockIncentiveId(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    static void UnlockBuddyMenu_Camp();
    
    UFUNCTION(BlueprintCallable)
    static void UnlockAllAdvice();
    
    UFUNCTION(BlueprintCallable)
    static void UnlockAdvice(EPolarisTAMAdviceType Type);
    
    UFUNCTION(BlueprintCallable)
    static void StopLobbySound();
    
    UFUNCTION(BlueprintCallable)
    static void StartLobbyMovie();
    
    UFUNCTION(BlueprintCallable)
    static void ShowTamTournamentUI(int32 target_round);
    
    UFUNCTION(BlueprintCallable)
    static void ShowTamHelpDialogFromSpotID(int32 spot_id);
    
    UFUNCTION(BlueprintCallable)
    static void ShowTamHelpDialogFromAdviceID(int32 advice_id, int32 sub_id);
    
    UFUNCTION(BlueprintCallable)
    static void ShowTamHelpDialog(const FString& help_dialog_id);
    
    UFUNCTION(BlueprintCallable)
    static void ShowTamDialog();
    
    UFUNCTION(BlueprintCallable)
    static void ShowTamButtonHelpByHash(int32 button_help_hash);
    
    UFUNCTION(BlueprintCallable)
    static void ShowTamButtonHelp(const FString& button_help_id);
    
    UFUNCTION(BlueprintCallable)
    static void ShowRewardDialogFromId(int32 id1, int32 id2, int32 id3, int32 id4, int32 id5);
    
    UFUNCTION(BlueprintCallable)
    static void ShowRewardDialog(const FString& reward_id, bool is_reward_dialog_id_direct);
    
    UFUNCTION(BlueprintCallable)
    static void ShowPrevTamButtonHelpByElement();
    
    UFUNCTION(BlueprintCallable)
    static void ShowLoadingIconTAM();
    
    UFUNCTION(BlueprintCallable)
    static void ShowInformationBar(const FString& text_id);
    
    UFUNCTION(BlueprintCallable)
    static void SetTutorialSkip(bool is_skip);
    
    UFUNCTION(BlueprintCallable)
    static void SetTutorialAdviceFlag(bool is_tutorial_advice);
    
    UFUNCTION(BlueprintCallable)
    static void SetTargetGhostLocation(int32 Type, int32 fighter_id);
    
    UFUNCTION(BlueprintCallable)
    static void SetTAMSequencerSkipFlag(bool flag);
    
    UFUNCTION(BlueprintCallable)
    static void SetTamDialogUseStr(bool is_use_str);
    
    UFUNCTION(BlueprintCallable)
    static void SetTamDialogHelpTextType(bool is_user_manual);
    
    UFUNCTION(BlueprintCallable)
    static void SetTamDialogGamePause();
    
    UFUNCTION(BlueprintCallable)
    static void SetTamDialogDisplayOrder(int32 Order);
    
    UFUNCTION(BlueprintCallable)
    static void SetTamDialogDefaultCursor(int32 default_cursor);
    
    UFUNCTION(BlueprintCallable)
    static void SetTamDialogCancelable(bool flag);
    
    UFUNCTION(BlueprintCallable)
    static void SetTamDialogButtonAlignCenter(bool flag);
    
    UFUNCTION(BlueprintCallable)
    static void SetTamDialogButton(int32 Index, const FString& Text);
    
    UFUNCTION(BlueprintCallable)
    static void SetSequencerSubtitle(const FString& movie_hash);
    
    UFUNCTION(BlueprintCallable)
    static void SetSequencerCurrentFrame(int32 frame);
    
    UFUNCTION(BlueprintCallable)
    static void SetSelectCampSpotIndex(int32 spot_index);
    
    UFUNCTION(BlueprintCallable)
    static void SetSelectCampSpotID(int32 spot_id);
    
    UFUNCTION(BlueprintCallable)
    static void SetScenarioID(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    static void SetRestartType(EPolarisTAMRestartType Type);
    
    UFUNCTION(BlueprintCallable)
    static void SetReplayInviteFlag(bool flag);
    
    UFUNCTION(BlueprintCallable)
    static void SetRankIncentiveId(int32 rank, int32 id1, int32 id2, int32 id3, int32 id4, int32 id5);
    
    UFUNCTION(BlueprintCallable)
    static void SetPlayerRotate(FRotator rot);
    
    UFUNCTION(BlueprintCallable)
    static void SetPlayerLocation(FVector Pos);
    
    UFUNCTION(BlueprintCallable)
    static void SetMachineBattleClearType(EPolarisTAMMachineBattleClearType Type);
    
    UFUNCTION(BlueprintCallable)
    static void SetMachineBattleClearFlag(bool flag);
    
    UFUNCTION(BlueprintCallable)
    static void SetLogicalDeviceAnalogToPOV(bool flag);
    
    UFUNCTION(BlueprintCallable)
    static void SetLobbyWaitPlayer(bool is_wait);
    
    UFUNCTION(BlueprintCallable)
    static void SetLobbyPauseMenuFlag(bool flag, bool is_sequencer);
    
    UFUNCTION(BlueprintCallable)
    static void SetLobbyMovieUse(bool flag);
    
    UFUNCTION(BlueprintCallable)
    static void SetLobbyMovieName(const FString& movie_name);
    
    UFUNCTION(BlueprintCallable)
    static void SetLobbyMovieLoadPause(bool flag);
    
    UFUNCTION(BlueprintCallable)
    static void SetIsSequencerMovieSkipAfter(bool flag);
    
    UFUNCTION(BlueprintCallable)
    static void SetIsPlayingEventSequencer(bool is_playing);
    
    UFUNCTION(BlueprintCallable)
    static void SetIsPause(bool flag);
    
    UFUNCTION(BlueprintCallable)
    static void SetIsMainMenuAfterResetCamera(bool flag);
    
    UFUNCTION(BlueprintCallable)
    static void SetIsLockBuddyMemo(EPolarisTAMBuddyMemoType Type);
    
    UFUNCTION(BlueprintCallable)
    static void SetInviteBuddyMemoType(EPolarisTAMBuddyMemoType Type);
    
    UFUNCTION(BlueprintCallable)
    static void SetHideButtonHelpFrame(int32 frame);
    
    UFUNCTION(BlueprintCallable)
    static void SetGhostUnlockId(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    static void SetGhostEventId(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    static void SetForceHideButtonhelp(bool flag);
    
    UFUNCTION(BlueprintCallable)
    static void SetEventSpecialParam(const FString& param_name, int32 Param);
    
    UFUNCTION(BlueprintCallable)
    static void SetEventScriptNextScenarioID(int32 next_id);
    
    UFUNCTION(BlueprintCallable)
    static void SetDownloadGhostCache(int32 npc_id, int32 ghost_index);
    
    UFUNCTION(BlueprintCallable)
    static void SetCpuGhostCache(int32 npc_id, int32 ghost_index);
    
    UFUNCTION(BlueprintCallable)
    static void SetClearLobby(EPolarisTAMLobbyType Type);
    
    UFUNCTION(BlueprintCallable)
    static void SetCampUnlockSpotIndex(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    static void SetCampSpotWin(int32 spot_index, int32 list_index);
    
    UFUNCTION(BlueprintCallable)
    static void SetCampSpotListIndex(int32 list_index);
    
    UFUNCTION(BlueprintCallable)
    static void SetCampSpotIndex(int32 spot_index);
    
    UFUNCTION(BlueprintCallable)
    static void SetCampSpotID(int32 spot_id);
    
    UFUNCTION(BlueprintCallable)
    static void SetCampSpotClick(int32 spot_index);
    
    UFUNCTION(BlueprintCallable)
    static void SetCampSpotClear(int32 spot_index);
    
    UFUNCTION(BlueprintCallable)
    static void SetCampSpotBossAppear(int32 spot_index);
    
    UFUNCTION(BlueprintCallable)
    static void SetCameraRotate(FRotator rot);
    
    UFUNCTION(BlueprintCallable)
    static void SetBuddyMissionIncentiveReceivedFlag(EPolarisTAMCampMapIconType lobby_type, bool flag);
    
    UFUNCTION(BlueprintCallable)
    static void SetBuddyMemoType(EPolarisTAMBuddyMemoType Type);
    
    UFUNCTION(BlueprintCallable)
    static void SetBattleRoundTime(int32 Second);
    
    UFUNCTION(BlueprintCallable)
    static void SetBattleRoundNum(int32 Num);
    
    UFUNCTION(BlueprintCallable)
    static void SetBattleNpcId(int32 npc_id);
    
    UFUNCTION(BlueprintCallable)
    static void SetBattleNaviDispFlag(bool flag);
    
    UFUNCTION(BlueprintCallable)
    static void SetAdvicePlayFlag(EPolarisTAMAdviceType Type, bool flag);
    
    UFUNCTION(BlueprintCallable)
    static void SetAdviceFromBuddyMenuFlag(bool is_advice_from_buddy_menu);
    
    UFUNCTION(BlueprintCallable)
    static void SendKPI_TutorialAllSkip_TAM();
    
    UFUNCTION(BlueprintCallable)
    static void SavePrevTamButtonHelpElement();
    
    UFUNCTION(BlueprintCallable)
    static void SaveButtonHelpHash(const FString& button_help_id);
    
    UFUNCTION(BlueprintCallable)
    static void ResetTamDialog(const FString& Title, const FString& Text, bool is_horizontal);
    
    UFUNCTION(BlueprintCallable)
    static void ResetSequencerSubtitle();
    
    UFUNCTION(BlueprintCallable)
    static void ResetReplayInvitePunishCount();
    
    UFUNCTION(BlueprintCallable)
    static void ResetReplayInviteComboCount();
    
    UFUNCTION(BlueprintCallable)
    static void ResetCampUnlockSpotAnimIndex();
    
    UFUNCTION(BlueprintCallable)
    static void ResetCampEnemyList();
    
    UFUNCTION(BlueprintCallable)
    static void RequestShowBuddyMenuNewIcon(EPolarisTAMBuddyMenuType Index);
    
    UFUNCTION(BlueprintCallable)
    static void RequestSequencerMovieTAM(const FString& movie_name);
    
    UFUNCTION(BlueprintCallable)
    static void RequestSave();
    
    UFUNCTION(BlueprintCallable)
    static void RequestMapSoundStart();
    
    UFUNCTION(BlueprintCallable)
    static void RequestLobbyChangeFadeWhite();
    
    UFUNCTION(BlueprintCallable)
    static void RequestLobbyChangeFadeClear();
    
    UFUNCTION(BlueprintCallable)
    static void RequestFadeClear();
    
    UFUNCTION(BlueprintCallable)
    static void RequestFadeBlackOut(float fade_time);
    
    UFUNCTION(BlueprintCallable)
    static void RequestFadeBlackIn(float fade_time);
    
    UFUNCTION(BlueprintCallable)
    static void RequestFadeBlack();
    
    UFUNCTION(BlueprintCallable)
    static void PreLoadSequencerMovieTAM(const FString& movie_name);
    
    UFUNCTION(BlueprintCallable)
    static void PlaySE_TalkDecide_Force();
    
    UFUNCTION(BlueprintCallable)
    static void PlaySE_TalkDecide();
    
    UFUNCTION(BlueprintCallable)
    static void OnEndNewChallenger_Lobby();
    
    UFUNCTION(BlueprintCallable)
    static void OnBeginNewChallenger_Lobby();
    
    UFUNCTION(BlueprintCallable)
    static UTexture2D* LoadTexture(const FString& Path);
    
    UFUNCTION(BlueprintCallable)
    static bool IsWinAllNpcCurrentLobby();
    
    UFUNCTION(BlueprintCallable)
    static bool IsUseSubtitleSpecialUI();
    
    UFUNCTION(BlueprintCallable)
    static bool IsUnlockBuddyMenu_Camp();
    
    UFUNCTION(BlueprintCallable)
    static bool IsUnlockAdvice(int32 advice_id);
    
    UFUNCTION(BlueprintCallable)
    static bool IsTrigHomeButton();
    
    UFUNCTION(BlueprintCallable)
    static bool IsTamTournamentUIEnd();
    
    UFUNCTION(BlueprintCallable)
    static bool IsTAMSequencerSkip();
    
    UFUNCTION(BlueprintCallable)
    static bool IsTamHelpDialogDecided();
    
    UFUNCTION(BlueprintCallable)
    static bool IsTamDialogGamePause();
    
    UFUNCTION(BlueprintCallable)
    static bool IsTamDialogDecided();
    
    UFUNCTION(BlueprintCallable)
    static bool IsTamDialogCanceled();
    
    UFUNCTION(BlueprintCallable)
    static bool IsTAMDebugHideAllUI();
    
    UFUNCTION(BlueprintCallable)
    static bool IsTAMDebugHeadNpcID();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsSuperGhostBattleSequence();
    
    UFUNCTION(BlueprintCallable)
    static bool IsShowUnlockNewGhostDialog();
    
    UFUNCTION(BlueprintCallable)
    static bool IsSequencerMovieSkipAfter();
    
    UFUNCTION(BlueprintCallable)
    static bool IsRewardDialogClosed();
    
    UFUNCTION(BlueprintCallable)
    static bool IsReplayInvitePunish();
    
    UFUNCTION(BlueprintCallable)
    static bool IsReplayInviteCombo();
    
    UFUNCTION(BlueprintCallable)
    static bool IsPlayingEventSequencer();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsPlayerGhostExist();
    
    UFUNCTION(BlueprintCallable)
    static bool IsModeNotLobby();
    
    UFUNCTION(BlueprintCallable)
    static bool IsMainMenuAfterResetCamera();
    
    UFUNCTION(BlueprintCallable)
    static bool IsLobbyPauseMenu();
    
    UFUNCTION(BlueprintCallable)
    static bool IsLobbyMovieUse();
    
    UFUNCTION(BlueprintCallable)
    static bool IsLobbyMoviePlaying();
    
    UFUNCTION(BlueprintCallable)
    static bool IsLobbyMovieLoaded();
    
    UFUNCTION(BlueprintCallable)
    static bool IsLobbyMovieEnd();
    
    UFUNCTION(BlueprintCallable)
    static bool IsInviteAdvice(EPolarisTAMAdviceType Type);
    
    UFUNCTION(BlueprintCallable)
    static bool IsIncentiveNpc(int32 npc_id);
    
    UFUNCTION(BlueprintCallable)
    static bool IsEnableGhostTutorial();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsDownloadGhostValid(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsDownloadGhostLoaded();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsDownloadGhostExist();
    
    UFUNCTION(BlueprintCallable)
    static bool IsDownloadGhostDeleted(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsCpuGhostValid(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsCpuGhostLoaded();
    
    UFUNCTION(BlueprintCallable)
    static bool IsClearLobby(EPolarisTAMLobbyType Type);
    
    UFUNCTION(BlueprintCallable)
    static bool IsChangeLobbyNone();
    
    UFUNCTION(BlueprintCallable)
    static bool IsCBT_TAM();
    
    UFUNCTION(BlueprintCallable)
    static bool IsCampSpotWin(int32 spot_index, int32 list_index);
    
    UFUNCTION(BlueprintCallable)
    static bool IsCampSpotClick(int32 spot_index);
    
    UFUNCTION(BlueprintCallable)
    static bool IsCampSpotClear(int32 spot_index);
    
    UFUNCTION(BlueprintCallable)
    static bool IsCampSpotBossAppear(int32 spot_index);
    
    UFUNCTION(BlueprintCallable)
    static bool IsBuddyMissionUnlock(EPolarisTAMCampMapIconType lobby_type, int32 mission_index);
    
    UFUNCTION(BlueprintCallable)
    static bool IsBuddyMissionIncentiveReceived(EPolarisTAMCampMapIconType lobby_type);
    
    UFUNCTION(BlueprintCallable)
    static bool IsBuddyMissionClear(EPolarisTAMCampMapIconType lobby_type, int32 mission_index);
    
    UFUNCTION(BlueprintCallable)
    static bool IsBuddyMenuIndexNewIcon(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    static bool IsAdviceMenuIndexNewIcon(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    static void IncCampUnlockSpotIndex();
    
    UFUNCTION(BlueprintCallable)
    static void HideTamButtonHelp();
    
    UFUNCTION(BlueprintCallable)
    static void HideLoadingIconTAM();
    
    UFUNCTION(BlueprintCallable)
    static void HideInformationBar();
    
    UFUNCTION(BlueprintCallable)
    static void HideBuddyMenuIndexNewIcon(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    static void HideAdviceMenuIndexNewIcon(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    static void GhostCacheClear();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetTamTournamentType();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetTamTournamentPlayerFighterName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UTexture2D* GetTamTournamentPlayerCharaIconNormalTexture();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UTexture2D* GetTamTournamentPlayerCharaIconHighlightTexture();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UTexture2D* GetTamTournamentNpcIconTexture(int32 npc_id);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetTamTournamentNpcFighterName(int32 npc_id);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UTexture2D* GetTamTournamentNpcCharaIconNormalTexture(int32 npc_id);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UTexture2D* GetTamTournamentNpcCharaIconHighlightTexture(int32 npc_id);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetTAMPlayerRankExpPromotion();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetTAMPlayerRankExp();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetTAMPlayerRank();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetTAMPlayerHighestRank();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetTamDialogResultIndex();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetTamDialogCursor();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetTamButtonHelpHash();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetSubtitleSpecialUI_AnimId();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetStringMaxLineLength(const FString& String, bool is_ignore_tag);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetStringLength(const FString& String, bool is_ignore_tag);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetStringLastLineLength(const FString& String, bool is_ignore_tag);
    
    UFUNCTION(BlueprintCallable)
    static UTexture2D* GetSkitTexture(const FString& skit_id);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetScenarioID();
    
    UFUNCTION(BlueprintCallable)
    static EPolarisTAMRestartType GetRestartType();
    
    UFUNCTION(BlueprintCallable)
    static FRotator GetPlayerRotate();
    
    UFUNCTION(BlueprintCallable)
    static FVector GetPlayerLocation();
    
    UFUNCTION(BlueprintCallable)
    static bool GetPlayerGhost(int32 Index, int32& fighter_id, int32& rank, int64& last_update_time, FDateTime& date_time);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FString> GetNpcTalk(int32 npc_id, EPolarisTAMTalkType talk_type);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetNpcRank(int32 talk_npc_id);
    
    UFUNCTION(BlueprintCallable)
    static FText GetNpcName(int32 npc_id);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetNpcBattleWinCountCurrent();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetNpcBattleWinCount(int32 npc_id);
    
    UFUNCTION(BlueprintCallable)
    static EPolarisTAMNpcBattleState GetNpcBattleState();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetMyPlayerName();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetMissionCount(EPolarisTAMCampMapIconType lobby_type);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetMachineEventNpcId();
    
    UFUNCTION(BlueprintCallable)
    static bool GetIsTamNPCButtleMode();
    
    UFUNCTION(BlueprintCallable)
    static bool GetIsTamMode();
    
    UFUNCTION(BlueprintCallable)
    static bool GetIsTamButtleMode();
    
    UFUNCTION(BlueprintCallable)
    static bool GetIsShowingBuddyMenu();
    
    UFUNCTION(BlueprintCallable)
    static bool GetIsSequenceFlag();
    
    UFUNCTION(BlueprintCallable)
    static bool GetIsOpeningDialog();
    
    UFUNCTION(BlueprintCallable)
    static EPolarisTAMBuddyMemoType GetInviteBuddyMemoType();
    
    UFUNCTION(BlueprintCallable)
    static EPolarisTAMAdviceType GetInviteAdviceType();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetIncentiveNpcId(int32 npc_id);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetHideButtonHelpFrame();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetGhostEventId();
    
    UFUNCTION(BlueprintCallable)
    static bool GetForceHideButtonhelp();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetEventSpecialParam(const FString& param_name);
    
    UFUNCTION(BlueprintPure)
    static bool GetDownloadGhostOnlineId(int32 Index, int64& online_id);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetDownloadGhostMaxCount();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetDownloadGhostCache(int32 npc_id, int32& ghost_index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetDownloadGhostAvatarData(int32 Index, FString& Name, FString& talk, int32& rank, ULobbyAvatarData* avatar_data, bool& is_won, bool& is_treasure);
    
    UFUNCTION(BlueprintCallable)
    static bool GetDownloadGhost(int32 Index, FString& Name, int32& fighter_id, int32& rank, int32& tekken_power, FDateTime& date_time, bool& is_won);
    
    UFUNCTION(BlueprintCallable)
    static EPolarisTAMLobbyType GetCurrentLobbyType();
    
    UFUNCTION(BlueprintCallable)
    static EPolarisTAMCampMapIconType GetCurrentCampMapIconType();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UNpcAvatarData* GetCpuGhostNpcAvatarData(const FString& asset_path);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetCpuGhostMaxCount();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetCpuGhostCache(int32 npc_id, int32& ghost_index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetCpuGhostAvatarData(int32 Index, FString& Name, FString& talk, int32& rank, FString& asset_path, int32& motion_id, bool& is_won, bool& is_treasure);
    
    UFUNCTION(BlueprintCallable)
    static bool GetCpuGhost(int32 Index, FString& Name, int32& fighter_id, int32& rank, int32& tekken_power, bool& is_won, bool& is_treasure);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetCharaMoveButtonHelpHash();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetCampUnlockSpotIndex();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetCampUnlockSpotAnimIndex();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetCampSpotListIndex();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetCampSpotIndex();
    
    UFUNCTION(BlueprintCallable)
    static UDataTable* GetCampEventDataTable();
    
    UFUNCTION(BlueprintCallable)
    static FRotator GetCameraRotate();
    
    UFUNCTION(BlueprintCallable)
    static bool GetButtonHelpIsVisible();
    
    UFUNCTION(BlueprintCallable)
    static FString GetBuddyMissionTextId(EPolarisTAMCampMapIconType lobby_type, int32 mission_index);
    
    UFUNCTION(BlueprintCallable)
    static FString GetBuddyMissionNumText(EPolarisTAMCampMapIconType lobby_type, int32 mission_index);
    
    UFUNCTION(BlueprintCallable)
    static FString GetBuddyMenuText(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    static EPolarisTAMBuddyMenuType GetBuddyMenuIndexType(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetBuddyMenuIndexNum();
    
    UFUNCTION(BlueprintCallable)
    static FString GetBuddyMenuHelpText(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    static EPolarisTAMBuddyMemoType GetBuddyMemoType();
    
    UFUNCTION(BlueprintCallable)
    static TArray<EPolarisTAMBuddyMemoType> GetBuddyMemoMenuList();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetBattleNpcId();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetAutoPlayEventNo();
    
    UFUNCTION(BlueprintCallable)
    static FString GetAdviceMenuText(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    static EPolarisTAMAdviceType GetAdviceMenuIndexType(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetAdviceMenuIndexNum();
    
    UFUNCTION(BlueprintCallable)
    static FString GetAdviceMenuHelpText(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    static void DownloadGhostDelete(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    static void DisableLobbyToBattleWait();
    
    UFUNCTION(BlueprintCallable)
    static void CloseTamDialog();
    
    UFUNCTION(BlueprintCallable)
    static void ClearMachineNpcIdList();
    
    UFUNCTION(BlueprintCallable)
    static void ChangeTutorialBattle();
    
    UFUNCTION(BlueprintCallable)
    static void ChangeSuperGhostBattle();
    
    UFUNCTION(BlueprintCallable)
    static void ChangePlayerCustomize();
    
    UFUNCTION(BlueprintCallable)
    static void ChangeMyReplayAndTips();
    
    UFUNCTION(BlueprintCallable)
    static void ChangeMachineBattle();
    
    UFUNCTION(BlueprintCallable)
    static bool ChangeLobby(EPolarisTAMLobbyType Type);
    
    UFUNCTION(BlueprintCallable)
    static void ChangeIsTournamentBracketFlag(bool flag);
    
    UFUNCTION(BlueprintCallable)
    static void ChangeIsShowingBuddyMenu(bool flag);
    
    UFUNCTION(BlueprintCallable)
    static void ChangeIsSequenceFlag(bool flag);
    
    UFUNCTION(BlueprintCallable)
    static void ChangeIsNPCTalkingFlag(bool flag);
    
    UFUNCTION(BlueprintCallable)
    static void ChangeIsExpeditionFlag(bool flag);
    
    UFUNCTION(BlueprintCallable)
    static void ChangeCharacterSelect();
    
    UFUNCTION(BlueprintCallable)
    static void ChangeCharacterCustomize();
    
    UFUNCTION(BlueprintCallable)
    static void ChangeCampaignBattle();
    
    UFUNCTION(BlueprintCallable)
    static void ChangeBattle();
    
    UFUNCTION(BlueprintCallable)
    static void ChangeAvatarCustomize();
    
    UFUNCTION(BlueprintCallable)
    static void ChangeAllClearMainMenu();
    
    UFUNCTION(BlueprintCallable)
    static void ChangeAdviceBattle(EPolarisTAMAdviceType Type);
    
    UFUNCTION(BlueprintCallable)
    static int32 CalcTamTournamentNpcBattleResult(int32 npc_id_1st, int32 npc_id_2nd);
    
    UFUNCTION(BlueprintCallable)
    static void AddMachineNpcIdList(int32 npc_id);
    
    UFUNCTION(BlueprintCallable)
    static void AddLobbyBattleNpcIdList(int32 npc_id);
    
};

