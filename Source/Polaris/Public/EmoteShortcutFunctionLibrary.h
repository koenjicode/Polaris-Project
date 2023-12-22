#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "LobbyInventoryData.h"
#include "EmoteShortcutFunctionLibrary.generated.h"

UCLASS(Blueprintable)
class POLARIS_API UEmoteShortcutFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UEmoteShortcutFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static void SetEmoteShortcutAll(const TArray<FName>& emote_names);
    
    UFUNCTION(BlueprintCallable)
    static void SaveEmoteShortcut();
    
    UFUNCTION(BlueprintCallable)
    static void GetEmoteShortcutAll(TArray<FName>& emote_names);
    
    UFUNCTION(BlueprintCallable)
    static void CreateDummyEmoteInventory(const FName& emote_name, FLobbyInventoryData& out_emote_inventory);
    
    UFUNCTION(BlueprintCallable)
    static bool AreAllShortcutsRegistered();
    
};

