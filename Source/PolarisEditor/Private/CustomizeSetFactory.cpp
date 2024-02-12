// Fill out your copyright notice in the Description page of Project Settings.


#include "CustomizeSetFactory.h"

#include "CustomizeSet.h"

UCustomizeSetFactory::UCustomizeSetFactory()
{
	SupportedClass = UCustomizeSet::StaticClass();
	bCreateNew = true;
}

UObject* UCustomizeSetFactory::FactoryCreateNew(UClass* InClass, UObject* InParent, FName InName, EObjectFlags Flags,
	UObject* Context, FFeedbackContext* Warn)
{
	return NewObject<UCustomizeSet>(InParent, InClass, InName, Flags, Context);
}
