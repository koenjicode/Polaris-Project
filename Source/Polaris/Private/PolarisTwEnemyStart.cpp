#include "PolarisTwEnemyStart.h"

APolarisTwEnemyStart::APolarisTwEnemyStart(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PointType = EStoryTwPointType::BattleStart;
    this->Act = EStoryTwAct::ACT10_1;
    this->RepopInterval = 60;
    this->RepopLimit = 10;
}


