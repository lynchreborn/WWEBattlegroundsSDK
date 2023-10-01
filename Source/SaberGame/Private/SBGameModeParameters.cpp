#include "SBGameModeParameters.h"

USBGameModeParameters::USBGameModeParameters() {
    this->GameModeClass = NULL;
    this->CharsPerTeam = 1;
    this->TeamsAmount = 2;
    this->MatchMode = ESBMatchMode::None;
}

