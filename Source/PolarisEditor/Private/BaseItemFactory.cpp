// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseItemFactory.h"
#include "BaseItem.h"

UBaseItemFactory::UBaseItemFactory()
{
	SupportedClass = UBaseItem::StaticClass();
	bCreateNew = true;
}

UObject* UBaseItemFactory::FactoryCreateNew(UClass* InClass, UObject* InParent, FName InName,
	EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn)
{
	return NewObject<UBaseItem>(InParent, InClass, InName, Flags, Context);
}

