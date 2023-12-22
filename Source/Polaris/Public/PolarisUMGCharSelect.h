#pragma once
#include "CoreMinimal.h"
#include "CharSelectFighterInfo.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGCharSelect.generated.h"

class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class POLARIS_API UPolarisUMGCharSelect : public UPolarisUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, UTexture2D*> thumb_normal_textures;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, UTexture2D*> thumb_selected_textures;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, UTexture2D*> name_textures;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, UTexture2D*> bg_face_l_textures;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, UTexture2D*> bg_face_r_textures;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, UTexture2D*> bg_name_textures;
    
public:
    UPolarisUMGCharSelect();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowUnselectedAll(bool flag);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetDevelopment(bool flag);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayWipeAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OpenControllerDialog(int32 side);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetPanelCenter(float X, float Y);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetFacePanel(int32 X, int32 Y, int32 ID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetCurrentRank(bool is_left, const UTexture2D* rank_tex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetCurrentName(bool is_left, int32 ID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetCurrentFlag(bool is_left, int32 ID, bool is_random, bool is_decide);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetCurrentFighterInfo(bool is_left, const FCharSelectFighterInfo& fighter_info);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSelectedCPU(int32 X, int32 Y);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSelected2P(int32 X, int32 Y);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSelected1P2P(int32 X, int32 Y);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSelected1P(int32 X, int32 Y);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDeselected(int32 X, int32 Y);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDecidedCPU(int32 X, int32 Y);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDecided2P(int32 X, int32 Y);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDecided1P2P(int32 X, int32 Y);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDecided1P(int32 X, int32 Y);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCanceledDecidedRandom(int32 side);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCanceledDecidedCharacter(int32 side);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCanceled();
    
    UFUNCTION(BlueprintCallable)
    void InvokeSelectCallback(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void InvokeDecideCallback(int32 ID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool HasInAnimationFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CloseControllerDialog(int32 side);
    
};

