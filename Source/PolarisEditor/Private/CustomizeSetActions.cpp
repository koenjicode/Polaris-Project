// Fill out your copyright notice in the Description page of Project Settings.


#include "CustomizeSetActions.h"

#include "CustomizeSet.h"

UClass* FCustomizeSetActions::GetSupportedClass() const
{
	return UCustomizeSet::StaticClass();
}

FText FCustomizeSetActions::GetName() const
{
	return INVTEXT("Customization Set");
}

FColor FCustomizeSetActions::GetTypeColor() const
{
	return FColor::Cyan;
}

uint32 FCustomizeSetActions::GetCategories()
{
	return EAssetTypeCategories::Basic;
}
