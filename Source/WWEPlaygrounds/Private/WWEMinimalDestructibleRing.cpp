#include "WWEMinimalDestructibleRing.h"
#include "Net/UnrealNetwork.h"

void AWWEMinimalDestructibleRing::Test4() {
}

void AWWEMinimalDestructibleRing::Test3() {
}

void AWWEMinimalDestructibleRing::Test2() {
}

void AWWEMinimalDestructibleRing::Test1_2() {
}

void AWWEMinimalDestructibleRing::Test1() {
}

void AWWEMinimalDestructibleRing::SwapPostWeapon(EWWETurnbuckleLocation Corner) {
}

void AWWEMinimalDestructibleRing::OnSetRopeHeightEvent_Implementation(EWWEDirection Wall, EWWERelaxedRopeHeight Height) {
}

void AWWEMinimalDestructibleRing::OnSetRingStageHeightEvent_Implementation(EWWEDirection Wall, EWWERingStageHeight Height) {
}

void AWWEMinimalDestructibleRing::OnSetAllRopeHeightsEvent_Implementation(EWWERelaxedRopeHeight Height) {
}

void AWWEMinimalDestructibleRing::OnRingDestroyed() {
}

void AWWEMinimalDestructibleRing::OnRightSkirtSequenceEnds() {
}

void AWWEMinimalDestructibleRing::OnRep_PostWeapons() {
}

void AWWEMinimalDestructibleRing::OnRep_DestructiblePosts() {
}

void AWWEMinimalDestructibleRing::OnRelaxCornerEvent_Implementation(EWWETurnbuckleLocation Corner, EWWERingPhysicsState PhysicsState) {
}

void AWWEMinimalDestructibleRing::OnRelaxAllCornersEvent_Implementation(EWWERingPhysicsState PhysicsState) {
}

void AWWEMinimalDestructibleRing::OnLeftSkirtSequenceEnds() {
}

void AWWEMinimalDestructibleRing::OnFrontSkirtSequenceEnds() {
}

void AWWEMinimalDestructibleRing::OnDetachRopesEvent_Implementation(EWWETurnbuckleLocation Corner) {
}

void AWWEMinimalDestructibleRing::OnDestructionColliderOverlapEnds(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void AWWEMinimalDestructibleRing::OnDestructionColliderOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AWWEMinimalDestructibleRing::OnBackSkirtSequenceEnds() {
}

void AWWEMinimalDestructibleRing::OnApronColliderOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AWWEMinimalDestructibleRing::OnApronColliderHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}

void AWWEMinimalDestructibleRing::MulticastSetAestheticsData_Implementation(UWWERingAestheticsData* Data) {
}

void AWWEMinimalDestructibleRing::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AWWEMinimalDestructibleRing, DestructiblePosts);
    DOREPLIFETIME(AWWEMinimalDestructibleRing, PostWeapons);
}

AWWEMinimalDestructibleRing::AWWEMinimalDestructibleRing() {
    this->bForceDisableRingDestruction = false;
    this->bDisablePadsOnDestruction = false;
    this->bDetachAffectedRopesOnDestruction = false;
    this->bPushCharactersOnDestruction = true;
    this->PushSpeed = 2.00f;
    this->NormalPhysicsData = NULL;
    this->DestructionPhysicsData = NULL;
    this->RelaxedPhysicsData = NULL;
    this->RingDestructionSound = NULL;
    this->PostDestructionSound = NULL;
    this->DestructiblePost = NULL;
    this->RingPostWeaponClass = NULL;
    this->TimeToSwapPostWeapon = 3.00f;
    this->bCustomRing = false;
    this->AestheticsData = NULL;
    this->Link = NULL;
    this->RingFloorComp = NULL;
    this->RingFloorInstanceDynamic = NULL;
    this->RopesComp = NULL;
    this->DestructionSequenceActor = NULL;
    this->PhysicalAnimationComponent = NULL;
    this->bAreRingAestheticsReady = false;
}

