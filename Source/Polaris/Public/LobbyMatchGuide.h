#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LobbyMatchGuide.generated.h"

UCLASS(Blueprintable)
class POLARIS_API ALobbyMatchGuide : public AActor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_OneParam(FOnGetSessionInformation, bool, isSuccess);
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString _sessionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 _maxJoinNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 _joinNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool _passcodeFlag;
    
public:
    ALobbyMatchGuide(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void GetSessionInformation(const FString& sessionId, ALobbyMatchGuide::FOnGetSessionInformation OnGetSessionInformation);
    
};

