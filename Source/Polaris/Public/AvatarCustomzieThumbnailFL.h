#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "AvatarCustomzieThumbnailFL.generated.h"

class AActor;
class UPrimaryDataAsset;
class UTextureRenderTarget2D;

UCLASS(Blueprintable)
class POLARIS_API UAvatarCustomzieThumbnailFL : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_ThreeParams(FScreenShotDelegate, int32, Width, int32, Height, const TArray<FColor>&, bitmap);
    
    UAvatarCustomzieThumbnailFL();

    UFUNCTION(BlueprintCallable)
    static void SaveThumbnail(int32 Width, int32 Height, const TArray<FColor>& Data, const FString& FilePath);
    
    UFUNCTION(BlueprintCallable)
    static void SaveItemThumbnailData(UPrimaryDataAsset* DataAsset);
    
    UFUNCTION(BlueprintCallable)
    static void ResizeThumbnail(int32 sourceWidth, int32 sourceHeight, const TArray<FColor>& Source, int32 resizedWidth, int32 resizedHeight, TArray<FColor>& Result);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetThumbnailMaxDataSize();
    
    UFUNCTION(BlueprintCallable)
    static bool GetRenderTargetColorData(UTextureRenderTarget2D* renderTarget, TArray<FColor>& colorData);
    
    UFUNCTION(BlueprintCallable)
    static void CreateMaskedColorData(const TArray<FColor>& source_data, const TArray<FColor>& mask_data, const FColor& mask_color, TArray<FColor>& result_data);
    
    UFUNCTION(BlueprintCallable)
    static void ConvertJPGCompressImageArrayWithinSizeRange(int32 Width, int32 Height, const TArray<FColor>& color_data, int32 max_quality, int32 sub_quality, int32 max_size, TArray<uint8>& result_data);
    
    UFUNCTION(BlueprintCallable)
    static void ConvertJPGCompressImageArray(int32 Width, int32 Height, const TArray<FColor>& color_data, int32 quality, TArray<uint8>& result_data);
    
    UFUNCTION(BlueprintCallable)
    static void ClearScreenShotDelegate();
    
    UFUNCTION(BlueprintCallable)
    static void CaptureThumbnail(AActor* Actor, int32 resolutionX, int32 resolutionY, bool useMask);
    
    UFUNCTION(BlueprintCallable)
    static void AddScreenShotDelegate(const UAvatarCustomzieThumbnailFL::FScreenShotDelegate& Delegate);
    
};

