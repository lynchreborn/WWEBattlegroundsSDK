#include "WWEAction_IrishWhip.h"

void UWWEAction_IrishWhip::WantToPerformTurnbuckleMinigame_Implementation() {
}
bool UWWEAction_IrishWhip::WantToPerformTurnbuckleMinigame_Validate() {
    return true;
}

UWWEAction_IrishWhip::UWWEAction_IrishWhip() {
    this->DirectionAxis = EWWEDirection::None;
    this->bWantToPerformTurnbuckleMinigame = false;
}

