#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "BlackPenViewerSubsystem.generated.h"

class ABlackPenAvatarViewerController;
class ABlackPenCharacterViewerController;
class ABlackPenImageViewerController;
class ABlackPenPlCustViewerController;
class ABlackPenProfCustViewerController;

UCLASS(Blueprintable)
class POLARIS_API UBlackPenViewerSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABlackPenCharacterViewerController* m_character_viewer_controller;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABlackPenAvatarViewerController* m_avatar_viewer_controller;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABlackPenPlCustViewerController* m_plcust_viewer_controller;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABlackPenProfCustViewerController* m_profcust_viewer_controller;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABlackPenImageViewerController* m_image_viewer_controller;
    
public:
    UBlackPenViewerSubsystem();

    UFUNCTION(BlueprintCallable)
    void SetProfCustViewerController(ABlackPenProfCustViewerController* Controller);
    
    UFUNCTION(BlueprintCallable)
    void SetPlCustViewerController(ABlackPenPlCustViewerController* Controller);
    
    UFUNCTION(BlueprintCallable)
    void SetImageViewerController(ABlackPenImageViewerController* Controller);
    
    UFUNCTION(BlueprintCallable)
    void SetCharacterViewerController(ABlackPenCharacterViewerController* Controller);
    
    UFUNCTION(BlueprintCallable)
    void SetAvatarViewerController(ABlackPenAvatarViewerController* Controller);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ABlackPenProfCustViewerController* GetProfCustViewerController() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ABlackPenPlCustViewerController* GetPlCustViewerController() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ABlackPenImageViewerController* GetImageViewerController() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ABlackPenCharacterViewerController* GetCharacterViewerController() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ABlackPenAvatarViewerController* GetAvatarViewerController() const;
    
};

