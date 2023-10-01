#include "SBCharacter.h"
#include "Net/UnrealNetwork.h"

void ASBCharacter::SetTeam(ESBTeam NewTeam) {
}

void ASBCharacter::OnRep_Stats() {
}

ESBTeam ASBCharacter::GetTeam() const {
    return ESBTeam::Team01;
}

void ASBCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASBCharacter, Stats);
}

ASBCharacter::ASBCharacter() {
    this->Team = ESBTeam::None;
}

