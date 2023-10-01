#include "WWERotateInputController.h"

UWWERotateInputController::UWWERotateInputController() {
    this->bKeyBoardRotationDelta = false;
    this->bTurnLeftPressed = false;
    this->bTurnRightPressed = false;
    this->KeyBoardRotationDeltaTime = 0.00f;
    this->KeyBoardRotationSpeed = 0.00f;
}

