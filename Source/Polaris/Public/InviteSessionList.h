#pragma once
#include "CoreMinimal.h"
#include "InviteSessionInfo.h"
#include "InviteSessionList.generated.h"

USTRUCT(BlueprintType)
struct FInviteSessionList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FInviteSessionInfo> InviteSessionList;
    
    POLARIS_API FInviteSessionList();
};

