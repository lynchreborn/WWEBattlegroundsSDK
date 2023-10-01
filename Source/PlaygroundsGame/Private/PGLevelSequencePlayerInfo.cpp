#include "PGLevelSequencePlayerInfo.h"

FPGLevelSequencePlayerInfo::FPGLevelSequencePlayerInfo() {
    this->LevelSequence = NULL;
    this->TargetDuration = 0.00f;
    this->bPlayReverse = false;
    this->bPauseAtEnd = false;
    this->LoopCount = 0;
}

