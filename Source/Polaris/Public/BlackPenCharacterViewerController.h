#pragma once
#include "CoreMinimal.h"
#include "BlackPenViewerControllerBase.h"
#include "BlackPenCharacterViewerController.generated.h"

class AActor;
class UItemPrefab;

UCLASS(Blueprintable)
class POLARIS_API ABlackPenCharacterViewerController : public ABlackPenViewerControllerBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* character_spawn_root;
    
public:
    ABlackPenCharacterViewerController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartLoadCharacter();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowAccessoryOnly(const TSoftObjectPtr<UItemPrefab>& ItemPrefab);
    
    UFUNCTION(BlueprintCallable)
    void SetCharacterSpawnRoot(AActor* Root);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EndLoadCharacter();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DestroyAccessory();
    
};

