#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "InviteSessionInfo.h"
#include "InviteSessionListItem.generated.h"

UCLASS(Blueprintable)
class POLARIS_API UInviteSessionListItem : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInviteSessionInfo Data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Index;
    
    UInviteSessionListItem();

};

