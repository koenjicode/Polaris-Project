#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DebugCustomizeMapActorSettingStruct.h"
#include "DebugCustomizeMapActorSetting.generated.h"

UCLASS(Blueprintable, Config=DebugCustomizeMapActorSetting)
class POLARIS_API UDebugCustomizeMapActorSetting : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDebugCustomizeMapActorSettingStruct> SettingStructArray;
    
    UDebugCustomizeMapActorSetting();

};

