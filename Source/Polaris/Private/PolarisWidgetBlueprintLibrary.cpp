#include "PolarisWidgetBlueprintLibrary.h"

UPolarisWidgetBlueprintLibrary::UPolarisWidgetBlueprintLibrary() {
}

FVector2D UPolarisWidgetBlueprintLibrary::TransformPointFromPaintContext(FPaintContext& Context, const FVector2D Point) {
    return FVector2D{};
}

FString UPolarisWidgetBlueprintLibrary::ReplaceUnsupportedCharacter(const UFont* Font, const FString& SourceStr) {
    return TEXT("");
}

FVector2D UPolarisWidgetBlueprintLibrary::GetLocalSizeFromPaintContext(FPaintContext& Contect) {
    return FVector2D{};
}

UWidgetAnimation* UPolarisWidgetBlueprintLibrary::FindWidgetAnimation(UUserWidget* Widget, FName AnimationName) {
    return NULL;
}

void UPolarisWidgetBlueprintLibrary::DrawCustomVerts(FPaintContext& Context, USlateBrushAsset* Brush, const TArray<FCustomSlateVertex>& InVerts, const TArray<int32>& InIndices) {
}


