#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "LobbyEnemyInfo.h"
#include "LobbyInput.h"
#include "LobbyNetwork.h"
#include "PolarisCharacterGameMode.h"
#include "Templates/SubclassOf.h"
#include "LobbyGameMode.generated.h"

class AActor;
class ACameraActor;
class ALobbySoundManager;
class APawn;
class ULobbyEnemyManager;

UCLASS(Blueprintable, NonTransient)
class POLARIS_API ALobbyGameMode : public APolarisCharacterGameMode {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_OneParam(FLobbyOnTakeSeat, bool, isSuccess);
    DECLARE_DYNAMIC_DELEGATE(FLobbyOnFinishSimpleProfile);
    DECLARE_DYNAMIC_DELEGATE(FLobbyOnFinishPlayData);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FLobbyOnFinishPlatformCommunicationMSGDialog, bool, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FLobbyOnFinishGhostDialog, bool, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FLobbyOnCheckFirstBattle, bool, isFirstBattle);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool _isLobbyOnly2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool _isUseNetwork;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool _isBeginPlayFinished;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLobbyInput _input;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool _isDebug;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool _isDebugOffline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool _isInputActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool _isDown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool _isLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool _isRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool _isUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool _isFaceBottom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool _isFaceLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool _isFaceRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool _isFaceTop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool _isLeftShoulder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool _isLeftTrigger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool _isRightShoulder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool _isRightTrigger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString _balloonChat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString _balloonChatText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 _balloonChatStamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 _balloonChatTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 _balloonState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName _balloonChatStampName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool _isPhotoMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool _isBooting2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool _isDisableInput2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULobbyEnemyManager* _enemyManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ALobbySoundManager> LobbySoundManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ALobbySoundManager> LobbySoundManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ACameraActor> LobbyPhotoCameraActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<APawn> LobbyPawnPhotoCameraActor;
    
    ALobbyGameMode(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void WatchStart(int64 cosmosId);
    
    UFUNCTION(BlueprintCallable)
    bool WatchIsWaitReady();
    
    UFUNCTION(BlueprintCallable)
    bool WatchIsReady();
    
    UFUNCTION(BlueprintCallable)
    bool WatchIsAway();
    
    UFUNCTION(BlueprintCallable)
    FName WatchGetError();
    
    UFUNCTION(BlueprintCallable)
    void WatchExit();
    
    UFUNCTION(BlueprintCallable)
    void StartServerMonitoring();
    
    UFUNCTION(BlueprintCallable)
    void StartMatchmaking(int32 Delay);
    
    UFUNCTION(BlueprintCallable)
    void ShowPlayData(ALobbyGameMode::FLobbyOnFinishPlayData OnFinishPlayData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetTransformToEngineCamera();
    
    UFUNCTION(BlueprintCallable)
    void SetSimpleProfile(int64 cosmosId, int32 submenuType, ALobbyGameMode::FLobbyOnFinishSimpleProfile OnFinishSimpleProfile);
    
    UFUNCTION(BlueprintCallable)
    void SetLoadedSoundLevel();
    
    UFUNCTION(BlueprintCallable)
    void SetKeyboardActive(bool bActive);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetBootingFlag(bool isBooting);
    
    UFUNCTION(BlueprintCallable)
    static void SetAutoPlay(bool isAutoplay);
    
    UFUNCTION(BlueprintCallable)
    void SendSeatStatus(bool isSitting, FVector Location, FRotator Rotation);
    
    UFUNCTION(BlueprintCallable)
    void ResumeMatchmaking(int32 Delay);
    
    UFUNCTION(BlueprintCallable)
    void RequestTakeSeat(int32 seatId, ALobbyGameMode::FLobbyOnTakeSeat OnTakeSeat);
    
    UFUNCTION(BlueprintCallable)
    void RequestLeaveSeat();
    
    UFUNCTION(BlueprintCallable)
    void PlatformCommunicationMSGDialog(ALobbyGameMode::FLobbyOnFinishPlatformCommunicationMSGDialog OnPlatformCommunicationMSGDialog);
    
    UFUNCTION(BlueprintCallable)
    void PauseMatchmaking();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnStartPhotoMode();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnEndPhotoMode();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsShowProfileSimple() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsProfileScene();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOpenMatchDialog();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInvalidActionCtrl();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAnywhereMatchingSuspend() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAnywhereMatching() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool ImplRemoveDummyAvatars();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool ImplGetIsOnlyLobby();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    AActor* ImplGetColorDataAssetRespository();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool ImplAddDummyAvatar100();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool ImplAddDummyAvatar10();
    
    UFUNCTION(BlueprintCallable)
    void GotoWatchByBattleId(const FString& battleId);
    
    UFUNCTION(BlueprintCallable)
    void GotoWatch2();
    
    UFUNCTION(BlueprintCallable)
    void GotoWatch();
    
    UFUNCTION(BlueprintCallable)
    void GotoSwing2(int32 infoTranslation, const FString& StrParam1, int32 NumParam1);
    
    UFUNCTION(BlueprintCallable)
    void GotoSwing(int32 infoTranslation);
    
    UFUNCTION(BlueprintCallable)
    void GotoSpecialMatch(const FString& lobbyMatchId);
    
    UFUNCTION(BlueprintCallable)
    void GotoSpecial();
    
    UFUNCTION(BlueprintCallable)
    void GotoRankMatch();
    
    UFUNCTION(BlueprintCallable)
    void GotoQuickMatch();
    
    UFUNCTION(BlueprintCallable)
    void GotoPractice();
    
    UFUNCTION(BlueprintCallable)
    void GotoPlayerProfile();
    
    UFUNCTION(BlueprintCallable)
    void GotoPlayermatchSearch();
    
    UFUNCTION(BlueprintCallable)
    void GotoPlayerMatchRoom();
    
    UFUNCTION(BlueprintCallable)
    void GotoPlayermatchCreate();
    
    UFUNCTION(BlueprintCallable)
    void GotoPlayerCustomize();
    
    UFUNCTION(BlueprintCallable)
    void GotoOptionMenu();
    
    UFUNCTION(BlueprintCallable)
    void GotoOnlineReplay();
    
    UFUNCTION(BlueprintCallable)
    void GotoOnlineMenu();
    
    UFUNCTION(BlueprintCallable)
    void GotoMainMenu();
    
    UFUNCTION(BlueprintCallable)
    void GotoLobbyMatch(const FString& lobbyMatchId);
    
    UFUNCTION(BlueprintCallable)
    void GotoLeaderboard();
    
    UFUNCTION(BlueprintCallable)
    void GotoGhostBattle();
    
    UFUNCTION(BlueprintCallable)
    void GotoCharacterCustomize();
    
    UFUNCTION(BlueprintCallable)
    void GotoAvatarCustomize();
    
    UFUNCTION(BlueprintCallable)
    void GotoAnotherLobby(const FString& loungeId, const FString& loungeUrl, const FString& loungeName, int32 loungePlatform);
    
    UFUNCTION(BlueprintCallable)
    void GotoAccessibility();
    
    UFUNCTION(BlueprintCallable)
    void GhostDialog(int64 cosmosId, const FString& playerName, bool Save, ALobbyGameMode::FLobbyOnFinishGhostDialog OnFinishGhostDialog);
    
    UFUNCTION(BlueprintCallable)
    void GhostBattleDialog(int64 cosmosId, const FString& playerName, const FString& onlineId, ALobbyGameMode::FLobbyOnFinishGhostDialog OnFinishGhostDialog);
    
    UFUNCTION(BlueprintPure)
    int64 GetOwnPlayerId();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLobbyNetwork GetNetwork();
    
    UFUNCTION(BlueprintCallable)
    int32 GetLobbyIndex();
    
    UFUNCTION(BlueprintCallable)
    void GetEnemiesInfo(TArray<FLobbyEnemyInfo>& EnemiesInfo);
    
    UFUNCTION(BlueprintCallable)
    static bool GetAutoPlay();
    
    UFUNCTION(BlueprintCallable)
    void CloseSimpleProfile();
    
    UFUNCTION(BlueprintCallable)
    void CheckFirstBattle(ALobbyGameMode::FLobbyOnCheckFirstBattle OnCheckFirstBattle);
    
    UFUNCTION(BlueprintCallable)
    void CancelMatchmaking();
    
    UFUNCTION(BlueprintCallable)
    void AnywhereMatchingSuspend();
    
    UFUNCTION(BlueprintCallable)
    void AnywhereMatchingStart();
    
    UFUNCTION(BlueprintCallable)
    void AnywhereMatchingResume();
    
    UFUNCTION(BlueprintCallable)
    void AnywhereMatchingEnd();
    
};

