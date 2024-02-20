// Fill out your copyright notice in the Description page of Project Settings.


#include "PhoenixDynamicBoneBinaryFactory.h"

#include "PhoenixDynamicBoneBinary.h"

UPhoenixDynamicBoneBinaryFactory::UPhoenixDynamicBoneBinaryFactory()
{
	SupportedClass = UPhoenixDynamicBoneBinary::StaticClass();
	bCreateNew = true;
}

UObject* UPhoenixDynamicBoneBinaryFactory::FactoryCreateNew(UClass* InClass, UObject* InParent, FName InName,
	EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn)
{
	return NewObject<UPhoenixDynamicBoneBinary>(InParent, InClass, InName, Flags, Context);
}

