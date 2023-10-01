#include "SBAnimatedGrid.h"

void USBAnimatedGrid::TransitionRoutine(float InDeltaTime) {
}

USBAnimatedGrid::USBAnimatedGrid() {
    this->AnimationSpeed = 0.00f;
    this->TransitionLerpValue = 0.00f;
    this->Transitionate = false;
}

