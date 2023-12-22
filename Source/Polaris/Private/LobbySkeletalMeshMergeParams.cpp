#include "LobbySkeletalMeshMergeParams.h"

FLobbySkeletalMeshMergeParams::FLobbySkeletalMeshMergeParams() {
    this->StripTopLODS = 0;
    this->bNeedsCpuAccess = false;
    this->bSkeletonBefore = false;
    this->Skeleton = NULL;
}

