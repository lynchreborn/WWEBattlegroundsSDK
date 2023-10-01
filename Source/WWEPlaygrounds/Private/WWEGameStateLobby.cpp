#include "WWEGameStateLobby.h"

void AWWEGameStateLobby::MulticastSetPlayerSlotSkillTree_Implementation(const FString& SkillTree, int32 PlayerId, const FString& CharacterID) {
}

void AWWEGameStateLobby::MulticastSetGameplayInitialSettings_Implementation(const FWWEGameplayInitialSettings& GameplayInitialSettings) {
}

void AWWEGameStateLobby::MulticastSetGameplayBackendInitialSettings_Implementation(const FWWEGameplayBackendInitialSettings& GameplayBackendInitialSettings) {
}

void AWWEGameStateLobby::MulticastSendMatchInfoTeamForPlayerSlot_Implementation(ESBTeam Team, int32 PlayerSlotIndex) {
}

void AWWEGameStateLobby::MulticastSendGameSettings_Implementation(FWWESyncGameSettings RepGameSettings) {
}

void AWWEGameStateLobby::MulticastReplicateWWEEditableArenaConfig_Implementation(FPGEditableArenaConfigWithOwner _EditableArenaConfig) {
}

AWWEGameStateLobby::AWWEGameStateLobby() {
    this->bAllPlayerDataReady = false;
    this->bHasSyncGameSettings = false;
    this->bAreMatchPlayersValidated = false;
}

