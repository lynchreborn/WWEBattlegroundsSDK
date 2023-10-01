#include "SBPlayerState.h"
#include "Net/UnrealNetwork.h"

void ASBPlayerState::OnRep_Stats() {
}

void ASBPlayerState::OnRep_Platform() {
}

void ASBPlayerState::OnRep_InternalUserId() {
}

void ASBPlayerState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASBPlayerState, InternalUserId);
    DOREPLIFETIME(ASBPlayerState, Platform);
    DOREPLIFETIME(ASBPlayerState, Stats);
}

ASBPlayerState::ASBPlayerState() {
    this->MaxLogicCompensationTime = 200.00f;
    this->MinMatchPing = 340282346638528859811704183484516925440.00f;
    this->MaxMatchPing = 0.00f;
    this->MatchPingAvg = 0.00f;
    this->MatchPingMeasurementsCount = 0;
    this->Platform = ESBPlatformType::Unknown;
    this->bCrossplayPlayerNameNeedsSanitize = false;
}

