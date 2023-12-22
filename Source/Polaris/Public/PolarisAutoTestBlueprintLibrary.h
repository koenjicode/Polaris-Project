#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "AutoTestGameSettingInfo.h"
#include "PolarisAutoTestBlueprintLibrary.generated.h"

class AGameModeBase;
class UPolarisAutoTest;

UCLASS(Blueprintable)
class POLARIS_API UPolarisAutoTestBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPolarisAutoTestBlueprintLibrary();

    UFUNCTION(BlueprintCallable)
    static void TextFileLoad(const FString& FilePath, FString& FileData, bool& Success);
    
    UFUNCTION(BlueprintCallable)
    static void AutoTestInput_UP(int32 device_index);
    
    UFUNCTION(BlueprintCallable)
    static void AutoTestInput_START(int32 device_index);
    
    UFUNCTION(BlueprintCallable)
    static void AutoTestInput_SELECT(int32 device_index);
    
    UFUNCTION(BlueprintCallable)
    static void AutoTestInput_RP(int32 device_index);
    
    UFUNCTION(BlueprintCallable)
    static void AutoTestInput_RK(int32 device_index);
    
    UFUNCTION(BlueprintCallable)
    static void AutoTestInput_RIGHT(int32 device_index);
    
    UFUNCTION(BlueprintCallable)
    static void AutoTestInput_RandomJoystick(int32 device_index);
    
    UFUNCTION(BlueprintCallable)
    static void AutoTestInput_RandomAttackKey(int32 device_index);
    
    UFUNCTION(BlueprintCallable)
    static void AutoTestInput_R3(int32 device_index);
    
    UFUNCTION(BlueprintCallable)
    static void AutoTestInput_R2(int32 device_index);
    
    UFUNCTION(BlueprintCallable)
    static void AutoTestInput_R1(int32 device_index);
    
    UFUNCTION(BlueprintCallable)
    static void AutoTestInput_LP(int32 device_index);
    
    UFUNCTION(BlueprintCallable)
    static void AutoTestInput_LK(int32 device_index);
    
    UFUNCTION(BlueprintCallable)
    static void AutoTestInput_LEFT(int32 device_index);
    
    UFUNCTION(BlueprintCallable)
    static void AutoTestInput_L3(int32 device_index);
    
    UFUNCTION(BlueprintCallable)
    static void AutoTestInput_L2(int32 device_index);
    
    UFUNCTION(BlueprintCallable)
    static void AutoTestInput_L1(int32 device_index);
    
    UFUNCTION(BlueprintCallable)
    static void AutoTestInput_DOWN(int32 device_index);
    
    UFUNCTION(BlueprintCallable)
    static void AutoTestInput_Decide(int32 device_index);
    
    UFUNCTION(BlueprintCallable)
    static void AutoTestInput_Cancel(int32 device_index);
    
    UFUNCTION(BlueprintCallable)
    static void AutoTestInput_AnalogRY(int32 device_index, float Value);
    
    UFUNCTION(BlueprintCallable)
    static void AutoTestInput_AnalogRX(int32 device_index, float Value);
    
    UFUNCTION(BlueprintCallable)
    static void AutoTest_TakeScreenshotCustom(FString& OutFileName, const FString& Filename, bool IsShowUI, bool bAddUniqueSuffix);
    
    UFUNCTION(BlueprintCallable)
    static void AutoTest_TakeScreenshot(bool IsShowUI);
    
    UFUNCTION(BlueprintCallable)
    static void AutoTest_StopMovieCapture();
    
    UFUNCTION(BlueprintCallable)
    static void AutoTest_StartMovieCapture();
    
    UFUNCTION(BlueprintCallable)
    static void AutoTest_SetRoundNum(int32 roundnum);
    
    UFUNCTION(BlueprintCallable)
    static void AutoTest_SetNextDemoCapture();
    
    UFUNCTION(BlueprintCallable)
    static void AutoTest_SetMovieCaptureName(const FString& MovieName);
    
    UFUNCTION(BlueprintCallable)
    static void AutoTest_ResetToRound1(float start_rotY);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool AutoTest_ReadyNextStoryBattle();
    
    UFUNCTION(BlueprintCallable)
    static void AutoTest_ReadyColorAccessibility();
    
    UFUNCTION(BlueprintCallable)
    static void AutoTest_ReadyBattleColorAccessibility(UPolarisAutoTest* AutoTest);
    
    UFUNCTION(BlueprintCallable)
    static void AutoTest_KamuiLog(const FString& Text, bool IsError);
    
    UFUNCTION(BlueprintCallable)
    static bool AutoTest_IsReadyRageArts(int32 player_id);
    
    UFUNCTION(BlueprintCallable)
    static bool AutoTest_IsLevelLoaded();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool AutoTest_IsFinishStoryBattle();
    
    UFUNCTION(BlueprintCallable)
    static bool AutoTest_IsFinishMakeDDC();
    
    UFUNCTION(BlueprintCallable)
    static bool AutoTest_IsFinishDemoCapture();
    
    UFUNCTION(BlueprintCallable)
    static bool AutoTest_IsFinishDebugBattle();
    
    UFUNCTION(BlueprintCallable)
    static bool AutoTest_IsFinishCharaEpisodeDrama();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool AutoTest_IsFinishAllStoryBattle();
    
    UFUNCTION(BlueprintCallable)
    static bool AutoTest_IsDramaFate();
    
    UFUNCTION(BlueprintCallable)
    static bool AutoTest_IsCurrentSequence(const FString& TypeName);
    
    UFUNCTION(BlueprintCallable)
    static bool AutoTest_IsCurrentScene(const FString& TypeName);
    
    UFUNCTION(BlueprintCallable)
    static bool AutoTest_IsColorAccessibilityPose();
    
    UFUNCTION(BlueprintCallable)
    static bool AutoTest_IsBattleWinView();
    
    UFUNCTION(BlueprintCallable)
    static bool AutoTest_IsBattleStartPre();
    
    UFUNCTION(BlueprintCallable)
    static bool AutoTest_IsBattleStart();
    
    UFUNCTION(BlueprintCallable)
    static bool AutoTest_IsBattlePreStart2P();
    
    UFUNCTION(BlueprintCallable)
    static bool AutoTest_IsBattlePreStart1P();
    
    UFUNCTION(BlueprintCallable)
    static bool AutoTest_IsBattleDrawView();
    
    UFUNCTION(BlueprintCallable)
    static void AutoTest_InitBattleModePreStart2P();
    
    UFUNCTION(BlueprintCallable)
    static void AutoTest_InitBattleModePreStart1P();
    
    UFUNCTION(BlueprintCallable)
    static int32 AutoTest_GetRoundTimeElapsed();
    
    UFUNCTION(BlueprintCallable)
    static int32 AutoTest_GetRageArtsSide();
    
    UFUNCTION(BlueprintCallable)
    static FAutoTestGameSettingInfo AutoTest_GetGameSettingInfo();
    
    UFUNCTION(BlueprintCallable)
    static AGameModeBase* AutoTest_GetGameMode();
    
    UFUNCTION(BlueprintCallable)
    static void AutoTest_FinishStoryBattleTest();
    
    UFUNCTION(BlueprintCallable)
    static void AutoTest_FinishDebugBattle();
    
    UFUNCTION(BlueprintCallable)
    static void AutoTest_ExecuteConsoleCommand(const FString& Command);
    
    UFUNCTION(BlueprintCallable)
    static void AutoTest_EndColorAccessibility();
    
    UFUNCTION(BlueprintCallable)
    static void AutoTest_CS_MoveCharacterCursor();
    
    UFUNCTION(BlueprintCallable)
    static bool AutoTest_CS_IsLoaded2p();
    
    UFUNCTION(BlueprintCallable)
    static bool AutoTest_CS_IsLoaded1p();
    
    UFUNCTION(BlueprintCallable)
    static bool AutoTest_CS_IsInCharacerSelect();
    
};

