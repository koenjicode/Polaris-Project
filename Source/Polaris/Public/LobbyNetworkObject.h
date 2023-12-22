#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "LobbyOtherState.h"
#include "LobbyNetworkObject.generated.h"

UCLASS(Blueprintable)
class POLARIS_API ULobbyNetworkObject : public UObject {
    GENERATED_BODY()
public:
    ULobbyNetworkObject();

    UFUNCTION(BlueprintCallable)
    void SetResponseDebugOwner();
    
    UFUNCTION(BlueprintCallable)
    void SetInterval(int32 Interval);
    
    UFUNCTION(BlueprintCallable)
    void SetCoordinateDebug(bool bCoordinateDebug);
    
    UFUNCTION(BlueprintCallable)
    void QuickChange(int32 slotId);
    
    UFUNCTION(BlueprintCallable)
    bool IsResponseDebugOwner(float& delayMin, float& delayMax);
    
    UFUNCTION(BlueprintCallable)
    bool IsLobbyErrors(TArray<int32>& Types, TArray<int32>& codes, TArray<FString>& Messages);
    
    UFUNCTION(BlueprintCallable)
    bool IsLobbyError(int32& Type, int32& code, FString& Message);
    
    UFUNCTION(BlueprintCallable)
    void InitializeResume();
    
    UFUNCTION(BlueprintCallable)
    TArray<int64> GetRemoveEnemies();
    
    UFUNCTION(BlueprintCallable)
    FLobbyOtherState GetOtherState(int64 cosmosId);
    
    UFUNCTION(BlueprintPure)
    int32 GetEnemyStateIndex(int64 enemyId) const;
    
    UFUNCTION(BlueprintCallable)
    void GetEnemiesCosmosIdAndNames(TMap<FName, FString>& Result);
    
    UFUNCTION(BlueprintCallable)
    void GetEnemiesCosmosIdAnd(TArray<FName>& cosmosId, TArray<FString>& onlineName, TArray<FString>& polarisId);
    
    UFUNCTION(BlueprintCallable)
    bool GetCoordinateDebug();
    
};

