#include "PolarisStageBlueprintLibrary.h"
#include "Templates/SubclassOf.h"

UPolarisStageBlueprintLibrary::UPolarisStageBlueprintLibrary() {
}

void UPolarisStageBlueprintLibrary::StageStopQuakeCamera() {
}

void UPolarisStageBlueprintLibrary::StageStartQuakeCamera(EStageCameraQuakeType Type, int32 frame) {
}

void UPolarisStageBlueprintLibrary::SkipPropagateLightingScenarioChange(const UObject* WorldContextObject, bool bSkip) {
}

void UPolarisStageBlueprintLibrary::SetVisibillityDefault(USkeletalMeshComponent* SkeletalMeshComponent, bool Visibility) {
}

void UPolarisStageBlueprintLibrary::SetVisibillityBroken(USkeletalMeshComponent* SkeletalMeshComponent, bool Visibility) {
}

void UPolarisStageBlueprintLibrary::SetPreviewShadowsIndicator(const UObject* WorldContextObject, bool bUseIndicator) {
}

void UPolarisStageBlueprintLibrary::SetMaterialDisableBarrierFlag(UPrimitiveComponent* PrimitiveComponent, bool Status) {
}

void UPolarisStageBlueprintLibrary::SetMaterialAlphaMax(UPrimitiveComponent* PrimitiveComponent, float ALPHA) {
}

UNiagaraComponent* UPolarisStageBlueprintLibrary::ReqEffectTRS(const UObject* WorldContextObject, UNiagaraSystem* Asset, const FVector& Location, const FRotator& Rotate, const FVector& Scale, bool bAutoSound) {
    return NULL;
}

UNiagaraComponent* UPolarisStageBlueprintLibrary::ReqEffect(const UObject* WorldContextObject, UNiagaraSystem* Asset, const FVector& Location, const FRotator& Rotate, bool bAutoSound) {
    return NULL;
}

void UPolarisStageBlueprintLibrary::PolarisUnloadStreamLevelImmediate(const UObject* WorldContextObject, const TSoftObjectPtr<UWorld> Level, bool bShouldBlockOnUnload, bool bUseVisibleFlag) {
}

void UPolarisStageBlueprintLibrary::PolarisLoadStreamLevelImmediate(const UObject* WorldContextObject, const TSoftObjectPtr<UWorld> Level, bool bMakeVisibleAfterLoad, bool bShouldBlockOnLoad, bool bUseVisibleFlag) {
}

void UPolarisStageBlueprintLibrary::InitMaterial(UPrimitiveComponent* PrimitiveComponent) {
}

void UPolarisStageBlueprintLibrary::InitBrokeonMaterial(UPrimitiveComponent* PrimitiveComponent, bool IsDisableBarrierFlag) {
}

void UPolarisStageBlueprintLibrary::InitBarrierMaterial(UPrimitiveComponent* PrimitiveComponent, FVector FacadeVector) {
}

int32 UPolarisStageBlueprintLibrary::GetStageFrameCounter() {
    return 0;
}

APolarisStageEffectManager* UPolarisStageBlueprintLibrary::GetStageEffectManager() {
    return NULL;
}

TArray<UNiagaraSystem*> UPolarisStageBlueprintLibrary::GetNiagaraAssetsBySequence(UMovieSceneSequence* Sequence) {
    return TArray<UNiagaraSystem*>();
}

FVector UPolarisStageBlueprintLibrary::GetNearPlayerPositionFromForwardVector(const AActor* Actor, bool HorizonalCenter) {
    return FVector{};
}

bool UPolarisStageBlueprintLibrary::GetAllActorComponentsOfClass(const UObject* WorldContextObject, TSubclassOf<UActorComponent> ActorComponentClass, TArray<UActorComponent*>& OutActorComponents) {
    return false;
}

void UPolarisStageBlueprintLibrary::CreateMaterialInstanceDynamic(UPrimitiveComponent* PrimitiveComponent) {
}

void UPolarisStageBlueprintLibrary::CallPropagateLightingScenarioReleaseRenderingResources(const UObject* WorldContextObject) {
}

void UPolarisStageBlueprintLibrary::CallPropagateLightingScenarioChangeAndSetDefault(const UObject* WorldContextObject) {
}

void UPolarisStageBlueprintLibrary::AddSublevelsToBeLoaded(const UObject* WorldContextObject, TArray<TSoftObjectPtr<UWorld>> sublevels) {
}


