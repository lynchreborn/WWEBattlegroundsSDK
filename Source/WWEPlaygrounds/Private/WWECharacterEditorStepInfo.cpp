#include "WWECharacterEditorStepInfo.h"

void UWWECharacterEditorStepInfo::OnNameCommitted(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod) {
}

void UWWECharacterEditorStepInfo::OnNameChanged(const FText& Text) {
}

void UWWECharacterEditorStepInfo::OnArenaNameRestrictionApplied(ESBTextRestrictionReason Restriction) {
}

UWWECharacterEditorStepInfo::UWWECharacterEditorStepInfo() {
    this->MainGrid = NULL;
    this->AliasGrid = NULL;
    this->EditableName = NULL;
    this->EditableNameBackground = NULL;
    this->TitleName = NULL;
    this->TitleAlias = NULL;
    this->BlackBackground = NULL;
    this->UpArrow = NULL;
    this->DownArrow = NULL;
    this->FinishEditorCustomButton = NULL;
    this->OnFailSoundCue = NULL;
    this->OnAcceptNameSoundCue = NULL;
    this->OnCancelSoundCue = NULL;
    this->bTextMaxLengthReached = false;
}

