#include "PolarisEditorModule.h"

IMPLEMENT_GAME_MODULE(FPolarisEditorModule, PolarisEditor);

void FPolarisEditorModule::StartupModule()
{
	CustomizeSetAssetTypeActions = MakeShared<FCustomizeSetActions>();
	FAssetToolsModule::GetModule().Get().RegisterAssetTypeActions(CustomizeSetAssetTypeActions.ToSharedRef());

	AuraCharacterAssetTypeActions = MakeShared<FAuraCharacterItemActions>();
	FAssetToolsModule::GetModule().Get().RegisterAssetTypeActions(AuraCharacterAssetTypeActions.ToSharedRef());

	
}

void FPolarisEditorModule::ShutdownModule()
{
	if (!FModuleManager::Get().IsModuleLoaded("AssetTools")) return;
	
	FAssetToolsModule::GetModule().Get().UnregisterAssetTypeActions(CustomizeSetAssetTypeActions.ToSharedRef());

	FAssetToolsModule::GetModule().Get().UnregisterAssetTypeActions(AuraCharacterAssetTypeActions.ToSharedRef());
}