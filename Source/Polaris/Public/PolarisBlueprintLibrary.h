#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EPolarisAntiAliasingMethod.h"
#include "EPolarisDynamicShadowPreset.h"
#include "EPolarisResolutionUpscaling.h"
#include "EPolarisShadowMaxResolusionPreset.h"
#include "EStageLightType.h"
#include "PolarisBlueprintLibrary.generated.h"

class AActor;
class APawn;
class APolarisBallManager;
class APolarisCharacterManager;
class APolarisDramaManager;
class APolarisEffectManager;
class APolarisMobActor;
class APolarisMobManager;
class APolarisStageManager;
class UAkAudioEvent;
class UEventDispatcherObject;
class UMaterialInterface;
class UObject;
class UTexture2D;
class UTextureRenderTarget2D;

UCLASS(Blueprintable)
class POLARIS_API UPolarisBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPolarisBlueprintLibrary();

    UFUNCTION(BlueprintCallable)
    static bool WaitForShaderCompilation();
    
    UFUNCTION(BlueprintCallable)
    static void UpdateDynamicResolutionStatus();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector UECoordToTekkenCoord(const FVector& UECoord, float space_scaling);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector ToUnrealCoord(const FVector& TekkenCoord, float space_scaling);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SkipChangeStageLightTypeFlagAtMotheadEndForStoryMode();
    
    UFUNCTION(BlueprintCallable)
    static void SetWWiseSoundSwitchValue(const FString& _SwitchGroup, const FString& _SwitchValue, AActor* _srcActor);
    
    UFUNCTION(BlueprintCallable)
    static void SetWWiseSoundStateValue(const FString& _StateName, const FString& _StateValue);
    
    UFUNCTION(BlueprintCallable)
    static void SetWWiseSoundRTPCValue(const FString& _RTPCName, float _RtpcValue, AActor* _srcActor);
    
    UFUNCTION(BlueprintCallable)
    static void SetVariableRateShadingEnabled(bool Enabled);
    
    UFUNCTION(BlueprintCallable)
    static void SetShadowMaxResolusionPreset(EPolarisShadowMaxResolusionPreset Preset);
    
    UFUNCTION(BlueprintCallable)
    static void SetResolutionUpscaling(EPolarisResolutionUpscaling upscaling);
    
    UFUNCTION(BlueprintCallable)
    static void SetForceMipLevelsToBeResident(UTexture2D* pTex, float Second);
    
    UFUNCTION(BlueprintCallable)
    static void SetEngineCameraMode(bool bCameraFromEngine);
    
    UFUNCTION(BlueprintCallable)
    static void SetDynamicShadowPreset(EPolarisDynamicShadowPreset Preset);
    
    UFUNCTION(BlueprintCallable)
    static void SetAntiAliasingMethod(EPolarisAntiAliasingMethod Method);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void PolarisExecuteConsoleCommand(UObject* WorldContextObject, const FString& ExecCommand, bool bWriteToLog);
    
    UFUNCTION(BlueprintCallable)
    static void KeyOnWWiseAudioEvent(UAkAudioEvent* _srcEvent, int32 NoMultiPlayFrame, AActor* _srcActor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsZoneDrive();
    
    UFUNCTION(BlueprintCallable)
    static bool IsVectorParameterValueOverriden(UMaterialInterface* pMaterialInterface, const FName& Parameter);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsVariableRateShadingSupported();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsVariableRateShadingEnabled();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsSwitchedToDemonstrationStage();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsStoryMultipleCpuMode();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsStoryMode();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsPlayerVisible(int32 player_id);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsMotheadDrama(int32 player_id);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsMatchRound();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsMatchPoint();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsLowestSpec();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsFighterPowerUp(int32 player_id);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsFighterBeforeAttackingEnd(int32 player_id);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsFighterAttackingMot(int32 player_id);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsFighterAttacking(int32 player_id);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsEnableResolutionUpscaling(EPolarisResolutionUpscaling upscaling);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsDoingZoneCutIn(int32 player_id);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsDoingZone(int32 player_id);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsDoingStop();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsDoingRageAura(int32 player_id);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsDoingRageArtsPre(int32 player_id);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsDoingRageArtsPlayerID(int32 player_id);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsDoingRageArts();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsDisableBattleHUD();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsBattlePostFilterON();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsBattleMain();
    
    UFUNCTION(BlueprintCallable)
    static bool IsBackground();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsAutoResolutionControlEnabled();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsActorInActiveWorld(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetZoneGuardDamage(int32 player_id);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetZoneCounter(int32 player_id);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetTargetPlayerID(int32 player_id);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetStatUnitRHIRaw();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetStatUnitRenderRaw();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetStatUnitGPURaw();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetStatUnitGameRaw();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetStatUnitFrameTimeRaw();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetStatUnitFrameTimeByDelta(float Delta);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetStageRoundCount();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetStageModelNo();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static APolarisStageManager* GetStageManager();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetSideByPlayerID(int32 player_id);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EPolarisResolutionUpscaling GetResolutionUpscaling();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetRenderingMovieFlag();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetPlayerIDOriginalFromID(int32 player_id);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetPlayerCount();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static APolarisMobManager* GetMobManager();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetKamuiHashDigest(const FString& String);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetGameSpeedTotal();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetFloorHeightByPlayerID(int32 player_id);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static float GetFloorHeight(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GetFighterPosition(int32 player_id);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FQuat GetFighterJointRotateQuat(int32 player_id, const FString& joint_name);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FRotator GetFighterJointRotateByName(int32 player_id, const FString& joint_name);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FRotator GetFighterJointRotateByGameBoneId(int32 player_id, int32 game_bone_id);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FRotator GetFighterJointRotate(int32 player_id, int32 joint_index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GetFighterJointPositionByName(int32 player_id, const FString& joint_name);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GetFighterJointPositionByGameBoneId_Model(int32 player_id, int32 game_bone_id);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GetFighterJointPositionByGameBoneId(int32 player_id, int32 game_bone_id);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GetFighterJointPosition(int32 player_id, int32 joint_index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetFighterIDByPlayerID(int32 player_id);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FRotator GetFighterBaseRotation(int32 player_id);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GetFighterBasePosition(int32 player_id);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetFighterAttackingDamageValue(int32 player_id);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetFighterAttackingBone(int32 player_id);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UEventDispatcherObject* GetEventDispatcherObject();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static APolarisEffectManager* GetEffectManager();
    
    UFUNCTION(BlueprintCallable)
    static float GetDrameLatestMotheadFrame();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static APolarisDramaManager* GetDramaManager();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EStageLightType GetCurrentStageLightType();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetCurrentBattleMode(bool& bMotheadInterface, bool& bBattle, bool& bCustomize);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static APolarisCharacterManager* GetCharacterManager();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetBattleRound();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static APolarisBallManager* GetBallManager();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetApplicationMode(bool& bBuildDevelop, bool& bBuildTest, bool& bBuildShipping, bool& bEditor, bool& bPlaySimulateMode, bool& bPlayInEditor, bool& bNoMenuTab);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EPolarisAntiAliasingMethod GetAntiAliasingMethod();
    
    UFUNCTION(BlueprintCallable)
    static void ForceLog(const FString& String);
    
    UFUNCTION(BlueprintCallable)
    static void DrawToRenderTargetWithDataArray(UTextureRenderTarget2D* dst, const TArray<float>& data256);
    
    UFUNCTION(BlueprintCallable)
    static void DelayGarbageCollection();
    
    UFUNCTION(BlueprintCallable)
    static void ClipboardCopy(const TArray<FString>& StrArray);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void CheckMenuMode(int32 inMenuMode, bool& bOnline, bool& bPic, bool& bDec, bool& bMu, bool& bPlayerCustomize, bool& bReplay);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void CheckMenuItemID(int32 inMenuItemID, bool& bPic, bool& bDec, bool& bMu, bool& bPlayerCustomize, bool& bReplay, bool& bOnline, bool& bOption, bool& bNe, bool& bCom, bool& bPlayData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static APolarisMobActor* CastToPolarisMobActor(APawn* Pawn);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool AreAllMipLevelsLoaded(UTexture2D* pTex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool ActivatePhotoCamera();
    
};

