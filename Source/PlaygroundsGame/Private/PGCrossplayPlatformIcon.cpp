#include "PGCrossplayPlatformIcon.h"

UPGCrossplayPlatformIcon::UPGCrossplayPlatformIcon() {
    this->IconImage = NULL;
    this->IconType = ESBPlatformType::Unknown;
    this->IconSize = EPGPlatformIconSize::Small;
    this->bIsTutorial = false;
    this->bForceXboxIconInPc = false;
    this->ForceIcon = EPGPlatformIconPlatform::NONE;
}

