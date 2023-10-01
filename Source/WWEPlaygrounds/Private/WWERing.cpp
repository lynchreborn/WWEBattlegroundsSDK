#include "WWERing.h"
#include "Components/SceneComponent.h"
#include "Net/UnrealNetwork.h"

void AWWERing::ResetPhysics() {
}

void AWWERing::OnTriggerExit(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void AWWERing::OnTriggerEnter(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AWWERing::OnRopeHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}

void AWWERing::OnMatchRestarted() {
}

void AWWERing::OnMatchFinished(const AWWECharacterCombat* WinnerCharacter) {
}

void AWWERing::MulticastReceiveExplosionInTurnbuckle_Implementation(const EWWETurnbuckleLocation& Location, bool bDetachRopes, bool bSpawnWeapon, EWWERingPhysicsState PhysicsState) {
}

void AWWERing::MulticastReceiveExplosion_Implementation(const FVector& Location, float Radius, bool bDetachRopes, bool bSpawnWeapon, EWWERingPhysicsState PhysicsState) {
}

void AWWERing::MulticastDamageRing_Implementation(float Damage) {
}

void AWWERing::EnableBody(const USkeletalMeshComponent* Mesh, const FName& BoneName, bool Enable) {
}

void AWWERing::DisableAndRestoreBody(const USkeletalMeshComponent* Mesh, const FName& BoneName, float Seconds) {
}

void AWWERing::CheckBodyPosition(const USkeletalMeshComponent* Mesh, const FName& BoneName, bool BreakOnBadPosition, float Seconds) {
}

void AWWERing::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AWWERing, Health);
    DOREPLIFETIME(AWWERing, State);
}

AWWERing::AWWERing() {
    this->RingRootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->FL_LeftApronPosition = CreateDefaultSubobject<USceneComponent>(TEXT("FL_LeftApronPosition"));
    this->FL_RightApronPosition = CreateDefaultSubobject<USceneComponent>(TEXT("FL_RightApronPosition"));
    this->FR_LeftApronPosition = CreateDefaultSubobject<USceneComponent>(TEXT("FR_LeftApronPosition"));
    this->FR_RightApronPosition = CreateDefaultSubobject<USceneComponent>(TEXT("FR_RightApronPosition"));
    this->BL_LeftApronPosition = CreateDefaultSubobject<USceneComponent>(TEXT("BL_LeftApronPosition"));
    this->BL_RightApronPosition = CreateDefaultSubobject<USceneComponent>(TEXT("BL_RightApronPosition"));
    this->BR_LeftApronPosition = CreateDefaultSubobject<USceneComponent>(TEXT("BR_LeftApronPosition"));
    this->BR_RightApronPosition = CreateDefaultSubobject<USceneComponent>(TEXT("BR_RightApronPosition"));
    this->LeftBackCornerEntry = CreateDefaultSubobject<USceneComponent>(TEXT("LeftBackCornerEntry"));
    this->BackRightCornerEntry = CreateDefaultSubobject<USceneComponent>(TEXT("BackRightCornerEntry"));
    this->RightFrontCornerEntry = CreateDefaultSubobject<USceneComponent>(TEXT("RightFrontCornerEntry"));
    this->FrontLeftCornerEntry = CreateDefaultSubobject<USceneComponent>(TEXT("FrontLeftCornerEntry"));
    this->StageComponent = NULL;
    this->LastPhysicsHandleID = 0;
    this->DynamicSocketNumber = 0;
    this->Health = 0.00f;
    this->MaxHealth = 0.00f;
    this->bEnabledRingDestruction = true;
    this->State = EWWERingState::Idle;
    this->RopesBlinkCount = 0;
    this->PostsBlinkCount = 0;
    this->bDebug = false;
}

