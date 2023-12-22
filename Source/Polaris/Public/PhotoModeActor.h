#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "PhotoMouseInput.h"
#include "PhotoModeActor.generated.h"

class APhotoFeatureColldier;
class APolarisPhotoModeWallActor;
class UCineCameraComponent;
class UPostProcessComponent;

UCLASS(Blueprintable)
class POLARIS_API APhotoModeActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor postProcessColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 postProcessColor_Copy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerDissable_Distance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsColorFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsVinetteFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsChromaticAberrationFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VinetteIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AbrrationIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPostProcessComponent* primePostProcess;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APhotoFeatureColldier* m_photoFeatureCollider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsDrawHUD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutoFocusDistance1P;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutoFocusDistance2P;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AutoFocus1P;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AutoFocus2P;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayerVisibility1P;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayerVisibility2P;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsAllowEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector PhotoColliderLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPhotoMouseInput Mouse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> PostProcessFitler;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> TextIDList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsUseTextID;
    
    APhotoModeActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UIAllFunction(float Val, float Delta, int32 _id);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Start();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetProgramFoVOnly(float& FOV);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetPlayerCameraFOV(float lensfov);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetMaterialColor();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetLensFoVOnly(float FOV);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetFoVToLens(float& _fov);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float SetDoFToUI(float Val);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float SetDoFByAutoFocus(float DoF);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetComponentLocation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetCineCameraTransform(FVector Pos, FVector rot, float FOV);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetCineCameraParamTest(float F);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetAutoFocus2P();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetAutoFocus1P();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ParameterReset(int32 DoF);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void MakeWallCollisionProperty(APolarisPhotoModeWallActor* wall);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void MakePolarisPhotoWallNative();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void MakePolarisPhotoWall();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HogeHoge();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UPostProcessComponent* GetPostProcessComponent();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetMIDParameter(int32 N, float& Val);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float GetFoVFromLens();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UCineCameraComponent* GetCineCameraComponent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void End();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CheckCameraDistanceToPlayer2(int32 PlayerId, int32 State);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CheckCameraDistanceToPlayer();
    
};

