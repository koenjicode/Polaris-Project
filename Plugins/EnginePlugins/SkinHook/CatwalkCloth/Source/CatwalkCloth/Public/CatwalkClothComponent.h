#pragma once
#include "CoreMinimal.h"
#include "CatwalkClothComponentBase.h"
#include "CatwalkClothComponent.generated.h"

class UCatwalkClothOverride;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class CATWALKCLOTH_API UCatwalkClothComponent : public UCatwalkClothComponentBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCatwalkClothOverride* ClothOverride;
    
    UCatwalkClothComponent(const FObjectInitializer& ObjectInitializer);

};

