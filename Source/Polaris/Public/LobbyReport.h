#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "LobbyReportEvidence.h"
#include "LobbyReport.generated.h"

UCLASS(Blueprintable)
class POLARIS_API ULobbyReport : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_OneParam(FOnReport, int32, Status);
    
    ULobbyReport();

    UFUNCTION(BlueprintCallable)
    static void LobbyReport(int32 targetType, int32 violationType, const FString& comment, const FLobbyReportEvidence& evidence, ULobbyReport::FOnReport OnReport);
    
    UFUNCTION(BlueprintCallable)
    static void LobbyApiRequestReportDebugPlayerFromProfile(int64 cosmosId, int32 violationType, const FString& comment);
    
    UFUNCTION(BlueprintCallable)
    static void LobbyApiRequestReportDebug(int32 reportScreenType, int32 reportTargetType, const FString& targetUserId, int32 targetChatSendAt, const FString& targetChatText, const FString& targetExhibitId, const FString& targetBattleId, const FString& targetProfileComment, const FString& targetCustomizeItemDataSets, int32 violationType, const FString& comment);
    
};

