#pragma once
#include "CoreMinimal.h"
#include "DesignAssignStruct.h"
#include "AssignPerMaterialStruct.generated.h"

class UMaterialInstance;

USTRUCT(BlueprintType)
struct POLARIS_API FAssignPerMaterialStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstance* MaterialAssign_Preview;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstance* MaterialAssign_Override;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDesignAssignStruct> DesignAssignArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isUseSourceMaterial_All;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isEditUser_All;
    
    FAssignPerMaterialStruct();
};

