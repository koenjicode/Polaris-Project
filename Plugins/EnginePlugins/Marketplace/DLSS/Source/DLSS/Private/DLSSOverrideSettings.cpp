#include "DLSSOverrideSettings.h"

UDLSSOverrideSettings::UDLSSOverrideSettings() {
    this->EnableDLSSInEditorViewportsOverride = EDLSSSettingOverride::UseProjectSettings;
    this->EnableDLSSInPlayInEditorViewportsOverride = EDLSSSettingOverride::UseProjectSettings;
    this->bShowDLSSIncompatiblePluginsToolsWarnings = false;
    this->ShowDLSSSDebugOnScreenMessages = EDLSSSettingOverride::UseProjectSettings;
}


