#include "PolarisDebugBlueprintLibrary.h"

UPolarisDebugBlueprintLibrary::UPolarisDebugBlueprintLibrary() {
}

void UPolarisDebugBlueprintLibrary::UpdateDynamicResolutionStatusDebug() {
}

TArray<FString> UPolarisDebugBlueprintLibrary::SortStringArray(TArray<FString> string_array) {
    return TArray<FString>();
}

void UPolarisDebugBlueprintLibrary::SetRealtimeView(bool bRealtime) {
}

void UPolarisDebugBlueprintLibrary::SetNiagaraSpawnScale(UNiagaraComponent* Instance, float spawn_count_scale) {
}

void UPolarisDebugBlueprintLibrary::SetLightingBakeQuality(int32 quality) {
}

void UPolarisDebugBlueprintLibrary::SetFighterDebugSettings(int32 p1, int32 p1Cos, int32 p2, int32 p2Cos, bool loadImmediate) {
}

void UPolarisDebugBlueprintLibrary::SetAutoTestPlayerOption(bool bCPUMode, bool bZoneMode, bool bRageMode, bool bInfiniteHP) {
}

void UPolarisDebugBlueprintLibrary::SetActorLabel(AActor* Actor, const FString& PrefixLabel) {
}

bool UPolarisDebugBlueprintLibrary::SaveColorPanelPaletteCSV(int32 ID, const FString& PaletteData) {
    return false;
}

void UPolarisDebugBlueprintLibrary::SaveAndCheckIn(const bool bSaveMapPackages, const bool bSaveContentPackages) {
}

void UPolarisDebugBlueprintLibrary::RequestStageSequenceNo(int32 sequenceNo, bool bCallInitbattle, bool bStoryMode) {
}

void UPolarisDebugBlueprintLibrary::RequestCustomizeCharacter(APolarisDebugCustomizeActor* Actor, UCustomizeSet* _loadCS) {
}

void UPolarisDebugBlueprintLibrary::PolarisLogString(const FString& InString, bool bPrintToLog) {
}

void UPolarisDebugBlueprintLibrary::OpenAssetEditorOnly(const FString& AssetPathName) {
}

bool UPolarisDebugBlueprintLibrary::IsStatEnabled(const FString& InName) {
    return false;
}

bool UPolarisDebugBlueprintLibrary::IsEnableDynamicResolution() {
    return false;
}

void UPolarisDebugBlueprintLibrary::IMGUI_SetInputShared(bool keyboard, bool Mouse, bool Pad) {
}

void UPolarisDebugBlueprintLibrary::GetStreamingLevelNameList(TArray<FString>& LevelNameList) {
}

void UPolarisDebugBlueprintLibrary::GetFighterString(int32 FighterId, FString& Name, FString& origName, bool& validName, int32 CostumeID, FString& costumeName, bool& validCostume) {
}

void UPolarisDebugBlueprintLibrary::GetFighterDebugSettings(int32& p1, int32& p1Cos, int32& p2, int32& p2Cos) {
}

void UPolarisDebugBlueprintLibrary::GetCurrentSequenceName(FString& SequenceName, FString& sceneName) {
}

FString UPolarisDebugBlueprintLibrary::GetConsoleCommandSetByName(const FString& CommandName) {
    return TEXT("");
}

void UPolarisDebugBlueprintLibrary::ForceApplicationCrash(UObject* ptr_forNullAccess, int32 zero_divide) {
}

void UPolarisDebugBlueprintLibrary::ExecuteConsoleCommandWithCurrentPriority(const UObject* WorldContextObject, const FString& Command, APlayerController* SpecificPlayer) {
}

void UPolarisDebugBlueprintLibrary::EndGpuCapture() {
}

void UPolarisDebugBlueprintLibrary::DebugLogStreamingTextureInfo(int32 LODGroup, bool bOnlyStreamable) {
}

void UPolarisDebugBlueprintLibrary::DebugLogResolutionInfo() {
}

void UPolarisDebugBlueprintLibrary::DebugLogPrintString(const FString& str) {
}

void UPolarisDebugBlueprintLibrary::CountDiffTexturePixel(UTextureRenderTarget2D* Texture, float& retCount, float& retSigma) {
}

void UPolarisDebugBlueprintLibrary::ClearScalabilityGroupSetBy(const FString& InGroupName, bool bRuntimeChangedOnly) {
}

void UPolarisDebugBlueprintLibrary::ClearConsoleVariableSetBy(const FString& InName, bool bRuntimeChangedOnly) {
}

bool UPolarisDebugBlueprintLibrary::CanExecuteConsoleCommandByScalability(const FString& CommandName) {
    return false;
}

void UPolarisDebugBlueprintLibrary::BeginLightBake(int32 VisibilityOnly, bool bForceBake) {
}

void UPolarisDebugBlueprintLibrary::BeginGpuCapture(const FString& Filename) {
}

float UPolarisDebugBlueprintLibrary::ApplyForceNiagaraSpawnScale(UNiagaraComponent* Instance, int32 quality_level) {
    return 0.0f;
}


