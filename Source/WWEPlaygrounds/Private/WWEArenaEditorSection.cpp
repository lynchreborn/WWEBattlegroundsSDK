#include "WWEArenaEditorSection.h"

UWWEArenaEditorSection::UWWEArenaEditorSection() {
    this->TypesLocationElementClass = NULL;
    this->ArenaEditor = NULL;
    this->CachedIconImageUnselected = NULL;
    this->CachedIconImageSelected = NULL;
    this->ArenaSection = EWWEArenaSectionType::NONE;
    this->bSelectHeight = false;
    this->bSelectSubSection = false;
    this->TabTable = NULL;
    this->SwitchControllerType = ESBControllerType::None;
    this->TabIndex = -1;
    this->bTabShowing = false;
}

