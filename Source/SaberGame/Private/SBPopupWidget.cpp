#include "SBPopupWidget.h"

USBPopupWidget::USBPopupWidget() {
    this->IdleAnimation = NULL;
    this->TransitionInUID = TEXT("fade");
    this->InAnimation = NULL;
    this->InSoundCue = NULL;
    this->OutAnimation = NULL;
    this->OutSoundCue = NULL;
}

