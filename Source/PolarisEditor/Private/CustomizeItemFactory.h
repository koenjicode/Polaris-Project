// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Factories/Factory.h"
#include "CustomizeItemFactory.generated.h"

/**
 * 
 */
UCLASS()
class UCustomizeItemFactory : public UFactory
{
	GENERATED_BODY()

	UCustomizeItemFactory();

	virtual UObject* FactoryCreateNew(UClass* InClass, UObject* InParent, FName InName, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn) override;
	
};
