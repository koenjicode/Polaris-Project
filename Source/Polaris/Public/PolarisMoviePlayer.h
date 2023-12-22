#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PolarisMoviePlayerEventDelegate.h"
#include "PolarisMoviePlayerPlayEventDelegate.h"
#include "PolarisMoviePlayer.generated.h"

class UManaTexture;
class UMaterial;
class UPolarisManaPlayer;

UCLASS(Blueprintable)
class POLARIS_API UPolarisMoviePlayer : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPolarisMoviePlayerPlayEvent OnPlaying;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPolarisMoviePlayerEvent OnPlayEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPolarisMoviePlayerEvent OnStop;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPolarisManaPlayer* mana_player_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UManaTexture* player_texture_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UManaTexture* mana_texture_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<uint8> usm_data_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterial* material_opaque_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterial* material_translucent_;
    
public:
    UPolarisMoviePlayer();

    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void Stop() const;
    
    UFUNCTION(BlueprintCallable)
    void PlayStreamWithID(UManaTexture* Texture, int32 movie_id, bool is_opaque, bool is_loop, float Volume);
    
    UFUNCTION(BlueprintCallable)
    void PlayStream(UManaTexture* Texture, bool is_opaque, bool is_loop, float Volume);
    
    UFUNCTION(BlueprintCallable)
    void PlayMemoryWithID(const TArray<uint8>& Data, int32 movie_id, bool is_opaque, bool is_loop, float Volume);
    
    UFUNCTION(BlueprintCallable)
    void PlayMemory(const TArray<uint8>& Data, bool is_opaque, bool is_loop, float Volume);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void Pause(bool is_pause) const;
    
private:
    UFUNCTION(BlueprintCallable)
    void OnManaPlayerMovieOpened(const FString& opened_url);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSeeking() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlaying() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPaused() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMovieTotalFrame() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMovieID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMovieFrame() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCriStatus() const;
    
    UFUNCTION(BlueprintCallable)
    void ClearAllEvents();
    
};

