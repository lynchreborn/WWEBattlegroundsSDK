#include "WWECharacterEditorStep.h"

UWWECharacterEditorStep::UWWECharacterEditorStep() {
    this->TypesLocationElementClass = NULL;
    this->CharacterEditor = NULL;
    this->CachedIconImageUnselected = NULL;
    this->CachedIconImageSelected = NULL;
    this->CachedIconImageCompleted = NULL;
    this->TabTable = NULL;
    this->SwitchControllerType = ESBControllerType::None;
    this->TabIndex = -1;
    this->bTabShowing = false;
    this->bAvailibleModifyingCharacter = false;
}

