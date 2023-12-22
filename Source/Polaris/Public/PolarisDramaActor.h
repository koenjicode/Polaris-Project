#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PolarisDramaActor.generated.h"

class ALevelSequenceActor;
class ULevelSequence;
class ULevelSequencePlayer;

UCLASS(Blueprintable)
class POLARIS_API APolarisDramaActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelSequencePlayer* LevelSequencePlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ALevelSequenceActor* LevelSequenceActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelSequence* LevelSequence2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MotHeadFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ResetClothCheckMoveThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsStopAtEnd;
    
    APolarisDramaActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateCameraCut();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Stop();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Play();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsPlaying();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    ULevelSequencePlayer* GetPlayer();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CreatePlayer(ULevelSequence* LevelSequence);
    
};

