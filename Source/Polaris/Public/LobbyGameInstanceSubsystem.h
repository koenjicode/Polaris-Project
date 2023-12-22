#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "EPolarisCharacterAnimStatus.h"
#include "LobbyAvatarData_Struct.h"
#include "LobbyNetwork.h"
#include "LobbyGameInstanceSubsystem.generated.h"

class AActor;
class APolarisCharacterActor;
class ULobbyAvatarData;
class ULobbyBlocks;
class ULobbyEmote;
class ULobbyFriends;
class ULobbyInformation;
class ULobbyInventory;
class ULobbyMachineManager;
class ULobbyMatchingAnywhere;
class ULobbyNetworkObject;
class ULobbyNetworkSelect;
class ULobbyPlayerStatus;
class ULobbyStamp;
class ULobbyWatch;
class UPolarisParentalControl;

UCLASS(Blueprintable)
class POLARIS_API ULobbyGameInstanceSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSpawnLobbyPlayerCharacter, AActor*, Actor);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FForceCloseReport);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 _levelState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector _location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator _rotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool _isSitting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 _seatId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector _resumeLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator _resumeRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool _bReturnToLobby;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool _bGotoCustomize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool _bGoToAnother;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool _isFemale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool _isRandomFemale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool _isArcadeController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString _dummyCosmosAddress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool _isDisableKamuiInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool _isUseNetwork;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool _isFixLobby;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool _isDebugLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool _isDebugForceFogOff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLobbyAvatarData_Struct _customize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool _bEmoteOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString _displayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool _isAlwaysMouseCursor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool _isAlwaysMouseCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool _isDisplayPolarisId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool _isEnemyDirectMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> _emoteShortcuts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool _isCrossPlatform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 _platform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 _interval;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FForceCloseReport OnForceCloseReport;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpawnLobbyPlayerCharacter OnSpawnLobbyPlayerCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLobbyNetwork _network;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULobbyNetworkObject* _networkObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULobbyWatch* _watch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULobbyEmote* _lobbyEmote;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULobbyStamp* _lobbyStamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULobbyBlocks* _blocks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULobbyFriends* _friends;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULobbyInformation* _information;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULobbyMachineManager* _machines;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULobbyPlayerStatus* _playerStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULobbyInventory* _inventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPolarisParentalControl* _parentalcontrol;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULobbyMatchingAnywhere* MatchingAnywhere;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULobbyNetworkSelect* _lobbyNetworkSelect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LastEnteredPasscode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool _isLoungeStandByStarted;
    
    ULobbyGameInstanceSubsystem();

    UFUNCTION(BlueprintCallable)
    void StopAnimation(APolarisCharacterActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void StartLoadCharacter(int32 fighter_id, UPARAM(Ref) FTransform& Transform);
    
    UFUNCTION(BlueprintCallable)
    void StartDeleteCharacter();
    
    UFUNCTION(BlueprintCallable)
    void SetSpawnLobbyPlayerCharacter(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void SetReturnToLobby(int32 levelState);
    
    UFUNCTION(BlueprintCallable)
    void SetResumeLocationAndRotation(const FVector& Location, const FRotator& Rotation);
    
    UFUNCTION(BlueprintCallable)
    void SetGoToAnother(const AActor* Pawn);
    
    UFUNCTION(BlueprintCallable)
    void ResetPushedCamera();
    
    UFUNCTION(BlueprintCallable)
    void Reset();
    
    UFUNCTION(BlueprintCallable)
    void PushCamera(const FRotator& Rotator, bool isLevelEnd);
    
    UFUNCTION(BlueprintCallable)
    void PrepareGotoAnotherLevel2(const AActor* Pawn, const ULobbyAvatarData* customize, bool isSitting, int32 seatId);
    
    UFUNCTION(BlueprintCallable)
    void PrepareGotoAnotherLevel(const AActor* Pawn, const ULobbyAvatarData* customize, bool isSitting);
    
    UFUNCTION(BlueprintCallable)
    void PopCamera(FRotator& Rotator, bool& Success);
    
    UFUNCTION(BlueprintCallable)
    void PlayAnimationByStatus(EPolarisCharacterAnimStatus Status);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLoadingCharacter();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInitializedNetwork() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetTekkenPowerString();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetPlayerName();
    
    UFUNCTION(BlueprintCallable)
    bool GetAndClearLoungeRelocation();
    
    UFUNCTION(BlueprintCallable)
    void ForceCloseReport();
    
};

