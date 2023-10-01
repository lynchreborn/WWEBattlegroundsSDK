#include "PGMatchmakingPlayerSlot.h"


UPGMatchmakingPlayerSlot::UPGMatchmakingPlayerSlot() {
    this->GamepadIndex = -1;
    this->CheckStatus = EPGLocalPlayerSlotStatus::Initial;
    this->bFriendJoined = false;
    this->bFriendDataReceived = false;
    this->PlayerType = EPGMatchmakingPlayerType::Invalid;
    this->PlatformButton = NULL;
    this->CPUPlayerSelectedTexture = NULL;
    this->CPUPlayerUnselectedTexture = NULL;
    this->LocalPlayerSelectedTexture = NULL;
    this->LocalPlayerUnselectedTexture = NULL;
    this->OnlineFriendSelectedTexture = NULL;
    this->OnlineFriendUnselectedTexture = NULL;
    this->IconSelected = NULL;
    this->IconUnselected = NULL;
    this->PlayerTypeText = NULL;
    this->PlayerNumText = NULL;
    this->StatusLabel = NULL;
}

