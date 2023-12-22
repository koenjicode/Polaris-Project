#pragma once
#include "CoreMinimal.h"
#include "Engine/Scene.h"
#include "Subsystems/WorldSubsystem.h"
#include "PolarisLightSubsystem.generated.h"

class AActor;
class APolarisCharacterLightBase;

UCLASS(Blueprintable)
class POLARIS_API UPolarisLightSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> CustomLight;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<APolarisCharacterLightBase*> CharacterLightList;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* DefaultCharacterLight;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPostProcessSettings PostProcessSettings;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentStageBaseExposure;
    
    UPolarisLightSubsystem();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetCharacterActor();
    
};

