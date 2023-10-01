#include "WWEArenaEditorNameSelection.h"

void UWWEArenaEditorNameSelection::UpdateFocus() {
}

void UWWEArenaEditorNameSelection::OnArenaNameRestrictionApplied(ESBTextRestrictionReason Restriction) {
}

void UWWEArenaEditorNameSelection::OnArenaNameCommitted(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod) {
}

void UWWEArenaEditorNameSelection::OnArenaNameChanged(const FText& Text) {
}

UWWEArenaEditorNameSelection::UWWEArenaEditorNameSelection() {
    this->EditableArenaName = NULL;
    this->EditableArenaNameCanvas = NULL;
    this->SelectArenaNameCanvas = NULL;
    this->ArenaNameText = NULL;
    this->NumCharactersText = NULL;
    this->ArenaEditorScreen = NULL;
    this->OnFailSoundCue = NULL;
    this->OnAcceptSoundCue = NULL;
    this->OnCancelSoundCue = NULL;
    this->bNameEmpty = false;
    this->bIsOnProfanityFilterCheck = false;
    this->bTextMaxLengthReached = false;
}

