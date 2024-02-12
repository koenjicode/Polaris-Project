// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Factories/Factory.h"
#include "ItemPrefabFactory.generated.h"

/**
 * 
 */
UCLASS()
class UItemPrefabFactory : public UFactory
{
	GENERATED_BODY()

	UItemPrefabFactory();

	virtual UObject* FactoryCreateNew(UClass* InClass, UObject* InParent, FName InName, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn) override;
	
};
