// Fill out your copyright notice in the Description page of Project Settings.


#include "CustomizeSetActions.h"
#include "AuraCharacterItem.h"
#include "CustomizeSet.h"

// CUSTOMIZE SET ACTIONS

UClass* FCustomizeSetActions::GetSupportedClass() const
{
	return UCustomizeSet::StaticClass();
}

FText FCustomizeSetActions::GetName() const
{
	return INVTEXT("Polaris Customization Set");
}

FColor FCustomizeSetActions::GetTypeColor() const
{
	return FColor::Cyan;
}

uint32 FCustomizeSetActions::GetCategories()
{
	return EAssetTypeCategories::Basic;
}

// AURA CHARACTER ITEM ACTIONS

UClass* FAuraCharacterItemActions::GetSupportedClass() const
{
	return UAuraCharacterItem::StaticClass();
}

FText FAuraCharacterItemActions::GetName() const
{
	return INVTEXT("Polaris Aura Character Item");
}

FColor FAuraCharacterItemActions::GetTypeColor() const
{
	return FColor::Cyan;
}

uint32 FAuraCharacterItemActions::GetCategories()
{
	return EAssetTypeCategories::Basic;
}
