#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CatwalkClothOverride.generated.h"

class USkeletalMesh;

UCLASS(Blueprintable)
class CATWALKCLOTH_API UCatwalkClothOverride : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USkeletalMesh> AppliedMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumLODs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bValidMeshAssigned;
    
    UCatwalkClothOverride();

};

