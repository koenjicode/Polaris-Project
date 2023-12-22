#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "LobbyInput.h"
#include "LobbyInputObject.generated.h"

UCLASS(Blueprintable)
class POLARIS_API ULobbyInputObject : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLobbyInput _struct;
    
    ULobbyInputObject();

};

