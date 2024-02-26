#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PolarisTextToSpeech.generated.h"

UCLASS(Blueprintable)
class POLARIS_API UPolarisTextToSpeech : public UObject {
    GENERATED_BODY()
public:
    UPolarisTextToSpeech();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StopSpeaking();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Speak(const FString& speak_string);
    
    UFUNCTION(BlueprintCallable)
    void SetVolumeLevel(int32 volume_level);
    
    UFUNCTION(BlueprintCallable)
    void SetRateLevel(int32 rate_level);
    
protected:
    UFUNCTION(BlueprintCallable)
    void setParam();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetEnable(bool Enable);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Initialize();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetVolume();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRate();
    
protected:
    UFUNCTION(BlueprintCallable)
    bool canSpeak();
    
};

