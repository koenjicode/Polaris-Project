#pragma once
#include "CoreMinimal.h"
#include "ECharacterSelectSequenceType.generated.h"

UENUM(BlueprintType)
enum class ECharacterSelectSequenceType : uint8 {
    CharacterNone,
    CharacterEntry,
    CharacterDecide,
};

