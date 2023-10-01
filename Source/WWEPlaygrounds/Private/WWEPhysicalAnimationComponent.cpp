#include "WWEPhysicalAnimationComponent.h"

UWWEPhysicalAnimationComponent::UWWEPhysicalAnimationComponent() {
    this->PhysAnimConversionSpeed = 3.00f;
    this->AnimRecoverySpeed = 3.00f;
    this->bEnableOnSwitch = true;
    this->PhysicsAssetConfiguration = NULL;
    this->bActived = false;
}

