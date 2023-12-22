#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "ELobbyFootstepType.h"
#include "LobbyFootstepAnimNotify.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class POLARIS_API ULobbyFootstepAnimNotify : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELobbyFootstepType _type;
    
    ULobbyFootstepAnimNotify();

};

