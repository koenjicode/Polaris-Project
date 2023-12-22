#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ELobbyTutorialType.h"
#include "LobbyTutorialFunctionLibrary.generated.h"

UCLASS(Blueprintable)
class POLARIS_API ULobbyTutorialFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    ULobbyTutorialFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static void SetLobbyTutorialDone(ELobbyTutorialType Type, bool IsSet);
    
    UFUNCTION(BlueprintCallable)
    static void Save();
    
    UFUNCTION(BlueprintCallable)
    static bool IsLobbyTutorialEnable();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsLobbyTutorialDone(ELobbyTutorialType Type);
    
};

