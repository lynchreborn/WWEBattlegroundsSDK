#include "WWEGrabStunnedRopesAction.h"

UWWEGrabStunnedRopesAction::UWWEGrabStunnedRopesAction() {
    this->bFatality = false;
    this->bCheckDirectionToMove = false;
    this->DirectionToMoveOffensiveAfterWinSection = EWWEDirection::None;
}

