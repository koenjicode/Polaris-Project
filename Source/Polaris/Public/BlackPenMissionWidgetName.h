#pragma once
#include "CoreMinimal.h"
#include "BlackPenMissionWidgetName.generated.h"

USTRUCT(BlueprintType)
struct POLARIS_API FBlackPenMissionWidgetName {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName loading_widget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName type_scrollbox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName list_scrollbox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName xp_info_widget;
    
    FBlackPenMissionWidgetName();
};

