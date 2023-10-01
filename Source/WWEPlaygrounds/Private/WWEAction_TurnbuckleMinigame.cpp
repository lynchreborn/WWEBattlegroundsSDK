#include "WWEAction_TurnbuckleMinigame.h"

void UWWEAction_TurnbuckleMinigame::EndInputActionByTime() {
}

UWWEAction_TurnbuckleMinigame::UWWEAction_TurnbuckleMinigame() {
    this->MaxHits = 10;
    this->TimeToPushOnTurnbuckleMinigame = 0.50f;
    this->SizeType = 0;
    this->InternalMaxHits = 0;
    this->bReceivedInput = false;
    this->SoundIndex = 0;
    this->bCheatEnabled = false;
}

