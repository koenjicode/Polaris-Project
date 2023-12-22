#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "ChatGameInstanceSubsystem.generated.h"

class ULobbyChatText;

UCLASS(Blueprintable)
class POLARIS_API UChatGameInstanceSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ULobbyChatText* m_TextChat;
    
public:
    UChatGameInstanceSubsystem();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    ULobbyChatText* GetTextChat();
    
};

