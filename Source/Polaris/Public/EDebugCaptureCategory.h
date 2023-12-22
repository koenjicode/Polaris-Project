#pragma once
#include "CoreMinimal.h"
#include "EDebugCaptureCategory.generated.h"

UENUM(BlueprintType)
enum class EDebugCaptureCategory : uint8 {
    EDebugCaptureCategory_None,
    EDebugCaptureCategory_Face,
    EDebugCaptureCategory_Hair,
    EDebugCaptureCategory_Eye,
    EDebugCaptureCategory_FaceHair,
    EDebugCaptureCategory_EyeMake,
    EDebugCaptureCategory_Cheek,
    EDebugCaptureCategory_FacePaint,
    EDebugCaptureCategory_Head,
    EDebugCaptureCategory_FullHead,
    EDebugCaptureCategory_Glasses,
    EDebugCaptureCategory_FullBody,
    EDebugCaptureCategory_Upper,
    EDebugCaptureCategory_Extra,
    EDebugCaptureCategory_Bottom,
    EDebugCaptureCategory_Lower,
    EDebugCaptureCategory_Shoes,
    EDebugCaptureCategory_Acc,
    EDebugCaptureCategory_Costume,
    EDebugCaptureCategory_Suntan,
};

