#pragma once
#include "CoreMinimal.h"
#include "DesignAssignStruct_Color.h"
#include "DesignAssignStruct_Pattern.h"
#include "DesignAssignStruct_Surface.h"
#include "DesignAssignStruct.generated.h"

USTRUCT(BlueprintType)
struct POLARIS_API FDesignAssignStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDesignAssignStruct_Color DesignAssign_Color;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDesignAssignStruct_Pattern DesignAssign_Pattern;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDesignAssignStruct_Surface DesignAssign_Surface;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isUseSourceMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isEditUser;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 useSlotNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isEnableId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ScalpMaskIndex;
    
    FDesignAssignStruct();
};

