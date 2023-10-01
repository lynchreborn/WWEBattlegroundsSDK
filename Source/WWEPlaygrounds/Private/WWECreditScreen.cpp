#include "WWECreditScreen.h"

UWWECreditScreen::UWWECreditScreen() {
    this->ScrollBoxPanel = NULL;
    this->LeftCreditsFrame = NULL;
    this->RightCreditsFrame = NULL;
    this->TopSpacer = NULL;
    this->LegalTextVerticalBox = NULL;
    this->LegalArabeImageVerticalBox = NULL;
    this->ScrollSpeed = 0.00f;
    this->InitialDelay = 0.70f;
    this->SizePostScroll = 1000.00f;
    this->CurveType = EAlphaBlendOption::Linear;
    this->PreviousScrollOffset = 0.00f;
    this->CurrentLerpState = EWWECreditsScrollState::Idle;
    this->bStartedScrolling = false;
}

