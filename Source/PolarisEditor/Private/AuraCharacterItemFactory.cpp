// Fill out your copyright notice in the Description page of Project Settings.


#include "AuraCharacterItemFactory.h"
#include "AuraCharacterItem.h"

UAuraCharacterItemFactory::UAuraCharacterItemFactory()
{
	SupportedClass = UAuraCharacterItem::StaticClass();
	bCreateNew = true;
}

UObject* UAuraCharacterItemFactory::FactoryCreateNew(UClass* InClass, UObject* InParent, FName InName,
	EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn)
{
	return NewObject<UAuraCharacterItem>(InParent, InClass, InName, Flags, Context);
}
