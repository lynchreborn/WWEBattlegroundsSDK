#include "WWECoffinEvent.h"
#include "Components/SkeletalMeshComponent.h"
#include "WWEDynamicMaterialComponent.h"

void AWWECoffinEvent::WaitIdleState(float TimeToWait) {
}

void AWWECoffinEvent::OnTriggerEnter(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AWWECoffinEvent::OnSequenceFinished() {
}

void AWWECoffinEvent::MulticastSetState_Implementation(EWWECoffinState NewState) {
}

AWWECoffinEvent::AWWECoffinEvent() {
    this->LevelSequencePlayer = NULL;
    this->SequenceActor = NULL;
    this->State = EWWECoffinState::Idle;
    this->InteractingCharacter = NULL;
    this->CoffinBoxComponent = NULL;
    this->FlyToCoffinMaxHeight = 0.00f;
    this->CoffinMidsocketZOffset = 0.00f;
    this->FlightSpeed = 1.00f;
    this->Mesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh"));
    this->CoffinAnimation = NULL;
    this->TimeToIdle = 0.00f;
    this->AnimInstance = NULL;
    this->DynamicMaterialComponent = CreateDefaultSubobject<UWWEDynamicMaterialComponent>(TEXT("DynamicMaterialComponent"));
}

