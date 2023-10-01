#include "SBGameModeGameplay.h"

ASBGameModeGameplay::ASBGameModeGameplay() {
    this->bAbortMatchWithNoPlayers = true;
    this->SourceTimeDilation = 0.00f;
    this->TargetTimeDilation = 0.00f;
    this->TimeDilationTransitionTime = 0.00f;
    this->TimeDilationStartRealTimestamp = 0.00f;
}

