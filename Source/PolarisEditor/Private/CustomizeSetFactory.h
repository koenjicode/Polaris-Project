// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Factories/Factory.h"
#include "CustomizeSetFactory.generated.h"

/**
 * 
 */
UCLASS()
class UCustomizeSetFactory : public UFactory
{
	GENERATED_BODY()

	UCustomizeSetFactory();

	virtual UObject* FactoryCreateNew(UClass* InClass, UObject* InParent, FName InName, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn) override;
	
};
