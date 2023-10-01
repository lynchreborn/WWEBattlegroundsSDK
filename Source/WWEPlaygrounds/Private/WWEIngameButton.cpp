#include "WWEIngameButton.h"

void UWWEIngameButton::SelectButtonAnimationFrame() {
}

void UWWEIngameButton::RestoreProgressBarAfterAnimation() {
}

UWWEIngameButton::UWWEIngameButton() {
    this->Button = NULL;
    this->PressedButton = NULL;
    this->TextLeft = NULL;
    this->TextRight = NULL;
    this->ProgressBar = NULL;
    this->ProgressBarGlow = NULL;
    this->AdditionalIcon = NULL;
    this->BackgroundIcon = NULL;
    this->CharismaIcon = NULL;
    this->EventCarIcon = NULL;
    this->EventCrocodileIcon = NULL;
    this->EventCoffinIcon = NULL;
    this->FeedbackBackGround = NULL;
    this->CP_SignatureAndFinisher = NULL;
    this->PressButtonLoop = NULL;
    this->CounterAnim = NULL;
    this->ShowFeedbackBackground = NULL;
    this->EventCarryIconLoop = NULL;
    this->MoneyGrabCompleteAnimation = NULL;
    this->Action = EWWEActionTypes::None;
    this->ProgressBarMaterial = NULL;
    this->ProgressBarGlowMaterial = NULL;
    this->FeedbackBackGroundMaterial = NULL;
    this->bIsHoldButton = false;
    this->FrameNumber = 0;
    this->TotalAnimationTime = 0.00f;
    this->MaxAnimationTime = 0.00f;
    this->LeftTime = 0.00f;
}

