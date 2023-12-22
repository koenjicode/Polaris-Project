#pragma once
#include "CoreMinimal.h"
#include "LobbyMachineState.generated.h"

class AActor;
class ALobbyMachineActor;

USTRUCT(BlueprintType)
struct FLobbyMachineState {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 _ownerCosmosId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ALobbyMachineActor* _pMachine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* _enemy;
    
    POLARIS_API FLobbyMachineState();
};

