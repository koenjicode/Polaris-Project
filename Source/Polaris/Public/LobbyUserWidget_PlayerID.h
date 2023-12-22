#pragma once
#include "CoreMinimal.h"
#include "LobbyUserWidget.h"
#include "LobbyUserWidget_PlayerID.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class POLARIS_API ULobbyUserWidget_PlayerID : public ULobbyUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsFisrtFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ServerPlayerName;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsFatalError;
    
    ULobbyUserWidget_PlayerID();

    UFUNCTION(BlueprintCallable)
    void SetMyPlayerName(const FString& playerName);
    
};

