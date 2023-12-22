#pragma once
#include "CoreMinimal.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGSessionFriendList.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class POLARIS_API UPolarisUMGSessionFriendList : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CanInviteOnlySamePlatform;
    
    UPolarisUMGSessionFriendList();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Show();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ResumeInput();
    
    UFUNCTION(BlueprintCallable)
    void OnOpenProfile(const FString& cosmos_id);
    
    UFUNCTION(BlueprintCallable)
    void OnInvite(const FString& cosmos_id, bool is_platform_friend);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool HasClosed();
    
};

