#include "PGMatchmakingConfigWidget.h"

UPGMatchmakingConfigWidget::UPGMatchmakingConfigWidget() {
    this->CompetitionMode = ESBCompetitionMode::None;
    this->MatchMode = ESBMatchMode::None;
    this->CurrentState = EPGMatchmakingConfigState::ConfiguringSlots;
    this->PendingState = EPGMatchmakingConfigState::COUNT;
}

