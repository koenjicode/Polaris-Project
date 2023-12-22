#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "AvatarItemGameInstanceSubsystem.generated.h"

class UAvatarItemDataRepository;

UCLASS(Blueprintable)
class POLARIS_API UAvatarItemGameInstanceSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAvatarItemDataRepository* item_data_repository;
    
    UAvatarItemGameInstanceSubsystem();

};

