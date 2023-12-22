#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AvatarCustomizeEventDispatcher.generated.h"

UCLASS(Blueprintable)
class POLARIS_API AAvatarCustomizeEventDispatcher : public AActor {
    GENERATED_BODY()
public:
    AAvatarCustomizeEventDispatcher(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetButtonHelp(const FString& sceneName);
    
    UFUNCTION(BlueprintCallable)
    void RequestSaveGlobalData();
    
    UFUNCTION(BlueprintCallable)
    void PushButtonHelpState();
    
    UFUNCTION(BlueprintCallable)
    void PopButtonHelpState();
    
    UFUNCTION(BlueprintCallable)
    void ClearButtonHelpState();
    
};

