#include "UiCommunicationStatus.h"

FUiCommunicationStatus::FUiCommunicationStatus() {
    this->rtt = 0;
    this->Delay = 0;
    this->rollback = 0;
    this->is_wired = false;
    this->antenna = 0;
    this->own_proc_drop = false;
    this->opponent_proc_drop = false;
}

