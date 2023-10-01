#include "SBGameMode.h"

ASBGameMode::ASBGameMode() {
    this->bCheckOptions = false;
    this->bKickingConnectedPlayers = false;
    this->bAbortMatchOnLogout = false;
    this->bDestroyPawnOnLogout = false;
    this->bPendingAbortMatch = false;
}

