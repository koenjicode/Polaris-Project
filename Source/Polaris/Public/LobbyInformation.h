#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "LobbyInformationData.h"
#include "LobbyInformationLog.h"
#include "LobbyInformation.generated.h"

UCLASS(Blueprintable)
class POLARIS_API ULobbyInformation : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnLogCount, bool, isSuccess, int32, Num);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FOnDownloadLog, bool, isSuccess);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FOnDebugBuyup, bool, isSuccess);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FLobbyTest1201, bool, isSuccess);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FLobbyTest1200, bool, isSuccess);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FLobbyDownloadInformations, bool, isSuccess);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FLobbyClearAutomaticFlags, bool, isSuccess);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLobbyInformationData> _informations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLobbyInformationData> _banners;
    
    ULobbyInformation();

    UFUNCTION(BlueprintCallable)
    void Test1201(ULobbyInformation::FLobbyTest1201 OnTest1201);
    
    UFUNCTION(BlueprintCallable)
    void Test1200(ULobbyInformation::FLobbyTest1200 OnTest1200);
    
    UFUNCTION(BlueprintCallable)
    void SetAlreadyReadFlag(const FString& infoId);
    
    UFUNCTION(BlueprintCallable)
    void LogCount(ULobbyInformation::FOnLogCount OnLogCount);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 LobbyGetGameModeSubStoreByNewsIndex();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 LobbyGetGameModeStoreIndex();
    
    UFUNCTION(BlueprintCallable)
    static void LobbyDecideGameModeStoreByNews();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsValidLog(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void GetLogValue(int32 Index, FLobbyInformationLog& Result);
    
    UFUNCTION(BlueprintCallable)
    void DownloadLog(int32 Index, ULobbyInformation::FOnDownloadLog OnDownloadLog);
    
    UFUNCTION(BlueprintCallable)
    void DownloadInformations(ULobbyInformation::FLobbyDownloadInformations OnDownloadInformations);
    
    UFUNCTION(BlueprintCallable)
    void DebugBuyup(ULobbyInformation::FOnDebugBuyup OnDebugBuyup);
    
    UFUNCTION(BlueprintCallable)
    void ClearAutomaticFlags(ULobbyInformation::FLobbyClearAutomaticFlags OnClearAutomaticFlags);
    
};

