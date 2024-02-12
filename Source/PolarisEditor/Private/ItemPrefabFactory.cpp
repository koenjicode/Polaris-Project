// Fill out your copyright notice in the Description page of Project Settings.


#include "ItemPrefabFactory.h"

#include "ItemPrefab.h"

UItemPrefabFactory::UItemPrefabFactory()
{
	SupportedClass = UItemPrefab::StaticClass();
	bCreateNew = true;
}

UObject* UItemPrefabFactory::FactoryCreateNew(UClass* InClass, UObject* InParent, FName InName,
	EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn)
{
	return NewObject<UItemPrefab>(InParent, InClass, InName, Flags, Context);
}