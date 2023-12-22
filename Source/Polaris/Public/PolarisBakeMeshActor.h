#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PolarisBakeMeshActor.generated.h"

class UItemPrefab;
class UMeshComponent;
class USceneComponent;
class USkeletalMeshComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class POLARIS_API APolarisBakeMeshActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* SrcSkeletalMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* SrcStaticMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* DefaultSceneRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UItemPrefab* SrcItemPrefab;
    
    APolarisBakeMeshActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SrcMeshSetting(UMeshComponent* _comp, UItemPrefab* _source_ip);
    
};

