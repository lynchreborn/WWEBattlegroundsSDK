#include "WWECrocodilesEvent.h"
#include "Components/SkeletalMeshComponent.h"
#include "WWEDynamicMaterialComponent.h"

void AWWECrocodilesEvent::WaitIdleState(float TimeToWait) {
}

void AWWECrocodilesEvent::OnTriggerEnter(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AWWECrocodilesEvent::OnSequenceFinished() {
}

void AWWECrocodilesEvent::MulticastSetState_Implementation(EWWECrocodileEventState NewState) {
}

AWWECrocodilesEvent::AWWECrocodilesEvent() {
    this->LevelSequencePlayer = NULL;
    this->SequenceActor = NULL;
    this->State = EWWECrocodileEventState::Idle;
    this->InteractingCharacter = NULL;
    this->NearSphereComponent = NULL;
    this->JawBoxComponent = NULL;
    this->Mesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh"));
    this->NearAnimation = NULL;
    this->AirAnimation = NULL;
    this->TimeToIdleAirAttack = 0.00f;
    this->TimeToIdleNearAttack = 0.00f;
    this->AnimInstance = NULL;
    this->DynamicMaterialComponent = CreateDefaultSubobject<UWWEDynamicMaterialComponent>(TEXT("DynamicMaterialComponent"));
}

