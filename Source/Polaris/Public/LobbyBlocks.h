#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "OnlineBlockMember.h"
#include "LobbyBlocks.generated.h"

class ULobbyBlocks;

UCLASS(Blueprintable)
class POLARIS_API ULobbyBlocks : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegate, bool, isSuccess);
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int64, FOnlineBlockMember> _blockMembers;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int64> _pfblocks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString _tmpResult;
    
    ULobbyBlocks();

    UFUNCTION(BlueprintCallable)
    void Release(int64 cosmosId, ULobbyBlocks::FDelegate OnRelease);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ULobbyBlocks* OnlineBlock();
    
    UFUNCTION(BlueprintPure)
    bool IsBlock(int64 cosmosId, const FString& steamId);
    
    UFUNCTION(BlueprintCallable)
    void DownloadBlockList(ULobbyBlocks::FDelegate OnDownload, bool isForceUpdate);
    
    UFUNCTION(BlueprintCallable)
    void Add(int64 cosmosId, ULobbyBlocks::FDelegate OnAdd);
    
};

