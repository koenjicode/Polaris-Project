// Fill out your copyright notice in the Description page of Project Settings.


#include "PolarisSetActions.h"
#include "AuraCharacterItem.h"
#include "BaseCharacterItem.h"
#include "BaseEyeItem.h"
#include "BaseItem.h"
#include "BaseMakeItem.h"
#include "CustomizeItem.h"
#include "CustomizeSet.h"
#include "EffectCharacterItem.h"
#include "ItemPrefab.h"

// AURA CHARACTER ITEM

FAuraCharacterItemActions::FAuraCharacterItemActions(EAssetTypeCategories::Type InAssetCategory)
{
	PolarisCategory = InAssetCategory;
}

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
	return PolarisCategory;
}

// BASE CHARACTER ITEM

FBaseCharacterItemActions::FBaseCharacterItemActions(EAssetTypeCategories::Type InAssetCategory)
{
	PolarisCategory = InAssetCategory;
}

UClass* FBaseCharacterItemActions::GetSupportedClass() const
{
	return UBaseCharacterItem::StaticClass();
}

FText FBaseCharacterItemActions::GetName() const
{
	return INVTEXT("Polaris Base Character Item");
}

FColor FBaseCharacterItemActions::GetTypeColor() const
{
	return FColor::Cyan;
}

uint32 FBaseCharacterItemActions::GetCategories()
{
	return EAssetTypeCategories::Basic | PolarisCategory;
}

// BASE EYE ITEM

FBaseEyeItemActions::FBaseEyeItemActions(EAssetTypeCategories::Type InAssetCategory)
{
	PolarisCategory = InAssetCategory;
}

UClass* FBaseEyeItemActions::GetSupportedClass() const
{
	return UBaseEyeItem::StaticClass();
}

FText FBaseEyeItemActions::GetName() const
{
	return INVTEXT("Polaris Base Eye Item");
}

FColor FBaseEyeItemActions::GetTypeColor() const
{
	return FColor::Cyan;
}

uint32 FBaseEyeItemActions::GetCategories()
{
	return PolarisCategory;
}

// BASE ITEM

FBaseItemActions::FBaseItemActions(EAssetTypeCategories::Type InAssetCategory)
{
	PolarisCategory = InAssetCategory;
}

UClass* FBaseItemActions::GetSupportedClass() const
{
	return UBaseItem::StaticClass();
}

FText FBaseItemActions::GetName() const
{
	return INVTEXT("Polaris Base Item");
}

FColor FBaseItemActions::GetTypeColor() const
{
	return FColor::Cyan;
}

uint32 FBaseItemActions::GetCategories()
{
	return EAssetTypeCategories::Basic | PolarisCategory;
}

// BASE MAKE ITEM

FBaseMakeItemActions::FBaseMakeItemActions(EAssetTypeCategories::Type InAssetCategory)
{
	PolarisCategory = InAssetCategory;
}

UClass* FBaseMakeItemActions::GetSupportedClass() const
{
	return UBaseMakeItem::StaticClass();
}

FText FBaseMakeItemActions::GetName() const
{
	return INVTEXT("Polaris Base Makeup Item");
}

FColor FBaseMakeItemActions::GetTypeColor() const
{
	return FColor::Cyan;
}

uint32 FBaseMakeItemActions::GetCategories()
{
	return PolarisCategory;
}

// CUSTOMIZE ITEM

FCustomizeItemActions::FCustomizeItemActions(EAssetTypeCategories::Type InAssetCategory)
{
	PolarisCategory = InAssetCategory;
}

UClass* FCustomizeItemActions::GetSupportedClass() const
{
	return UCustomizeItem::StaticClass();
}

FText FCustomizeItemActions::GetName() const
{
	return INVTEXT("Polaris Customize Item");
}

FColor FCustomizeItemActions::GetTypeColor() const
{
	return FColor::Cyan;
}

uint32 FCustomizeItemActions::GetCategories()
{
	return EAssetTypeCategories::Basic | PolarisCategory;
}

// CUSTOMIZE SET

FCustomizeSetActions::FCustomizeSetActions(EAssetTypeCategories::Type InAssetCategory)
{
	PolarisCategory = InAssetCategory;
}

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
	return PolarisCategory;
}

// EFFECT CHARACTER ITEM

FEffectCharacterItemActions::FEffectCharacterItemActions(EAssetTypeCategories::Type InAssetCategory)
{
	PolarisCategory = InAssetCategory;
}

UClass* FEffectCharacterItemActions::GetSupportedClass() const
{
	return UEffectCharacterItem::StaticClass();
}

FText FEffectCharacterItemActions::GetName() const
{
	return INVTEXT("Polaris Effect Character Item");
}

FColor FEffectCharacterItemActions::GetTypeColor() const
{
	return FColor::Cyan;
}

uint32 FEffectCharacterItemActions::GetCategories()
{
	return PolarisCategory;
}

// ITEM PREFAB

FItemPrefabActions::FItemPrefabActions(EAssetTypeCategories::Type InAssetCategory)
{
	PolarisCategory = InAssetCategory;
}

UClass* FItemPrefabActions::GetSupportedClass() const
{
	return UItemPrefab::StaticClass();
}

FText FItemPrefabActions::GetName() const
{
	return INVTEXT("Polaris Item Prefab");
}

FColor FItemPrefabActions::GetTypeColor() const
{
	return FColor::Cyan;
}

uint32 FItemPrefabActions::GetCategories()
{
	return EAssetTypeCategories::Basic | PolarisCategory;
}