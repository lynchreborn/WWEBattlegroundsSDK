#include "WWECharacterEditorGameStats.h"

void UWWECharacterEditorGameStats::SetCharacterParameters(UWWECharacterParameters* Val) {
}

UWWECharacterParameters* UWWECharacterEditorGameStats::GetCharacterParameters() const {
    return NULL;
}

UWWECharacterEditorGameStats::UWWECharacterEditorGameStats() {
    this->CharacterParameters = NULL;
    this->CharacterNameBlock = NULL;
    this->StrenghtSlot = NULL;
    this->CharismaSlot = NULL;
    this->ResistanceSlot = NULL;
    this->AgilitySlot = NULL;
}

