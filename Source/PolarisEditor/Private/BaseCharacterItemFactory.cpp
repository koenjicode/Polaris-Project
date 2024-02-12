// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseCharacterItemFactory.h"

#include "BaseCharacterItem.h"

UBaseCharacterItemFactory::UBaseCharacterItemFactory()
{
	SupportedClass = UBaseCharacterItem::StaticClass();
	bCreateNew = true;
}

UObject* UBaseCharacterItemFactory::FactoryCreateNew(UClass* InClass, UObject* InParent, FName InName,
	EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn)
{
	return NewObject<UBaseCharacterItem>(InParent, InClass, InName, Flags, Context);
}
