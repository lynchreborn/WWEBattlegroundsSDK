#include "WWEAnimViewerEntry.h"

UWWEAnimViewerEntry::UWWEAnimViewerEntry() : UUserWidget(FObjectInitializer::Get()) {
    this->Category = 0;
    this->AnimIndex = 0;
    this->bNavDisabled = false;
    this->AnimName = NULL;
}

