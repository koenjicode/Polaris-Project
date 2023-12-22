#include "PolarisAutoTestBlueprintLibrary.h"

UPolarisAutoTestBlueprintLibrary::UPolarisAutoTestBlueprintLibrary() {
}

void UPolarisAutoTestBlueprintLibrary::TextFileLoad(const FString& FilePath, FString& FileData, bool& Success) {
}

void UPolarisAutoTestBlueprintLibrary::AutoTestInput_UP(int32 device_index) {
}

void UPolarisAutoTestBlueprintLibrary::AutoTestInput_START(int32 device_index) {
}

void UPolarisAutoTestBlueprintLibrary::AutoTestInput_SELECT(int32 device_index) {
}

void UPolarisAutoTestBlueprintLibrary::AutoTestInput_RP(int32 device_index) {
}

void UPolarisAutoTestBlueprintLibrary::AutoTestInput_RK(int32 device_index) {
}

void UPolarisAutoTestBlueprintLibrary::AutoTestInput_RIGHT(int32 device_index) {
}

void UPolarisAutoTestBlueprintLibrary::AutoTestInput_RandomJoystick(int32 device_index) {
}

void UPolarisAutoTestBlueprintLibrary::AutoTestInput_RandomAttackKey(int32 device_index) {
}

void UPolarisAutoTestBlueprintLibrary::AutoTestInput_R3(int32 device_index) {
}

void UPolarisAutoTestBlueprintLibrary::AutoTestInput_R2(int32 device_index) {
}

void UPolarisAutoTestBlueprintLibrary::AutoTestInput_R1(int32 device_index) {
}

void UPolarisAutoTestBlueprintLibrary::AutoTestInput_LP(int32 device_index) {
}

void UPolarisAutoTestBlueprintLibrary::AutoTestInput_LK(int32 device_index) {
}

void UPolarisAutoTestBlueprintLibrary::AutoTestInput_LEFT(int32 device_index) {
}

void UPolarisAutoTestBlueprintLibrary::AutoTestInput_L3(int32 device_index) {
}

void UPolarisAutoTestBlueprintLibrary::AutoTestInput_L2(int32 device_index) {
}

void UPolarisAutoTestBlueprintLibrary::AutoTestInput_L1(int32 device_index) {
}

void UPolarisAutoTestBlueprintLibrary::AutoTestInput_DOWN(int32 device_index) {
}

void UPolarisAutoTestBlueprintLibrary::AutoTestInput_Decide(int32 device_index) {
}

void UPolarisAutoTestBlueprintLibrary::AutoTestInput_Cancel(int32 device_index) {
}

void UPolarisAutoTestBlueprintLibrary::AutoTestInput_AnalogRY(int32 device_index, float Value) {
}

void UPolarisAutoTestBlueprintLibrary::AutoTestInput_AnalogRX(int32 device_index, float Value) {
}

void UPolarisAutoTestBlueprintLibrary::AutoTest_TakeScreenshotCustom(FString& OutFileName, const FString& Filename, bool IsShowUI, bool bAddUniqueSuffix) {
}

void UPolarisAutoTestBlueprintLibrary::AutoTest_TakeScreenshot(bool IsShowUI) {
}

void UPolarisAutoTestBlueprintLibrary::AutoTest_StopMovieCapture() {
}

void UPolarisAutoTestBlueprintLibrary::AutoTest_StartMovieCapture() {
}

void UPolarisAutoTestBlueprintLibrary::AutoTest_SetRoundNum(int32 roundnum) {
}

void UPolarisAutoTestBlueprintLibrary::AutoTest_SetNextDemoCapture() {
}

void UPolarisAutoTestBlueprintLibrary::AutoTest_SetMovieCaptureName(const FString& MovieName) {
}

void UPolarisAutoTestBlueprintLibrary::AutoTest_ResetToRound1(float start_rotY) {
}

bool UPolarisAutoTestBlueprintLibrary::AutoTest_ReadyNextStoryBattle() {
    return false;
}

void UPolarisAutoTestBlueprintLibrary::AutoTest_ReadyColorAccessibility() {
}

void UPolarisAutoTestBlueprintLibrary::AutoTest_ReadyBattleColorAccessibility(UPolarisAutoTest* AutoTest) {
}

void UPolarisAutoTestBlueprintLibrary::AutoTest_KamuiLog(const FString& Text, bool IsError) {
}

bool UPolarisAutoTestBlueprintLibrary::AutoTest_IsReadyRageArts(int32 player_id) {
    return false;
}

bool UPolarisAutoTestBlueprintLibrary::AutoTest_IsLevelLoaded() {
    return false;
}

bool UPolarisAutoTestBlueprintLibrary::AutoTest_IsFinishStoryBattle() {
    return false;
}

bool UPolarisAutoTestBlueprintLibrary::AutoTest_IsFinishMakeDDC() {
    return false;
}

bool UPolarisAutoTestBlueprintLibrary::AutoTest_IsFinishDemoCapture() {
    return false;
}

bool UPolarisAutoTestBlueprintLibrary::AutoTest_IsFinishDebugBattle() {
    return false;
}

bool UPolarisAutoTestBlueprintLibrary::AutoTest_IsFinishCharaEpisodeDrama() {
    return false;
}

bool UPolarisAutoTestBlueprintLibrary::AutoTest_IsFinishAllStoryBattle() {
    return false;
}

bool UPolarisAutoTestBlueprintLibrary::AutoTest_IsDramaFate() {
    return false;
}

bool UPolarisAutoTestBlueprintLibrary::AutoTest_IsCurrentSequence(const FString& TypeName) {
    return false;
}

bool UPolarisAutoTestBlueprintLibrary::AutoTest_IsCurrentScene(const FString& TypeName) {
    return false;
}

bool UPolarisAutoTestBlueprintLibrary::AutoTest_IsColorAccessibilityPose() {
    return false;
}

bool UPolarisAutoTestBlueprintLibrary::AutoTest_IsBattleWinView() {
    return false;
}

bool UPolarisAutoTestBlueprintLibrary::AutoTest_IsBattleStartPre() {
    return false;
}

bool UPolarisAutoTestBlueprintLibrary::AutoTest_IsBattleStart() {
    return false;
}

bool UPolarisAutoTestBlueprintLibrary::AutoTest_IsBattlePreStart2P() {
    return false;
}

bool UPolarisAutoTestBlueprintLibrary::AutoTest_IsBattlePreStart1P() {
    return false;
}

bool UPolarisAutoTestBlueprintLibrary::AutoTest_IsBattleDrawView() {
    return false;
}

void UPolarisAutoTestBlueprintLibrary::AutoTest_InitBattleModePreStart2P() {
}

void UPolarisAutoTestBlueprintLibrary::AutoTest_InitBattleModePreStart1P() {
}

int32 UPolarisAutoTestBlueprintLibrary::AutoTest_GetRoundTimeElapsed() {
    return 0;
}

int32 UPolarisAutoTestBlueprintLibrary::AutoTest_GetRageArtsSide() {
    return 0;
}

FAutoTestGameSettingInfo UPolarisAutoTestBlueprintLibrary::AutoTest_GetGameSettingInfo() {
    return FAutoTestGameSettingInfo{};
}

AGameModeBase* UPolarisAutoTestBlueprintLibrary::AutoTest_GetGameMode() {
    return NULL;
}

void UPolarisAutoTestBlueprintLibrary::AutoTest_FinishStoryBattleTest() {
}

void UPolarisAutoTestBlueprintLibrary::AutoTest_FinishDebugBattle() {
}

void UPolarisAutoTestBlueprintLibrary::AutoTest_ExecuteConsoleCommand(const FString& Command) {
}

void UPolarisAutoTestBlueprintLibrary::AutoTest_EndColorAccessibility() {
}

void UPolarisAutoTestBlueprintLibrary::AutoTest_CS_MoveCharacterCursor() {
}

bool UPolarisAutoTestBlueprintLibrary::AutoTest_CS_IsLoaded2p() {
    return false;
}

bool UPolarisAutoTestBlueprintLibrary::AutoTest_CS_IsLoaded1p() {
    return false;
}

bool UPolarisAutoTestBlueprintLibrary::AutoTest_CS_IsInCharacerSelect() {
    return false;
}


