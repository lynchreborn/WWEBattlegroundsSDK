#include "WWECharismaBar.h"

UWWECharismaBar::UWWECharismaBar() {
    this->CharismaProgressBar = NULL;
    this->CharismaProgressText = NULL;
    this->CharismaLock = NULL;
    this->LockBegin = NULL;
    this->LockFlicker = NULL;
    this->LockFlickerFast = NULL;
    this->AddCharismaFromKeyActionAnim = NULL;
    this->BarMaterialDynamicInstance = NULL;
    this->CharismaBarMaterial = NULL;
    this->CurrentBarPercentage = 0.00f;
    this->CurrentBarValue = 0.00f;
    this->CharismaToAddValue = NULL;
    this->KeyActionCanvas = NULL;
    this->KeyActionIcon = NULL;
    this->KeyActionIcon2 = NULL;
    this->MicrophoneIcon = NULL;
    this->MicrophoneNormalIcon = NULL;
    this->MicrophoneKeyActionIcon = NULL;
    this->PositiveStyle = NULL;
    this->NegativeStyle = NULL;
}

