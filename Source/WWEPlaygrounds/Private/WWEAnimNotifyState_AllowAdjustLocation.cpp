#include "WWEAnimNotifyState_AllowAdjustLocation.h"

UWWEAnimNotifyState_AllowAdjustLocation::UWWEAnimNotifyState_AllowAdjustLocation() {
    this->TranslationBoneAttachedActor = EWWEAttachedActorWithTranslationBone::TargetRival;
    this->bUseTranslationCurveForRotation = true;
    this->PreviousCollision = ECR_Ignore;
}

