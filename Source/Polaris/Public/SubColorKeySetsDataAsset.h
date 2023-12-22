#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SubColorKeySetsForFurItemStruct.h"
#include "SubColorKeySetsForHairItemStruct.h"
#include "SubColorKeySetsDataAsset.generated.h"

class USubColorKeySetsGroup;

UCLASS(Blueprintable)
class POLARIS_API USubColorKeySetsDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSubColorKeySetsForHairItemStruct> SubColorKeySetsForHairItemArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSubColorKeySetsForFurItemStruct> SubColorKeySetsForFurItemArray;
    
    USubColorKeySetsDataAsset();

    UFUNCTION(BlueprintCallable)
    USubColorKeySetsGroup* GetSubColorKeySetsForHairItem(const FString& _TargetCIName, int32 _SlotNum);
    
    UFUNCTION(BlueprintCallable)
    USubColorKeySetsGroup* GetSubColorKeySetsForFurItem(const FString& _TargetMIPath);
    
};

