#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PolarisGraphicsDispatcherComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class POLARIS_API UPolarisGraphicsDispatcherComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPolarisHDRDelegate, bool, bHDR, int32, nit);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPolarisHDRDelegate OnHDRChanged;
    
    UPolarisGraphicsDispatcherComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetHDRCheck(bool bCheckOn);
    
};

