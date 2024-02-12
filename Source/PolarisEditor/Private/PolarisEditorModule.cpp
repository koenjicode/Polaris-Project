#include "PolarisEditorModule.h"

IMPLEMENT_GAME_MODULE(FPolarisEditorModule, PolarisEditor);

void FPolarisEditorModule::StartupModule()
{
	CustomizeSetAssetTypeActions = MakeShared<FCustomizeSetActions>();
	FAssetToolsModule::GetModule().Get().RegisterAssetTypeActions(CustomizeSetAssetTypeActions.ToSharedRef());
}

void FPolarisEditorModule::ShutdownModule()
{
	if (!FModuleManager::Get().IsModuleLoaded("AssetTools")) return;
	FAssetToolsModule::GetModule().Get().UnregisterAssetTypeActions(CustomizeSetAssetTypeActions.ToSharedRef());
}