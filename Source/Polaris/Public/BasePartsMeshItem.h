#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SkeletalMeshRigSetArray.h"
#include "BasePartsMeshItem.generated.h"

UCLASS(Blueprintable)
class POLARIS_API UBasePartsMeshItem : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FSkeletalMeshRigSetArray> SourceSkeletalMeshSetArray;
    
    UBasePartsMeshItem();

};

