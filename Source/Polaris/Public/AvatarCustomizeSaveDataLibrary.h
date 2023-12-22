#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "LobbyAvatarData_Struct.h"
#include "AvatarCustomizeSaveDataLibrary.generated.h"

UCLASS(Blueprintable)
class POLARIS_API UAvatarCustomizeSaveDataLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAvatarCustomizeSaveDataLibrary();

    UFUNCTION(BlueprintCallable)
    static void SetThumbnailSaveData(const TArray<uint8>& Data, int32 slot_no);
    
    UFUNCTION(BlueprintCallable)
    static void SetSlotSaveData(const FLobbyAvatarData_Struct& Data);
    
    UFUNCTION(BlueprintCallable)
    static void SetMainAvatarSlot(int32 slot_no);
    
    UFUNCTION(BlueprintCallable)
    static void Save();
    
    UFUNCTION(BlueprintCallable)
    static bool IsValidSlot(int32 slot_no);
    
    UFUNCTION(BlueprintCallable)
    static bool HasSaveData();
    
    UFUNCTION(BlueprintCallable)
    static void GetValidSlotSaveDatas(TArray<FLobbyAvatarData_Struct>& datas);
    
    UFUNCTION(BlueprintCallable)
    static void GetThumbnailSaveData(int32 slot_no, TArray<uint8>& Data);
    
    UFUNCTION(BlueprintCallable)
    static void GetSlotSaveData(int32 slot_no, FLobbyAvatarData_Struct& Data);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetMainAvatarSlot();
    
    UFUNCTION(BlueprintCallable)
    static void DeleteSlot(int32 slot_no);
    
    UFUNCTION(BlueprintCallable)
    static void CopySlot(int32 src_slot, int32 dst_slot);
    
};

