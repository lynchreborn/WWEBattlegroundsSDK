#include "WWESweepComponent.h"

void UWWESweepComponent::OnCapsuleEndOverlapEvent(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void UWWESweepComponent::OnCapsuleBeginOverlapEvent(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

UWWESweepComponent::UWWESweepComponent() {
    this->bEnableSweep = true;
    this->bSweepOnAnyMontage = false;
    this->bSweepOnAnyAction = false;
    this->bAvoidCrossOnAnyAction = false;
    this->bWallSweepWithoutAction = false;
    this->ForceMultiplier = 280.00f;
    this->OffsetFromWall = 0.00f;
    this->MaxMove = 10.00f;
    this->AllowedSweepTypes.AddDefaulted(8);
    this->bUseDeltaTime = true;
    this->bShowDebug = false;
    this->SweepCount = 0;
    this->AvoidSweepCountChars = 0;
    this->AvoidSweepCountWalls = 0;
    this->bSweepLastTick = false;
    this->LastSweepDistance = 0.00f;
    this->bOnRingLastTick = false;
}

