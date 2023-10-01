#include "WWECommentSettings.h"

UWWECommentSettings::UWWECommentSettings() {
    this->CommentType = EWWECommentType::Default;
    this->SubCommentType = EWWESubCommentType::Default;
    this->MapID = -1;
    this->MatchMode = ESBMatchMode::None;
    this->Character = NULL;
    this->Priority = 0;
    this->Weight = 50;
    this->bCanBeInterrupted = false;
    this->bCanInterrupt = false;
}

