// Fill out your copyright notice in the Description page of Project Settings.


#include "CustomizeItemFactory.h"

#include "CustomizeItem.h"

UCustomizeItemFactory::UCustomizeItemFactory()
{
	SupportedClass = UCustomizeItem::StaticClass();
	bCreateNew = true;
}

UObject* UCustomizeItemFactory::FactoryCreateNew(UClass* InClass, UObject* InParent, FName InName,
	EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn)
{
	return NewObject<UCustomizeItem>(InParent, InClass, InName, Flags, Context);
}