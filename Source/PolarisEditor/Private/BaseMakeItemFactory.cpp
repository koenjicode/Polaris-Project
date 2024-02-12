// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseMakeItemFactory.h"

#include "BaseMakeItem.h"

UBaseMakeItemFactory::UBaseMakeItemFactory()
{
	SupportedClass = UBaseMakeItem::StaticClass();
	bCreateNew = true;
}

UObject* UBaseMakeItemFactory::FactoryCreateNew(UClass* InClass, UObject* InParent, FName InName,
	EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn)
{
	return NewObject<UBaseMakeItem>(InParent, InClass, InName, Flags, Context);
}

