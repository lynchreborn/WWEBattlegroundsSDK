#include "WWECustomSliderBody.h"

UWWECustomSliderBody::UWWECustomSliderBody() {
    this->Selected = NULL;
    this->Unselected = NULL;
    this->Step = NULL;
    this->CustSlider = NULL;
    this->EditableName = NULL;
    this->BodySliderType = EWWEBodySliderType::BodyHair;
    this->MaxAnalogMovement = 10.00f;
    this->CurrentAnalogMovement = 0.00f;
    this->OnNavigatedMorpherSoundCue = NULL;
    this->BodyItemId = 0;
    this->bCanShowId = false;
}

