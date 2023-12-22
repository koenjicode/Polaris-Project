#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "PolarisDebugBlueprintLibrary.generated.h"

class AActor;
class APlayerController;
class APolarisDebugCustomizeActor;
class UCustomizeSet;
class UNiagaraComponent;
class UObject;
class UTextureRenderTarget2D;

UCLASS(Blueprintable)
class POLARIS_API UPolarisDebugBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPolarisDebugBlueprintLibrary();

    UFUNCTION(BlueprintCallable)
    static void UpdateDynamicResolutionStatusDebug();
    
    UFUNCTION(BlueprintCallable)
    static TArray<FString> SortStringArray(TArray<FString> string_array);
    
    UFUNCTION(BlueprintCallable)
    static void SetRealtimeView(bool bRealtime);
    
    UFUNCTION(BlueprintCallable)
    static void SetNiagaraSpawnScale(UNiagaraComponent* Instance, float spawn_count_scale);
    
    UFUNCTION(BlueprintCallable)
    static void SetLightingBakeQuality(int32 quality);
    
    UFUNCTION(BlueprintCallable)
    static void SetFighterDebugSettings(int32 p1, int32 p1Cos, int32 p2, int32 p2Cos, bool loadImmediate);
    
    UFUNCTION(BlueprintCallable)
    static void SetAutoTestPlayerOption(bool bCPUMode, bool bZoneMode, bool bRageMode, bool bInfiniteHP);
    
    UFUNCTION(BlueprintCallable)
    static void SetActorLabel(AActor* Actor, const FString& PrefixLabel);
    
    UFUNCTION(BlueprintCallable)
    static bool SaveColorPanelPaletteCSV(int32 ID, const FString& PaletteData);
    
    UFUNCTION(BlueprintCallable)
    static void SaveAndCheckIn(const bool bSaveMapPackages, const bool bSaveContentPackages);
    
    UFUNCTION(BlueprintCallable)
    static void RequestStageSequenceNo(int32 sequenceNo, bool bCallInitbattle, bool bStoryMode);
    
    UFUNCTION(BlueprintCallable)
    static void RequestCustomizeCharacter(APolarisDebugCustomizeActor* Actor, UCustomizeSet* _loadCS);
    
    UFUNCTION(BlueprintCallable)
    static void PolarisLogString(const FString& InString, bool bPrintToLog);
    
    UFUNCTION(BlueprintCallable)
    static void OpenAssetEditorOnly(const FString& AssetPathName);
    
    UFUNCTION(BlueprintCallable)
    static bool IsStatEnabled(const FString& InName);
    
    UFUNCTION(BlueprintCallable)
    static bool IsEnableDynamicResolution();
    
    UFUNCTION(BlueprintCallable)
    static void IMGUI_SetInputShared(bool keyboard, bool Mouse, bool Pad);
    
    UFUNCTION(BlueprintCallable)
    static void GetStreamingLevelNameList(TArray<FString>& LevelNameList);
    
    UFUNCTION(BlueprintCallable)
    static void GetFighterString(int32 FighterId, FString& Name, FString& origName, bool& validName, int32 CostumeID, FString& costumeName, bool& validCostume);
    
    UFUNCTION(BlueprintCallable)
    static void GetFighterDebugSettings(int32& p1, int32& p1Cos, int32& p2, int32& p2Cos);
    
    UFUNCTION(BlueprintCallable)
    static void GetCurrentSequenceName(FString& SequenceName, FString& sceneName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetConsoleCommandSetByName(const FString& CommandName);
    
    UFUNCTION(BlueprintCallable)
    static void ForceApplicationCrash(UObject* ptr_forNullAccess, int32 zero_divide);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ExecuteConsoleCommandWithCurrentPriority(const UObject* WorldContextObject, const FString& Command, APlayerController* SpecificPlayer);
    
    UFUNCTION(BlueprintCallable)
    static void EndGpuCapture();
    
    UFUNCTION(BlueprintCallable)
    static void DebugLogStreamingTextureInfo(int32 LODGroup, bool bOnlyStreamable);
    
    UFUNCTION(BlueprintCallable)
    static void DebugLogResolutionInfo();
    
    UFUNCTION(BlueprintCallable)
    static void DebugLogPrintString(const FString& str);
    
    UFUNCTION(BlueprintCallable)
    static void CountDiffTexturePixel(UTextureRenderTarget2D* Texture, float& retCount, float& retSigma);
    
    UFUNCTION(BlueprintCallable)
    static void ClearScalabilityGroupSetBy(const FString& InGroupName, bool bRuntimeChangedOnly);
    
    UFUNCTION(BlueprintCallable)
    static void ClearConsoleVariableSetBy(const FString& InName, bool bRuntimeChangedOnly);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CanExecuteConsoleCommandByScalability(const FString& CommandName);
    
    UFUNCTION(BlueprintCallable)
    static void BeginLightBake(int32 VisibilityOnly, bool bForceBake);
    
    UFUNCTION(BlueprintCallable)
    static void BeginGpuCapture(const FString& Filename);
    
    UFUNCTION(BlueprintCallable)
    static float ApplyForceNiagaraSpawnScale(UNiagaraComponent* Instance, int32 quality_level);
    
};

