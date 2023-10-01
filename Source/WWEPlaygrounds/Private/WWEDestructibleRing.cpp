#include "WWEDestructibleRing.h"

void AWWEDestructibleRing::OnRingDestroyed() {
}

void AWWEDestructibleRing::OnDestructionColliderOverlapEnds(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void AWWEDestructibleRing::OnDestructionColliderOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

AWWEDestructibleRing::AWWEDestructibleRing() {
    this->bRelaxLeftFrontCorner = false;
    this->bRelaxLeftBackCorner = false;
    this->bRelaxRightFrontCorner = false;
    this->bRelaxRightBackCorner = false;
    this->bDetachLeftFrontRopes = false;
    this->bDetachLeftBackRopes = false;
    this->bDetachRightFrontRopes = false;
    this->bDetachRightBackRopes = false;
    this->LeftRopeHeight = EWWERelaxedRopeHeight::Normal;
    this->RightRopeHeight = EWWERelaxedRopeHeight::Normal;
    this->FrontRopeHeight = EWWERelaxedRopeHeight::Normal;
    this->BackRopeHeight = EWWERelaxedRopeHeight::Normal;
    this->bDisablePadsOnDestruction = false;
    this->bDetachAffectedRopesOnDestruction = false;
    this->bPushCharactersOnDestruction = true;
    this->PushSpeed = 2.00f;
    this->DestructionPhysicsData = NULL;
    this->RelaxedPhysicsData = NULL;
    this->RingFloorComp = NULL;
    this->CurrentGoodPosts = 4;
    this->LevelSequencePlayerManager = NULL;
}

