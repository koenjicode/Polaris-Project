#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "PolarisDialogButtonDelegateDelegate.h"
#include "PolarisDialogButtonParam.h"
#include "PolarisDialogFunctionLibrary.generated.h"

UCLASS(Blueprintable)
class POLARIS_API UPolarisDialogFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPolarisDialogFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static void SetDialogDescription(const FString& Text, bool is_text_id);
    
    UFUNCTION(BlueprintCallable)
    static void SetDialogCursor(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    static void SetDialogCloseAsCancel(bool flag);
    
    UFUNCTION(BlueprintCallable)
    static void SetDialogCancelEnable(bool flag);
    
    UFUNCTION(BlueprintCallable)
    static void SetDialogButtonText(int32 Index, const FString& Text, bool is_text_id);
    
    UFUNCTION(BlueprintCallable)
    static void SetDialogButtonEnable(int32 Index, bool flag);
    
    UFUNCTION(BlueprintCallable)
    static void OpenDialogEx2(const FString& Description, int32 defaultCursor, const TArray<FPolarisDialogButtonParam>& Params, FPolarisDialogButtonDelegate OnOpening, FPolarisDialogButtonDelegate OnCancel, bool IsTextId, bool cancelEnable, bool closeAsCancel, int32 display_side, bool butonCentering, bool buttonHelpTypeUserManual);
    
    UFUNCTION(BlueprintCallable)
    static void OpenDialogEx(const FString& Description, int32 defaultCursor, const TArray<FPolarisDialogButtonParam>& Params, FPolarisDialogButtonDelegate OnOpening, bool IsTextId, int32 display_side);
    
    UFUNCTION(BlueprintCallable)
    static void OpenDialog(const FString& Description, int32 defaultCursor, const TArray<FPolarisDialogButtonParam>& Params, bool IsTextId, int32 display_side);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsDialogDecided();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsDialogClosed();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetDialogCursor();
    
    UFUNCTION(BlueprintCallable)
    static void CloseDialog();
    
};

