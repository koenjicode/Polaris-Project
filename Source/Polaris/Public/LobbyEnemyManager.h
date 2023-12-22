#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "LobbyEnemyManager.generated.h"

class AActor;

UCLASS(Blueprintable)
class POLARIS_API ULobbyEnemyManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int64, AActor*> _enemies;
    
    ULobbyEnemyManager();

    UFUNCTION(BlueprintCallable)
    void Remove(int64 cosmosId);
    
};

