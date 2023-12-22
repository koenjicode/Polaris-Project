#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PolarisBallActor.generated.h"

class UPolarisBallMeshComponent;

UCLASS(Blueprintable)
class POLARIS_API APolarisBallActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BallId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsVisibleActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPolarisBallMeshComponent* MainMesh;
    
    APolarisBallActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPolarisBallMeshComponent* GetMeshComponent() const;
    
};

