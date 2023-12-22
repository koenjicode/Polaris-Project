#pragma once
#include "CoreMinimal.h"
#include "DebugCustomizeMapActorSettingStruct.generated.h"

USTRUCT(BlueprintType)
struct POLARIS_API FDebugCustomizeMapActorSettingStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SelectedFighter;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> SelectedFighterArray;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> DispChTypeArray;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> DispChSeasonArray;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FString> EquipItemNameMap;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FString> EquipItemAccNameMap;
    
    FDebugCustomizeMapActorSettingStruct();
};

