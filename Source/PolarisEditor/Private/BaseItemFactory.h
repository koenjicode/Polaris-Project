// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Factories/Factory.h"
#include "BaseItemFactory.generated.h"

/**
 * 
 */
UCLASS()
class UBaseItemFactory : public UFactory
{
	GENERATED_BODY()

	UBaseItemFactory();

	virtual UObject* FactoryCreateNew(UClass* InClass, UObject* InParent, FName InName, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn) override;
	
};
