#include "SBGameSettings.h"
#include "SBPlayerSlot.h"

int32 USBGameSettings::GetCharactersAmount() const {
    return 0;
}

USBGameSettings::USBGameSettings() {
    this->bShowDebugDraws = false;
    this->PlayerSlotClass = USBPlayerSlot::StaticClass();
    this->ConnectedGamepads = 1;
    this->CharsPerTeam = 1;
    this->TeamsAmount = 1;
    this->CompetitionMode = ESBCompetitionMode::None;
    this->MatchMode = ESBMatchMode::None;
    this->ArenaMapId = -1;
    this->bLocalDedicatedOnlyEnabled = false;
    this->CharactersPerTeam = 2;
    this->AmountOfTeams = 2;
    this->HumanPlayersAmount = 1;
    this->bNetDedicated = false;
    this->HumansPerRemoteMachine = 1;
    this->WindowIndex = 0;
    this->WindowsAmount = 1;
    this->bLanMatch = false;
    this->RemoteMachines = 0;
}

