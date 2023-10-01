#include "ExtCharacterMovementComponent.h"

UExtCharacterMovementComponent::UExtCharacterMovementComponent() {
    this->MirrorRootMotion = false;
    this->MirrorAxis = EAxis::None;
    this->FlipAxis = EAxis::None;
}

