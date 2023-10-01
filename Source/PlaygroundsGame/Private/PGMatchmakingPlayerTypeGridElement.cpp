#include "PGMatchmakingPlayerTypeGridElement.h"


UPGMatchmakingPlayerTypeGridElement::UPGMatchmakingPlayerTypeGridElement() {
    this->ElementTexture = NULL;
    this->PlayerType = EPGMatchmakingPlayerType::Invalid;
    this->CPUPlayerSelectedTexture = NULL;
    this->CPUPlayerUnselectedTexture = NULL;
    this->LocalPlayerSelectedTexture = NULL;
    this->LocalPlayerUnselectedTexture = NULL;
    this->OnlineFriendSelectedTexture = NULL;
    this->OnlineFriendUnselectedTexture = NULL;
    this->IconSelected = NULL;
    this->IconUnselected = NULL;
    this->ControllerIcon = NULL;
    this->PlayerTypeLeftText = NULL;
    this->PlayerTypeRightText = NULL;
}

