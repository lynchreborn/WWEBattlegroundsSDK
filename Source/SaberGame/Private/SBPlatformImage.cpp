#include "SBPlatformImage.h"

USBPlatformImage::USBPlatformImage() {
    this->PlatformImage = NULL;
    this->ControllerTypeSource = ESBControllerTypeSource::ActivePlayer;
    this->ForceControllerType = ESBControllerType::None;
}

