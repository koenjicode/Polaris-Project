#pragma once
#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "PolarisGameInstance.generated.h"

class UKamuiManager;
class UPolarisMoviePlayer;

UCLASS(Blueprintable, NonTransient, Config=Engine)
class POLARIS_API UPolarisGameInstance : public UGameInstance {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKamuiManager* m_pKamuiManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPolarisMoviePlayer* m_pMoviePlayer;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> StartupPackages;
    
public:
    UPolarisGameInstance();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPolarisMoviePlayer* GetMoviePlayer() const;
    
};

