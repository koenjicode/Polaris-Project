#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "PolarisHelpDialogButtonDelegateDelegate.h"
#include "PolarisHelpDialogFunctionLibrary.generated.h"

UCLASS(Blueprintable)
class POLARIS_API UPolarisHelpDialogFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPolarisHelpDialogFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static void OpenHelpDialogEx2(const FString& dialog_id, FPolarisHelpDialogButtonDelegate on_decide, FPolarisHelpDialogButtonDelegate on_finalize);
    
    UFUNCTION(BlueprintCallable)
    static void OpenHelpDialogEx(const FString& dialog_id, FPolarisHelpDialogButtonDelegate on_decide);
    
    UFUNCTION(BlueprintCallable)
    static void OpenHelpDialogByHashEx(int32 dialog_id, FPolarisHelpDialogButtonDelegate on_decide);
    
    UFUNCTION(BlueprintCallable)
    static void OpenHelpDialogByHash(int32 dialog_id);
    
    UFUNCTION(BlueprintCallable)
    static void OpenHelpDialog(const FString& dialog_id);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsHelpDialogClosed();
    
    UFUNCTION(BlueprintCallable)
    static void CloseDialog();
    
};

