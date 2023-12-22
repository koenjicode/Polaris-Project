#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SessionListData.h"
#include "SessionListItem.generated.h"

UCLASS(Blueprintable)
class POLARIS_API USessionListItem : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSessionListData Data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 name_type;
    
    USessionListItem();

};

