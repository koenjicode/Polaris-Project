#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EDebugCaptureCategory.h"
#include "MannequinMaterialHolder.h"
#include "MaterialCache.h"
#include "Templates/SubclassOf.h"
#include "PolarisDebugThumbnailShotActor.generated.h"

class UDebugCaptureDataList;
class UMaterial;
class UMaterialInterface;

UCLASS(Blueprintable)
class POLARIS_API APolarisDebugThumbnailShotActor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, UDebugCaptureDataList*> CameraMapCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FMannequinMaterialHolder> MaterialInstanceMapForMannequin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FMaterialCache> OldMaterialCache;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> AccPlace;
    
    APolarisDebugThumbnailShotActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SyncCamera(bool Enable);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetMaskCaptureMode(bool Enable);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetLightLevel(const FString& level_name, float offset_height);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetControlModeTextNone();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetControlModeTextCharacter();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetControlModeTextCamera();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetCaptureInfo(EDebugCaptureCategory Category, int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ResizeCaptureBorder(int32 X, int32 Y);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UMaterial* GetScreenShotMaterial();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FString GetParentMaterialName(UMaterialInterface* MaterialInstance);
    
};

