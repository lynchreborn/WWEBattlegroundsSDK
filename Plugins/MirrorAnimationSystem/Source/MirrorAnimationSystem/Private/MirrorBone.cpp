#include "MirrorBone.h"

FMirrorBone::FMirrorBone() {
    this->MirrorAxis = EAxis::None;
    this->FlipAxis = EAxis::None;
    this->IsTwinBone = false;
    this->MirrorTranslation = false;
}

