    #pragma once
    #include "Modules/ModuleInterface.h"

#define TEKKENGAME_EDITOR_MODULE_NAME "PolarisGameEditor"

    class IPolarisGameEditorModule : public IModuleInterface
    {
    public:

        virtual uint32 GetPolarisGameAssetCategory() const = 0;
    };
