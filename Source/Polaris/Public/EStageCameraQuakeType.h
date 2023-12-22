#pragma once
#include "CoreMinimal.h"
#include "EStageCameraQuakeType.generated.h"

UENUM(BlueprintType)
enum class EStageCameraQuakeType : uint8 {
    EStageCameraQuakeType_None,
    EStageCameraQuakeType_Small,
    EStageCameraQuakeType_Middium,
    EStageCameraQuakeType_Large,
    EStageCameraQuakeType_Bomb,
    EStageCameraQuakeType_Bomb2,
};

