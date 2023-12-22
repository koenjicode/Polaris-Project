#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "ELobbyReportScreenType.h"
#include "PlayerProfileData.h"
#include "ProfileGameInstanceSubsystem.generated.h"

class ALobbyInputActor;
class APolarisCharacterActor;
class AProfileController;

UCLASS(Blueprintable)
class POLARIS_API UProfileGameInstanceSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE(FProfileCloseCallback);
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AProfileController* ProfileController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ALobbyInputActor* InputActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ViewUserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString OwnUserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerProfileData ViewProfileData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerProfileData OwnProfileData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELobbyReportScreenType reportScreenType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FProfileCloseCallback OnProfileClosed;
    
public:
    UProfileGameInstanceSubsystem();

    UFUNCTION(BlueprintCallable)
    void StopAnimation(APolarisCharacterActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void SetViewUserId(const FString& user_id);
    
    UFUNCTION(BlueprintCallable)
    void SetViewProfileData(const FPlayerProfileData& profile_data);
    
    UFUNCTION(BlueprintCallable)
    void SetReportScreenType(ELobbyReportScreenType screen_type);
    
    UFUNCTION(BlueprintCallable)
    void SetProfileController(AProfileController* Controller);
    
    UFUNCTION(BlueprintCallable)
    void SetProfileCloseCallback(UProfileGameInstanceSubsystem::FProfileCloseCallback Callback);
    
    UFUNCTION(BlueprintCallable)
    void SetOwnProfileData(const FPlayerProfileData& profile_data);
    
    UFUNCTION(BlueprintCallable)
    void SetInputManager(ALobbyInputActor* input_actor);
    
    UFUNCTION(BlueprintPure)
    int64 GetViewUserIdToInt64();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetViewUserId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPlayerProfileData GetViewProfileData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ELobbyReportScreenType GetReportScreenType();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AProfileController* GetProfileController();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPlayerProfileData GetOwnProfileData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ALobbyInputActor* GetInputManager();
    
    UFUNCTION(BlueprintCallable)
    void ExitScene();
    
    UFUNCTION(BlueprintCallable)
    void ExecuteProfileCloseCallback();
    
};

