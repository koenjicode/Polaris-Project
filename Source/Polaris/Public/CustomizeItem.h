#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "AssignPerMaterialStruct.h"
#include "DesignAssignStruct.h"
#include "PartsSlotItemSetStructArray.h"
#include "CustomizeItem.generated.h"

UCLASS(Blueprintable)
class POLARIS_API UCustomizeItem : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDesignAssignStruct> DesignAssignSlotArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAssignPerMaterialStruct> AssignPerMaterialArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPartsSlotItemSetStructArray> PartsSlotItemSetOuterArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ItemOffsetSlotNameEdit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform ItemOffsetTransformEdit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ParentCustomizeItemName;
    
    UCustomizeItem();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetDesignAssign(int32 _Material_Num, int32 _Color_ID_Num, FDesignAssignStruct& _SourceDesignAssign) const;
    
};

