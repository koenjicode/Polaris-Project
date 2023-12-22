#include "AvatarCustomzieThumbnailFL.h"

UAvatarCustomzieThumbnailFL::UAvatarCustomzieThumbnailFL() {
}

void UAvatarCustomzieThumbnailFL::SaveThumbnail(int32 Width, int32 Height, const TArray<FColor>& Data, const FString& FilePath) {
}

void UAvatarCustomzieThumbnailFL::SaveItemThumbnailData(UPrimaryDataAsset* DataAsset) {
}

void UAvatarCustomzieThumbnailFL::ResizeThumbnail(int32 sourceWidth, int32 sourceHeight, const TArray<FColor>& Source, int32 resizedWidth, int32 resizedHeight, TArray<FColor>& Result) {
}

int32 UAvatarCustomzieThumbnailFL::GetThumbnailMaxDataSize() {
    return 0;
}

bool UAvatarCustomzieThumbnailFL::GetRenderTargetColorData(UTextureRenderTarget2D* renderTarget, TArray<FColor>& colorData) {
    return false;
}

void UAvatarCustomzieThumbnailFL::CreateMaskedColorData(const TArray<FColor>& source_data, const TArray<FColor>& mask_data, const FColor& mask_color, TArray<FColor>& result_data) {
}

void UAvatarCustomzieThumbnailFL::ConvertJPGCompressImageArrayWithinSizeRange(int32 Width, int32 Height, const TArray<FColor>& color_data, int32 max_quality, int32 sub_quality, int32 max_size, TArray<uint8>& result_data) {
}

void UAvatarCustomzieThumbnailFL::ConvertJPGCompressImageArray(int32 Width, int32 Height, const TArray<FColor>& color_data, int32 quality, TArray<uint8>& result_data) {
}

void UAvatarCustomzieThumbnailFL::ClearScreenShotDelegate() {
}

void UAvatarCustomzieThumbnailFL::CaptureThumbnail(AActor* Actor, int32 resolutionX, int32 resolutionY, bool useMask) {
}

void UAvatarCustomzieThumbnailFL::AddScreenShotDelegate(const UAvatarCustomzieThumbnailFL::FScreenShotDelegate& Delegate) {
}


