#include "PGCharacter.h"
#include "Net/UnrealNetwork.h"

void APGCharacter::OnRep_ExperienceEarned(int32 PrevExp) {
}

void APGCharacter::ClientTeleportTo_Implementation(const FVector& DestLocation, const FRotator& DestRotation) {
}

void APGCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(APGCharacter, ExperienceEarned);
}

APGCharacter::APGCharacter() {
    this->MainSkeletalTag = TEXT("Body");
    this->ExperienceEarned = 0;
    this->CharacterParamsClass = NULL;
    this->CharacterParams = NULL;
    this->bLoadCharacterSynchronously = false;
    this->bLoadingCharacter = false;
    this->CharacterInstanceLevel = 0;
}

