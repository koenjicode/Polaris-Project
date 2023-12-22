#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SESTBuildData.h"
#include "PolarisSESTBuilder.generated.h"

class UTexture2D;
class UTextureRenderTarget2D;

UCLASS(Blueprintable)
class POLARIS_API APolarisSESTBuilder : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTexture2D*> BaseSESTs;
    
    APolarisSESTBuilder(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowBuiltSESTBP(UTextureRenderTarget2D* sest_texture);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SESTBuildStartBP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SESTBuildFinishBP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ProcessSESTBuild(int32 step_num, const FSESTBuildData& step_build_data);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HideBuiltSESTBP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool CopyBuiltSESTToRenderTargetBP(UTextureRenderTarget2D* target_render_target);
    
};

