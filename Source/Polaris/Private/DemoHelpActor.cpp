#include "DemoHelpActor.h"

ADemoHelpActor::ADemoHelpActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->UseDemoSequencer = NULL;
}

void ADemoHelpActor::SetUpUseSequencer(ULevelSequencePlayer* _SeqPlayer, ALevelSequenceActor* _SeqActor) {
}


