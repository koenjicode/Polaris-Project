#pragma once
#include "CoreMinimal.h"
#include "BarrierGroup.generated.h"

class APolarisActionVATMobBase;
class APolarisMobActor;
class APolarisMobAnimal;
class APolarisStageDummyActor;
class APolarisStageGimmickActor;
class ASkeletalMeshActor;
class AStaticMeshActor;

USTRUCT(BlueprintType)
struct FBarrierGroup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AStaticMeshActor*> StaticMeshActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ASkeletalMeshActor*> SkeletalMeshActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<APolarisStageGimmickActor*> StageGimmickActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<APolarisMobActor*> MobActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<APolarisMobAnimal*> MobAnimals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<APolarisActionVATMobBase*> ActionVATMobActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<APolarisStageDummyActor*> OtherActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AlphaOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Folder;
    
    POLARIS_API FBarrierGroup();
};

