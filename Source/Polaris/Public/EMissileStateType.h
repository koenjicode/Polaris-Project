#pragma once
#include "CoreMinimal.h"
#include "EMissileStateType.generated.h"

UENUM(BlueprintType)
enum class EMissileStateType : uint8 {
    MissileStateType_Stop,
    MissileStateType_Alive,
    MissileStateType_Terminate,
};

