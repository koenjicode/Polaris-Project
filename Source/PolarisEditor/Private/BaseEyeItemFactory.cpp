// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseEyeItemFactory.h"
#include "BaseEyeItem.h"

UBaseEyeItemFactory::UBaseEyeItemFactory()
{
	SupportedClass = UBaseEyeItem::StaticClass();
	bCreateNew = true;
}

UObject* UBaseEyeItemFactory::FactoryCreateNew(UClass* InClass, UObject* InParent, FName InName,
	EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn)
{
	return NewObject<UBaseEyeItem>(InParent, InClass, InName, Flags, Context);
}

