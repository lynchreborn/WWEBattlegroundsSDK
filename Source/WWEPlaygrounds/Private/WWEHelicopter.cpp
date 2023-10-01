#include "WWEHelicopter.h"
#include "Components/StaticMeshComponent.h"

AWWEHelicopter::AWWEHelicopter() {
    this->HelicopterBodyMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("HelicopterBodyMesh"));
    this->RotorMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("RotorMesh"));
    this->TailRotorMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("TailRotorMesh"));
    this->InteractableSkateMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("InteractableSkateMesh"));
    this->RotorSpeed = 0.00f;
    this->TailRotorSpeed = 0.00f;
    this->AproachingToCrosshairSpeed = 1.00f;
    this->MaxTiltAngle = 20.00f;
    this->TiltSpeed = 1.00f;
    this->CharacterGrabSocket = NULL;
    this->RotorTargetAngle = 0.00f;
    this->TailRotorTargetAngle = 0.00f;
    this->GrabbedCharacter = NULL;
    this->NextXPos = 0.00f;
    this->NextYPos = 0.00f;
    this->PosXWithOffset = 0.00f;
    this->PosYWithOffset = 0.00f;
}

