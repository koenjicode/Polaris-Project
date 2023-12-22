#pragma once
#include "CoreMinimal.h"
#include "LobbyGameMode.h"
#include "AvatarCustomizeGameMode.generated.h"

class AAvatarCustomizeEventDispatcher;
class AAvatarCustomizeGameController;

UCLASS(Blueprintable, NonTransient)
class POLARIS_API AAvatarCustomizeGameMode : public ALobbyGameMode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AAvatarCustomizeGameController> GameController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AAvatarCustomizeEventDispatcher> EventDispatcher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsTutorial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool TransitedFromMainMenu;
    
    AAvatarCustomizeGameMode(const FObjectInitializer& ObjectInitializer);

};

