#include "PGAnimNode_RandomPlayer.h"

FPGAnimNode_RandomPlayer::FPGAnimNode_RandomPlayer() {
    this->BlendMode = EPGRandomPlayerBlendMode::CurrentEndWithNextStart;
    this->MinStartPosition = 0.00f;
    this->MaxStartPosition = 0.00f;
    this->OverridePlayRate = 0.00f;
}

