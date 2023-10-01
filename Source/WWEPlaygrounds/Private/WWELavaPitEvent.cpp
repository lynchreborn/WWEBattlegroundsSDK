#include "WWELavaPitEvent.h"
#include "Components/SceneComponent.h"

void AWWELavaPitEvent::WaitForMatchStart() {
}

void AWWELavaPitEvent::StopLavaPitEvent() {
}

void AWWELavaPitEvent::StartTrainSequence() {
}

void AWWELavaPitEvent::StartLavaPitEvent() {
}

void AWWELavaPitEvent::OnTriggerExit(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void AWWELavaPitEvent::OnTriggerEnter(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AWWELavaPitEvent::OnSequenceFinished() {
}

void AWWELavaPitEvent::MulticastStopTrainSequence_Implementation() {
}

void AWWELavaPitEvent::MulticastOnCharacterExitLava_Implementation(AWWECharacterCombat* Character) {
}

void AWWELavaPitEvent::MulticastOnCharacterEnterLava_Implementation(AWWECharacterCombat* Character) {
}

void AWWELavaPitEvent::MulticastDisableLavaPits_Implementation() {
}

void AWWELavaPitEvent::MulticastActivateTrainSequence_Implementation() {
}

void AWWELavaPitEvent::MulticastActivateLavaPits_Implementation(const TArray<int32>& LavaPitsIndexes) {
}

AWWELavaPitEvent::AWWELavaPitEvent() {
    this->LavaRootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->CooldownMin = 0.00f;
    this->CooldownMax = 0.00f;
    this->LavaPitTimeMin = 0.00f;
    this->LavaPitTimeMax = 0.00f;
    this->DelayActivateLavaPits = 0.00f;
    this->MinLavaPitsActives = 1;
    this->MaxLavaPitsActives = 0;
    this->TotalOfLavaPits = 0;
    this->LavaDamagePerSecond = 0.00f;
    this->CachedTrainSequence = NULL;
    this->TrainLevelSequencePlayer = NULL;
    this->TrainSequenceActor = NULL;
    this->AudioComponentLavaPit = NULL;
}

