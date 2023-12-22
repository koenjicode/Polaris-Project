#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "AssignTargetDependencyMeshStruct.h"
#include "DependencyMeshOffsetMapStruct.h"
#include "SqueezeInfoStruct.h"
#include "BaseCharacterItem.generated.h"

class UParentConstraintBinary;

UCLASS(Blueprintable)
class POLARIS_API UBaseCharacterItem : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FighterId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UParentConstraintBinary*> ParentConstraintBinariesItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSqueezeInfoStruct> SqueezeBoneInfoArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FTransform> ItemOptionalOffsetMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FTransform> ItemOptionalAbilityOffsetMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FDependencyMeshOffsetMapStruct> ItemOptionalDependencyMeshOffsetMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAssignTargetDependencyMeshStruct> AssignTargetDependencyMeshArray;
    
    UBaseCharacterItem();

};

