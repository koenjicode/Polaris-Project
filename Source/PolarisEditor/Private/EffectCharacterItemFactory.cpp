// Fill out your copyright notice in the Description page of Project Settings.


#include "EffectCharacterItemFactory.h"

#include "EffectCharacterItem.h"

UEffectCharacterItemFactory::UEffectCharacterItemFactory()
{
	SupportedClass = UEffectCharacterItem::StaticClass();
	bCreateNew = true;
}

UObject* UEffectCharacterItemFactory::FactoryCreateNew(UClass* InClass, UObject* InParent, FName InName,
	EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn)
{
	return NewObject<UEffectCharacterItem>(InParent, InClass, InName, Flags, Context);
}