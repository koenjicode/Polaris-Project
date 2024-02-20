// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Factories/Factory.h"
#include "PhoenixDynamicBoneBinaryFactory.generated.h"

/**
 * 
 */
UCLASS()
class UPhoenixDynamicBoneBinaryFactory : public UFactory
{
	GENERATED_BODY()

	UPhoenixDynamicBoneBinaryFactory();

	virtual UObject* FactoryCreateNew(UClass* InClass, UObject* InParent, FName InName, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn) override;
	
};
