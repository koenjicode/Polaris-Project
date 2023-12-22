#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ParentConstraintBinary.generated.h"

UCLASS(Blueprintable)
class POLARIS_API UParentConstraintBinary : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> RawData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Version;
    
    UParentConstraintBinary();

};

