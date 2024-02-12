// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Factories/Factory.h"
#include "BaseMakeItemFactory.generated.h"

/**
 * 
 */
UCLASS()
class UBaseMakeItemFactory : public UFactory
{
	GENERATED_BODY()

	UBaseMakeItemFactory();

	virtual UObject* FactoryCreateNew(UClass* InClass, UObject* InParent, FName InName, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn) override;
	
};
