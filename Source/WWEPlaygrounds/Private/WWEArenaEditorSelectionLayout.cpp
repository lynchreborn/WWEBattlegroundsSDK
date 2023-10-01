#include "WWEArenaEditorSelectionLayout.h"

UWWEArenaEditorSelectionLayout::UWWEArenaEditorSelectionLayout() {
    this->PreviousTabButtonIcon = NULL;
    this->NextTabButtonIcon = NULL;
    this->InnerPanel = NULL;
    this->CreatorBackground = NULL;
    this->EditorBackground = NULL;
    this->PreviousTabShownSoundCue = NULL;
    this->NextTabShownSoundCue = NULL;
    this->bInitTableWhenConstructed = true;
    this->bTabLoopEnable = false;
    this->bShowFirstTab = true;
    this->DebugTabIndex = -1;
    this->TitleTextBlock = NULL;
    this->SubtitleTextBlock = NULL;
    this->SubtitleSlot = NULL;
    this->CanvasPrevious = NULL;
    this->CanvasNext = NULL;
    this->TabCounter = NULL;
    this->CanvasTabCounter = NULL;
    this->CurrentTabIndex = -1;
    this->bTableInitialized = false;
}

