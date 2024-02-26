#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LobbyCoordinate.h"
#include "LobbyLoungeEnemy.h"
#include "LobbyOtherState.h"
#include "LobbyEnemy.generated.h"

class ALobbyEnemy;
class ULobbyFootstepComponent;

UCLASS(Blueprintable)
class POLARIS_API ALobbyEnemy : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool _isRival;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool _isFriend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool _isFollow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 _rank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 _platform012;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULobbyFootstepComponent* LobbyFootstepComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 _currentMilliSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 _playingEmoteMilliSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> _displayNames2;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 _cosmosId3;
    
    ALobbyEnemy(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateOtherState(FLobbyOtherState& otherState);
    
    UFUNCTION(BlueprintCallable)
    void UpdateEmote();
    
    UFUNCTION(BlueprintCallable)
    void SetCosmosId(const FName& cosmosId, int64 cosmosId2);
    
    UFUNCTION(BlueprintCallable)
    static void LobbyGetLoungeEnemies(TMap<int64, FLobbyLoungeEnemy>& loungeEnemies);
    
    UFUNCTION(BlueprintCallable)
    static void LobbyGetEnemies(TMap<int64, ALobbyEnemy*>& enemies);
    
    UFUNCTION(BlueprintCallable)
    static ALobbyEnemy* LobbyFindEnemy(int64 cosmosId);
    
    UFUNCTION(BlueprintCallable)
    static bool LobbyEnemyIsWatchTarget(int64 cosmosId);
    
    UFUNCTION(BlueprintPure)
    static void LobbyEnemyGetDisplayNames(int64 cosmosId, TArray<FString>& displayNames);
    
    UFUNCTION(BlueprintCallable)
    void LeaveSeatWarp();
    
    UFUNCTION(BlueprintCallable)
    bool IsReadyEmote(FLobbyCoordinate& coordinate);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCloseLevel();
    
public:
    UFUNCTION(BlueprintCallable)
    bool IsCancelPlayingEmote(bool& isNextEmote, FLobbyCoordinate& coordinate);
    
    UFUNCTION(BlueprintCallable)
    bool InterpolationMove();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ImplUpdateStatusIcon();
    
public:
    UFUNCTION(BlueprintCallable)
    int32 GetSeatId();
    
    UFUNCTION(BlueprintCallable)
    void DirectMove();
    
};

