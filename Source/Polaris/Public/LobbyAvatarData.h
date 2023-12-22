#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ELobbyAvatarItemType.h"
#include "LobbyAvatarData_Struct.h"
#include "LobbyAvatarPartData.h"
#include "LobbyAvatarData.generated.h"

UCLASS(Blueprintable)
class POLARIS_API ULobbyAvatarData : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 slotNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 skinColorID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 eyeColorID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 eyeblowsColorID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLobbyAvatarPartData> partDatas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 motionID;
    
    ULobbyAvatarData();

    UFUNCTION(BlueprintCallable)
    void UpdatePartData(FLobbyAvatarPartData Data);
    
    UFUNCTION(BlueprintCallable)
    void SetStructData(const FLobbyAvatarData_Struct& Data);
    
    UFUNCTION(BlueprintCallable)
    void RemovePartData(ELobbyAvatarItemType Type);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasPartData(ELobbyAvatarItemType Type) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetStructData(FLobbyAvatarData_Struct& Data) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLobbyAvatarPartData GetPartData(ELobbyAvatarItemType Type) const;
    
    UFUNCTION(BlueprintCallable)
    void AddPartData(FLobbyAvatarPartData Data);
    
};

