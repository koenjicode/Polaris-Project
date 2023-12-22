#pragma once
#include "CoreMinimal.h"
#include "Animation/SkeletalMeshActor.h"
#include "AvatarItemPrefabActor.generated.h"

class UAvatarItemPrefab;

UCLASS(Blueprintable)
class POLARIS_API AAvatarItemPrefabActor : public ASkeletalMeshActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAvatarItemPrefab* prefab;
    
    AAvatarItemPrefabActor(const FObjectInitializer& ObjectInitializer);

};

