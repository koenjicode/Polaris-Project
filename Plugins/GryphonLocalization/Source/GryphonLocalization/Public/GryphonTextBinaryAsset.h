#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GryphonTextBinaryAsset.generated.h"

UCLASS(Blueprintable)
class GRYPHONLOCALIZATION_API UGryphonTextBinaryAsset : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 DataSize;
    
    UGryphonTextBinaryAsset();

};

