#include "SBAnimInstanceGameplay.h"

void USBAnimInstanceGameplay::SetPhysicalAnimationForFullBody(bool bEnable, const FName& AnimationProfileName, const FName& ConstraintProfileName, bool bShouldCapsuleFollowMesh, float BlendOutTime) {
}

void USBAnimInstanceGameplay::SetPhysicalAnimationBelowBone(bool bEnable, const FName& BoneName, bool bIncludeSelf, const FName& AnimationProfileName, const FName& ConstraintProfileName, bool bShouldCapsuleFollowMesh) {
}

void USBAnimInstanceGameplay::AttachMeshToCapsule() {
}

USBAnimInstanceGameplay::USBAnimInstanceGameplay() {
    this->OwningCharacter = NULL;
    this->RotationOffsetInterpSpeed = 15.00f;
    this->ZOffsetInterpSpeed = 15.00f;
    this->CollisionChannelFootIK = ECC_Visibility;
    this->bPhysicalAnimationEnabled = false;
    this->PhysicalAnimationComponent = NULL;
    this->PhysicsSnapshotName = TEXT("PhysicsSnapshot");
    this->BlendOutOfPhysicsAlpha = 1.00f;
    this->BlendOutOfPhysicsTime = 0.00f;
    this->bIsCapsuleFollowingMesh = false;
}

