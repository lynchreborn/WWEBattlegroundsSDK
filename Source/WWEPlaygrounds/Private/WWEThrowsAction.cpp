#include "WWEThrowsAction.h"

UWWEThrowsAction::UWWEThrowsAction() {
    this->StartBodyPartGrabbed = EWWEGrabBodyPart::None;
    this->EndBodyPartGrabbed = EWWEGrabBodyPart::None;
    this->InterestDone = EWWEInterestFactor::Low;
    this->InterestReceive = EWWEInterestFactor::High;
    this->bFlipIKEffectorSockets = false;
    this->ThrowType = EWWEThrowType::Regular;
    this->bApronToApronLeft = false;
    this->bApronTurnbuckleRivalFaceRing = true;
    this->bToApronRivalFaceOut = false;
    this->bInFrontOf = true;
    this->bSelfEndOnApron = false;
    this->bRivalEndOnApron = false;
    this->bUseMidSocketRotation = false;
    this->bDumpedRival = false;
    this->bFaceUpRival = false;
    this->DisableSprintByTime = 0.00f;
    this->TimeToApplyReceiveDamageModifierDebuff = 0.00f;
    this->bBlinkTurnbuckle = false;
    this->bBlinkRopes = false;
    this->bWantToStunStandUp = false;
    this->bWantToUnlockTaunt = false;
}

