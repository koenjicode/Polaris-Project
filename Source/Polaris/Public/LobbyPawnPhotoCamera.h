#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Pawn.h"
#include "LobbyPawnPhotoCamera.generated.h"

class UCameraComponent;

UCLASS(Blueprintable)
class POLARIS_API ALobbyPawnPhotoCamera : public APawn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCameraComponent* camera_component;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform FirstTransform;
    
    ALobbyPawnPhotoCamera(const FObjectInitializer& ObjectInitializer);

};

