#include "PolarisEditorModule.h"

#define LOCTEXT_NAMESPACE "PolarisEditor"

class FPolarisGameEditor : public IPolarisGameEditorModule
{
public:
	FPolarisGameEditor()
		: PolarisGameAssetCategoryBit(EAssetTypeCategories::Misc)
	{
	}

	virtual uint32 GetPolarisGameAssetCategory() const override { return PolarisGameAssetCategoryBit; }

private:
	
	/** All created asset type actions.  Cached here so that we can unregister them during shutdown. */
	TArray<TSharedPtr<IAssetTypeActions>> CreatedAssetTypeActions;
	EAssetTypeCategories::Type PolarisGameAssetCategoryBit;

public:
	
	virtual void StartupModule() override
	{
		// Register asset types
		IAssetTools& AssetTools = FModuleManager::LoadModuleChecked<FAssetToolsModule>("AssetTools").Get();
		
		PolarisGameAssetCategoryBit = AssetTools.RegisterAdvancedAssetCategory(FName(TEXT("Polaris")),
			LOCTEXT("PolarisAssetCategory", "Polaris"));

		RegisterAssetTypeAction(AssetTools, MakeShareable(new FAuraCharacterItemActions(PolarisGameAssetCategoryBit)));
		RegisterAssetTypeAction(AssetTools, MakeShareable(new FBaseCharacterItemActions(PolarisGameAssetCategoryBit)));
		RegisterAssetTypeAction(AssetTools, MakeShareable(new FBaseEyeItemActions(PolarisGameAssetCategoryBit)));
		RegisterAssetTypeAction(AssetTools, MakeShareable(new FBaseMakeItemActions(PolarisGameAssetCategoryBit)));
		RegisterAssetTypeAction(AssetTools, MakeShareable(new FCustomizeItemActions(PolarisGameAssetCategoryBit)));
		RegisterAssetTypeAction(AssetTools, MakeShareable(new FCustomizeSetActions(PolarisGameAssetCategoryBit)));
		RegisterAssetTypeAction(AssetTools, MakeShareable(new FEffectCharacterItemActions(PolarisGameAssetCategoryBit)));
		RegisterAssetTypeAction(AssetTools, MakeShareable(new FItemPrefabActions(PolarisGameAssetCategoryBit)));
	}

	virtual void ShutdownModule() override
	{

		// Unregister the details customization
		//@TODO: Unregister them

		// Unregister all the asset types that we registered
		if (FModuleManager::Get().IsModuleLoaded("AssetTools"))
		{
			IAssetTools& AssetTools = FModuleManager::GetModuleChecked<FAssetToolsModule>("AssetTools").Get();
			for (int32 Index = 0; Index < CreatedAssetTypeActions.Num(); ++Index)
			{
				AssetTools.UnregisterAssetTypeActions(CreatedAssetTypeActions[Index].ToSharedRef());
			}
		}
		
		CreatedAssetTypeActions.Empty();
	}
private:
	
	void RegisterAssetTypeAction(IAssetTools& AssetTools, TSharedRef<IAssetTypeActions> Action)
	{
		AssetTools.RegisterAssetTypeActions(Action);
		CreatedAssetTypeActions.Add(Action);
	}
};

//////////////////////////////////////////////////////////////////////////

IMPLEMENT_MODULE(FPolarisGameEditor, PolarisEditor);

#undef LOCTEXT_NAMESPACE