#pragma once
#include "CoreMinimal.h"
#include "EAvatarColorType.h"
#include "EAvatarPartType.h"
#include "AvatarItemColorData.generated.h"

USTRUCT(BlueprintType)
struct FAvatarItemColorData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAvatarColorType color_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 material_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 color_palette_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAvatarPartType focus_part_type;
    
    POLARIS_API FAvatarItemColorData();
};

