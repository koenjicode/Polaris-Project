#include "LobbyMachineActor.h"

ALobbyMachineActor::ALobbyMachineActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanBeInCluster = false;
    this->_MachineType = ELobbyMachineType::Single;
    this->_MachineStyle = ELobbyMachineStyle::Standard;
    this->_uniqueId = 0;
    this->_groupId = 0;
    this->_animMale = NULL;
    this->_animFemale = NULL;
    this->_extraModelInstance = NULL;
    this->_enemy = NULL;
}


int64 ALobbyMachineActor::GetOwnerCosmosId() {
    return 0;
}

ALobbyMachineActor* ALobbyMachineActor::GetMachineActor(int32 UniqueId) {
    return NULL;
}


