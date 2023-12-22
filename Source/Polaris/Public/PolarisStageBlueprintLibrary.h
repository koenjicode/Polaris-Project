#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EStageCameraQuakeType.h"
#include "Templates/SubclassOf.h"
#include "PolarisStageBlueprintLibrary.generated.h"

class AActor;
class APolarisStageEffectManager;
class UActorComponent;
class UMovieSceneSequence;
class UNiagaraComponent;
class UNiagaraSystem;
class UObject;
class UPrimitiveComponent;
class USkeletalMeshComponent;
class UWorld;

UCLASS(Blueprintable)
class POLARIS_API UPolarisStageBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPolarisStageBlueprintLibrary();

    UFUNCTION(BlueprintCallable)
    static void StageStopQuakeCamera();
    
    UFUNCTION(BlueprintCallable)
    static void StageStartQuakeCamera(EStageCameraQuakeType Type, int32 frame);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SkipPropagateLightingScenarioChange(const UObject* WorldContextObject, bool bSkip);
    
    UFUNCTION(BlueprintCallable)
    static void SetVisibillityDefault(USkeletalMeshComponent* SkeletalMeshComponent, bool Visibility);
    
    UFUNCTION(BlueprintCallable)
    static void SetVisibillityBroken(USkeletalMeshComponent* SkeletalMeshComponent, bool Visibility);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetPreviewShadowsIndicator(const UObject* WorldContextObject, bool bUseIndicator);
    
    UFUNCTION(BlueprintCallable)
    static void SetMaterialDisableBarrierFlag(UPrimitiveComponent* PrimitiveComponent, bool Status);
    
    UFUNCTION(BlueprintCallable)
    static void SetMaterialAlphaMax(UPrimitiveComponent* PrimitiveComponent, float ALPHA);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UNiagaraComponent* ReqEffectTRS(const UObject* WorldContextObject, UNiagaraSystem* Asset, const FVector& Location, const FRotator& Rotate, const FVector& Scale, bool bAutoSound);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UNiagaraComponent* ReqEffect(const UObject* WorldContextObject, UNiagaraSystem* Asset, const FVector& Location, const FRotator& Rotate, bool bAutoSound);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void PolarisUnloadStreamLevelImmediate(const UObject* WorldContextObject, const TSoftObjectPtr<UWorld> Level, bool bShouldBlockOnUnload, bool bUseVisibleFlag);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void PolarisLoadStreamLevelImmediate(const UObject* WorldContextObject, const TSoftObjectPtr<UWorld> Level, bool bMakeVisibleAfterLoad, bool bShouldBlockOnLoad, bool bUseVisibleFlag);
    
    UFUNCTION(BlueprintCallable)
    static void InitMaterial(UPrimitiveComponent* PrimitiveComponent);
    
    UFUNCTION(BlueprintCallable)
    static void InitBrokeonMaterial(UPrimitiveComponent* PrimitiveComponent, bool IsDisableBarrierFlag);
    
    UFUNCTION(BlueprintCallable)
    static void InitBarrierMaterial(UPrimitiveComponent* PrimitiveComponent, FVector FacadeVector);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetStageFrameCounter();
    
    UFUNCTION(BlueprintCallable)
    static APolarisStageEffectManager* GetStageEffectManager();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<UNiagaraSystem*> GetNiagaraAssetsBySequence(UMovieSceneSequence* Sequence);
    
    UFUNCTION(BlueprintCallable)
    static FVector GetNearPlayerPositionFromForwardVector(const AActor* Actor, bool HorizonalCenter);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool GetAllActorComponentsOfClass(const UObject* WorldContextObject, TSubclassOf<UActorComponent> ActorComponentClass, TArray<UActorComponent*>& OutActorComponents);
    
    UFUNCTION(BlueprintCallable)
    static void CreateMaterialInstanceDynamic(UPrimitiveComponent* PrimitiveComponent);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void CallPropagateLightingScenarioReleaseRenderingResources(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void CallPropagateLightingScenarioChangeAndSetDefault(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void AddSublevelsToBeLoaded(const UObject* WorldContextObject, TArray<TSoftObjectPtr<UWorld>> sublevels);
    
};

