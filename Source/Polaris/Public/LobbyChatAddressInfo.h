#pragma once
#include "CoreMinimal.h"
#include "ELobbyChatAddressType.h"
#include "LobbyChatAddressInfoUser.h"
#include "LobbyChatAddressInfo.generated.h"

USTRUCT(BlueprintType)
struct POLARIS_API FLobbyChatAddressInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELobbyChatAddressType Address;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLobbyChatAddressInfoUser UserInfo;
    
    FLobbyChatAddressInfo();
};

