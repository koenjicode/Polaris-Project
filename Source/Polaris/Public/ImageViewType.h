#pragma once
#include "CoreMinimal.h"
#include "ImageViewType.generated.h"

UENUM(BlueprintType)
enum class ImageViewType : uint8 {
    Ball,
    Sticker,
    Stamp,
    Gallery,
};

