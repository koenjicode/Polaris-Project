#pragma once
#include "CoreMinimal.h"
#include "LobbyAvatarPartData.h"
#include "LobbyAvatarData_Struct.generated.h"

USTRUCT(BlueprintType)
struct FLobbyAvatarData_Struct {
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
    
    POLARIS_API FLobbyAvatarData_Struct();
};

