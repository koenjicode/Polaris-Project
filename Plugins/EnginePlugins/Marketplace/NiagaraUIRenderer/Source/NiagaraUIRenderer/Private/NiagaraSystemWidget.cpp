#include "NiagaraSystemWidget.h"

UNiagaraSystemWidget::UNiagaraSystemWidget() {
    this->bIsVolatile = true;
    this->NiagaraSystemReference = NULL;
    this->AutoActivate = true;
    this->TickWhenPaused = false;
    this->FakeDepthScale = false;
    this->FakeDepthScaleDistance = 1000.00f;
    this->ShowDebugSystemInWorld = false;
    this->DisableWarnings = false;
    this->NiagaraActor = NULL;
    this->NiagaraComponent = NULL;
}

void UNiagaraSystemWidget::UpdateTickWhenPaused(bool NewTickWhenPaused) {
}

void UNiagaraSystemWidget::UpdateNiagaraSystemReference(UNiagaraSystem* NewNiagaraSystem) {
}

UNiagaraUIComponent* UNiagaraSystemWidget::GetNiagaraComponent() {
    return NULL;
}

void UNiagaraSystemWidget::DeactivateSystem() {
}

void UNiagaraSystemWidget::ActivateSystem(bool Reset) {
}


