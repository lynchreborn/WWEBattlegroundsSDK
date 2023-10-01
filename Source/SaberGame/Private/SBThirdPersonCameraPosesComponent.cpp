#include "SBThirdPersonCameraPosesComponent.h"
#include "SBThirdPersonCameraPose.h"

USBThirdPersonCameraPosesComponent::USBThirdPersonCameraPosesComponent() {
    this->CurrentTransitionPose = NULL;
    this->TransitionOriginPose = NULL;
    this->CachedTransitionStartCameraPose = CreateDefaultSubobject<USBThirdPersonCameraPose>(TEXT("CachedTransitionStartCameraPose"));
    this->OwnerCharacterRef = NULL;
    this->CameraComponentRef = NULL;
    this->SpringArmComponentRef = NULL;
}

