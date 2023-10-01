#include "WWECharacterEditorStepBody.h"

UWWECharacterEditorStepBody::UWWECharacterEditorStepBody() {
    this->SkinGrid = NULL;
    this->BodyHairSlider = NULL;
    this->ElderSlider = NULL;
    this->CustomAxisDeadzone = 0.00f;
    this->SelectCustomButton = NULL;
    this->FocusIndex = 0;
    this->MaxFocusIndex = 3;
    this->MaxAnalogMovement = 5.00f;
    this->CurrentAnalogMovement = 0.00f;
    this->OnNavigatedSoundCue = NULL;
}

