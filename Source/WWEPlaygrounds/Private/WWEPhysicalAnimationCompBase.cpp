#include "WWEPhysicalAnimationCompBase.h"

void UWWEPhysicalAnimationCompBase::SetStrengthMultiplyer(float InStrengthMultiplyer) {
}

void UWWEPhysicalAnimationCompBase::SetSkeletalMeshComponent(USkeletalMeshComponent* InSkeletalMeshComponent) {
}

FTransform UWWEPhysicalAnimationCompBase::GetBodyTargetTransform(FName BodyName) const {
    return FTransform{};
}

void UWWEPhysicalAnimationCompBase::ApplyPhysicalAnimationSettingsBelow(FName BodyName, const FPhysicalAnimationData& PhysicalAnimationData, bool bIncludeSelf) {
}

void UWWEPhysicalAnimationCompBase::ApplyPhysicalAnimationSettings(FName BodyName, const FPhysicalAnimationData& PhysicalAnimationData) {
}

void UWWEPhysicalAnimationCompBase::ApplyPhysicalAnimationProfileBelow(FName BodyName, FName ProfileName, bool bIncludeSelf, bool bClearNotFound) {
}

UWWEPhysicalAnimationCompBase::UWWEPhysicalAnimationCompBase() {
    this->StrengthMultiplyer = 1.00f;
    this->SkeletalMeshComponent = NULL;
}

