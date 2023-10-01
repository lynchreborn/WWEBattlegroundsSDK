#include "SBPlatformTiedIcon.h"

USBPlatformTiedIcon::USBPlatformTiedIcon() {
    this->CurrentIcon = NULL;
    this->bPcOnlyUsePcIcon = false;
    this->DisableKeysChecking = false;
    this->ForcedPlatform = ESBPlatformTiedIconPlatforms::NONE;
    this->GameInstance = NULL;
}

