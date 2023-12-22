#pragma once
#include "CoreMinimal.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGDebugInformation.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class POLARIS_API UPolarisUMGDebugInformation : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGDebugInformation();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnShowInformation(bool flag);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetWWNTMode();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetDebugInformation(const FString& build_date, const FString& build_revision, const FString& user_name, const FString& platform_id, const FString& polaris_id, const FString& tracking_num, const FString& server_label);
    
};

