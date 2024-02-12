    #pragma once
    #include "Modules/ModuleInterface.h"
    #include "CustomizeSetActions.h"

    class FPolarisEditorModule : public IModuleInterface
    {
    public:

        virtual void StartupModule() override;
        virtual void ShutdownModule() override;
        
    private:

        TSharedPtr<FCustomizeSetActions> CustomizeSetAssetTypeActions;
        TSharedPtr<FAuraCharacterItemActions> AuraCharacterAssetTypeActions;
    };