#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PolarisMapOpenScriptActor.generated.h"

UCLASS(Blueprintable)
class POLARIS_API APolarisMapOpenScriptActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PersistentLevelName;
    
    APolarisMapOpenScriptActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnMapChangeBP(FString& Message, bool bBegin);
    
};

