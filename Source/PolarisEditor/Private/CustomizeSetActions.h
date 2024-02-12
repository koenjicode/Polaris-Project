// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
 
#include "CoreMinimal.h"
#include "AssetTypeActions_Base.h"

class FAuraCharacterItemActions : public FAssetTypeActions_Base
{
public:

	FAuraCharacterItemActions(EAssetTypeCategories::Type InAssetCategory);
	
	UClass* GetSupportedClass() const override;
	FText GetName() const override;
	FColor GetTypeColor() const override;
	uint32 GetCategories() override;
private:
	
	EAssetTypeCategories::Type PolarisCategory;
};

class FBaseCharacterItemActions : public FAssetTypeActions_Base
{
public:
	FBaseCharacterItemActions(EAssetTypeCategories::Type InAssetCategory);
	
	UClass* GetSupportedClass() const override;
	FText GetName() const override;
	FColor GetTypeColor() const override;
	uint32 GetCategories() override;
private:
	
	EAssetTypeCategories::Type PolarisCategory;
};


class FBaseEyeItemActions : public FAssetTypeActions_Base
{
public:
	FBaseEyeItemActions(EAssetTypeCategories::Type InAssetCategory);
	
	UClass* GetSupportedClass() const override;
	FText GetName() const override;
	FColor GetTypeColor() const override;
	uint32 GetCategories() override;
private:
	
	EAssetTypeCategories::Type PolarisCategory;
};

class FBaseItemActions : public FAssetTypeActions_Base
{
public:
	FBaseItemActions(EAssetTypeCategories::Type InAssetCategory);
	
	UClass* GetSupportedClass() const override;
	FText GetName() const override;
	FColor GetTypeColor() const override;
	uint32 GetCategories() override;
private:
	
	EAssetTypeCategories::Type PolarisCategory;
};

class FBaseMakeItemActions : public FAssetTypeActions_Base
{
public:
	FBaseMakeItemActions(EAssetTypeCategories::Type InAssetCategory);
	
	UClass* GetSupportedClass() const override;
	FText GetName() const override;
	FColor GetTypeColor() const override;
	uint32 GetCategories() override;
private:
	
	EAssetTypeCategories::Type PolarisCategory;
};

class FCustomizeItemActions : public FAssetTypeActions_Base
{
public:
	FCustomizeItemActions(EAssetTypeCategories::Type InAssetCategory);
	
	UClass* GetSupportedClass() const override;
	FText GetName() const override;
	FColor GetTypeColor() const override;
	uint32 GetCategories() override;
private:
	
	EAssetTypeCategories::Type PolarisCategory;
};

class FCustomizeSetActions : public FAssetTypeActions_Base
{
public:
	FCustomizeSetActions(EAssetTypeCategories::Type InAssetCategory);
	
	UClass* GetSupportedClass() const override;
	FText GetName() const override;
	FColor GetTypeColor() const override;
	uint32 GetCategories() override;
private:
	
	EAssetTypeCategories::Type PolarisCategory;
};

class FEffectCharacterItemActions : public FAssetTypeActions_Base
{
public:
	FEffectCharacterItemActions(EAssetTypeCategories::Type InAssetCategory);
	
	UClass* GetSupportedClass() const override;
	FText GetName() const override;
	FColor GetTypeColor() const override;
	uint32 GetCategories() override;
private:
	
	EAssetTypeCategories::Type PolarisCategory;
};
