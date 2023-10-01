#include "WWEHUDActionTooltipParams.h"

FWWEHUDActionTooltipParams::FWWEHUDActionTooltipParams() {
    this->InputAction = EWWEInputAction::None;
    this->ButtonCondition = EWWEButtonCondition::None;
    this->bCheckInputHeight = false;
    this->Priority = 0;
}

