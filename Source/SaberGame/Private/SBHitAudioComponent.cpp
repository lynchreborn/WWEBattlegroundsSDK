#include "SBHitAudioComponent.h"

void USBHitAudioComponent::OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}

USBHitAudioComponent::USBHitAudioComponent() {
    this->bRootComponent = true;
    this->bFollow = false;
    this->VolumeMultiplier = 1.00f;
    this->PitchMultiplier = 1.00f;
    this->bLibraryMode = false;
    this->bUseDefaultOnEmptySurface = true;
    this->DefaultSound = NULL;
    this->bCheckAllowedPhysicalSurfaces = false;
    this->bCheckNormalImpulse = true;
    this->MinNormalImpulse = 15000.00f;
    this->bCheckVelocity = false;
    this->MinVelocity = 30.00f;
    this->bCheckSecondsBetweenSounds = true;
    this->MinSecondsBetweenSounds = 0.10f;
    this->MinVolumeOnZeroForce = 0.00f;
    this->MaxVolumeOnMaxForce = 1.00f;
    this->bCalcVolumeWithVelocity = false;
    this->ThresholdImpulseForMaxVolume = 100000.00f;
    this->ThresholdVelocityForMaxVolume = 300.00f;
    this->Collider = NULL;
    this->bDoneMinSecondsBetweenSounds = true;
}

