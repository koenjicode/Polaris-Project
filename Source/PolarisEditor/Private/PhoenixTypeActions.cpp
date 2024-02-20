// Fill out your copyright notice in the Description page of Project Settings.


#include "PhoenixTypeActions.h"
#include "PhoenixDynamicBoneBinary.h"

FPhoenixDynamicBoneBinaryActions::FPhoenixDynamicBoneBinaryActions(EAssetTypeCategories::Type InAssetCategory)
{
	PolarisCategory = InAssetCategory;
}

UClass* FPhoenixDynamicBoneBinaryActions::GetSupportedClass() const
{
	return UPhoenixDynamicBoneBinary::StaticClass();
}

FText FPhoenixDynamicBoneBinaryActions::GetName() const
{
	return INVTEXT("Phoenix Dynamic Bone Binary");
}

FColor FPhoenixDynamicBoneBinaryActions::GetTypeColor() const
{
	return FColor::Silver;
}

uint32 FPhoenixDynamicBoneBinaryActions::GetCategories()
{
	return PolarisCategory;
}
