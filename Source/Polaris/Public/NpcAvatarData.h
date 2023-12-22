#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "NpcAvatarMeshData.h"
#include "NpcAvatarData.generated.h"

UCLASS(Blueprintable)
class POLARIS_API UNpcAvatarData : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 slotId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNpcAvatarMeshData> meshDatas;
    
    UNpcAvatarData();

};

