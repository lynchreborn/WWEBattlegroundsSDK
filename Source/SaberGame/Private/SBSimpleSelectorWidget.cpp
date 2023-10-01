#include "SBSimpleSelectorWidget.h"

USBSimpleSelectorWidget::USBSimpleSelectorWidget() {
    this->bHasCircularNavigation = false;
    this->PreviousOptionCaption = NULL;
    this->NextOptionCaption = NULL;
    this->PreviousOptionShownSoundCue = NULL;
    this->NextOptionShownSoundCue = NULL;
    this->OptionIndicatorArchetype = NULL;
    this->InnerPanel = NULL;
    this->PreviousOptionText = NULL;
    this->NextOptionText = NULL;
    this->CurrentOptionText = NULL;
    this->LeftSelector = NULL;
    this->RightSelector = NULL;
}

