#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "InviteSessionList.h"
#include "SessionPlayerName.h"
#include "SessionBlueprintFunctionLibrary.generated.h"

UCLASS(Blueprintable)
class POLARIS_API USessionBlueprintFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_OneParam(FLobbyInviteSessionListDelegate, FInviteSessionList, Data);
    
    USessionBlueprintFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static void RefuseInvite(const FString& session_id_string, const FString& cosmos_id_string);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsSelf(const FString& cosmos_id);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetRemainWaitingConfirmTime();
    
    UFUNCTION(BlueprintCallable)
    static void GetInviteSessionList(USessionBlueprintFunctionLibrary::FLobbyInviteSessionListDelegate OnInviteSessionList);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetDisplayName(const FSessionPlayerName& session_player_name);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool ExistsInvitedSessions();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FDateTime ConvertToLocalDateTime(const FDateTime& UtcDateTime);
    
};

