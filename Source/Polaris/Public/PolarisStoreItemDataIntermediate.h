#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "StoreItemBasicData.h"
#include "PolarisStoreItemDataIntermediate.generated.h"

UCLASS(Blueprintable)
class POLARIS_API UPolarisStoreItemDataIntermediate : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_OneParam(FAction, const TArray<FStoreItemBasicData>&, datas);
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStoreItemBasicData> avatar_data_array;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStoreItemBasicData> stamp_data_array;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStoreItemBasicData> emote_data_array;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStoreItemBasicData> prof_chara_pose_data_array;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStoreItemBasicData> prof_avatar_pose_data_array;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStoreItemBasicData> prof_bg_data_array;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsEndLoadingAvatar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsEndLoadingStamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsEndLoadingEmote;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsEndLoadingProfileCharaPose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsEndLoadingProfileAvatorPose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsEndLoadingProfileBg;
    
public:
    UPolarisStoreItemDataIntermediate();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void LoadStampItemData(const TArray<FName>& item_ids);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void LoadProfileCharaPose(const TArray<FName>& item_ids);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void LoadProfileBg(const TArray<FName>& item_ids);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void LoadProfileAvatorPose(const TArray<FName>& item_ids);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void LoadEmoteItemData(const TArray<FName>& item_ids);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void LoadAvatorItemData(const TArray<FName>& item_ids);
    
};

