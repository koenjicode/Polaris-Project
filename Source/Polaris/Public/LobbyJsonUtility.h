#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "LobbyJsonUtility.generated.h"

UCLASS(Blueprintable)
class POLARIS_API ULobbyJsonUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_SevenParams(FOnLobbyTest702, int32, Status, int32, banType, const FString&, banTextId, const FString&, banText, const FString&, banEndAt, int32, disconnectionRate, int32, browseFlag);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnLobbyTest701, int32, Status, int32, banType);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FOnLobbyTest605, int32, Status);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FOnLobbyTest2800, int32, Status);
    
    ULobbyJsonUtility();

    UFUNCTION(BlueprintCallable)
    static void LobbyTest702(ULobbyJsonUtility::FOnLobbyTest702 OnLobbyTest702);
    
    UFUNCTION(BlueprintCallable)
    static void LobbyTest701(ULobbyJsonUtility::FOnLobbyTest701 OnLobbyTest701);
    
    UFUNCTION(BlueprintCallable)
    static void LobbyTest605(int64 cosmosId, ULobbyJsonUtility::FOnLobbyTest605 OnLobbyTest605);
    
    UFUNCTION(BlueprintCallable)
    static void LobbyTest301();
    
    UFUNCTION(BlueprintCallable)
    static void LobbyTest2802(int32 Num);
    
    UFUNCTION(BlueprintCallable)
    static void LobbyTest2800(int64 cosmosId, ULobbyJsonUtility::FOnLobbyTest2800 OnLobbyTest2800);
    
};

