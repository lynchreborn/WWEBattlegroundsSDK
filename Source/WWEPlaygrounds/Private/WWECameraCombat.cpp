#include "WWECameraCombat.h"
#include "Camera/CameraComponent.h"
#include "SBSpringArmComponent.h"

void AWWECameraCombat::MulticastSetCameraAngle_Implementation(float NewAngle, bool Instantly) {
}

AWWECameraCombat::AWWECameraCombat() {
    this->PitchOffset = 0.00f;
    this->FOVMultiplier = 1.00f;
    this->FOVBlendFactor = 1.00f;
    this->DistanceOffset = 0.00f;
    this->DistanceMultiplier = 1.00f;
    this->OverrideTargetSkelMesh = NULL;
    this->OverrideTargetAlpha = 0.00f;
    this->AngleOffset = 0.00f;
    this->LookAtRingCenter = 0;
    this->LookAtRingCenterAlpha = 1.00f;
    this->bIgnoreLocationBounds = false;
    this->SpringArmComponent = CreateDefaultSubobject<USBSpringArmComponent>(TEXT("SpringArmComponent"));
    this->CameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("CameraComponent"));
    this->BaseCameraPitchAngle = 20.00f;
    this->TurnbuckleMinigamePitchAngle = 40.00f;
    this->CameraPitchThreshold = 200.00f;
    this->CameraPitchRatioMultiplier = 1.00f;
    this->MaxCameraPitchRatio = 4.00f;
    this->TargetThreshold = 0.00f;
    this->OffsetThreshold = 0.00f;
    this->CameraDistanceRatio = 1.00f;
    this->ExtraCameraDistance = 0.00f;
    this->BlendFinalLocationFactor = 1.00f;
    this->BlendFinalRotationFactor = 1.00f;
    this->CameraNearClippingPlane = 0.00f;
    this->DistanceOutOfBoundsToChangeAngle = 0.00f;
    this->bInstantOutOfBoundsAngleChange = false;
    this->LevelEventsMaxDistance = 1000.00f;
    this->TurnbuckleMinigameFOVMultiplier = 3.00f;
    this->PinPitchOffset = 12.00f;
    this->PinFOVMultiplier = 1.20f;
    this->PinDistanceMultiplier = 0.60f;
    this->PinZoomEffectStrength = 0.20f;
    this->PinZoomEffectSpeed = 6.00f;
    this->PinRotationSpeed = 15.00f;
    this->BaseFOV = 0.00f;
    this->bPinnedLastFrame = false;
    this->PinstartTimestamp = 0.00f;
    this->BlendFactorInterpSpeed = 0.00f;
    this->CurrentCamModifier = NULL;
}

