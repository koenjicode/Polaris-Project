#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "LobbyInventoryData.h"
#include "LobbyInventory.generated.h"

class ULobbyInventory;

UCLASS(Blueprintable)
class POLARIS_API ULobbyInventory : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_OneParam(FLobbyDownloadInventory, bool, isSuccess);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLobbyInventoryData> _items;
    
    ULobbyInventory();

    UFUNCTION(BlueprintCallable)
    void Test2500();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ULobbyInventory* LobbyInventory();
    
    UFUNCTION(BlueprintCallable)
    void GetCategoryItems(TArray<FName>& Result, const FName& Category);
    
    UFUNCTION(BlueprintCallable)
    void DownloadInventory(ULobbyInventory::FLobbyDownloadInventory OnDownloadInventory);
    
};

