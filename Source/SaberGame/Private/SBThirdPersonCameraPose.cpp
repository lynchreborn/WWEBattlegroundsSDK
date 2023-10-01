#include "SBThirdPersonCameraPose.h"

USBThirdPersonCameraPose::USBThirdPersonCameraPose() {
    this->CameraFieldOfView = 0.00f;
    this->SpringArmTargetLength = 0.00f;
    this->BaseEyeHeight = 0.00f;
    this->TimelineCurve = NULL;
    this->TransitionDurationSeconds = 0.00f;
    this->MotionBlurAmount = 0.00f;
}

