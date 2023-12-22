#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "PolarisNiagaraActorParameter.h"
#include "PolarisNiagaraActorManager.generated.h"

class ANiagaraActor;
class UFXSystemComponent;
class UNiagaraSystem;

UCLASS(Blueprintable)
class POLARIS_API APolarisNiagaraActorManager : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPolarisNiagaraActorParameter> NiagaraLoopActorArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPolarisNiagaraActorParameter> NiagaraLoopCallbackActorArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RespawnUserParameterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RespawnIdUserParameterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName UseRespawnTagName;
    
    APolarisNiagaraActorManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void Respawn(UNiagaraSystem* Asset, const int32 ID, const FVector position);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeStageLight();
    
    UFUNCTION(BlueprintCallable)
    void AddNiagaraComp(UFXSystemComponent* niagara_comp);
    
    UFUNCTION(BlueprintCallable)
    void AddNiagaraActor(ANiagaraActor* niagara_actor);
    
};

