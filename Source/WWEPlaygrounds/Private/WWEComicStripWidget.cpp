#include "WWEComicStripWidget.h"

UWWEComicStripWidget::UWWEComicStripWidget() {
    this->ReadNumberOrder = -1;
    this->ZoomPercentage = 0.00f;
    this->LerpSpeed = 0.00f;
    this->SizeDivisor = 1.00f;
    this->ZoomToApply = 0.00f;
    this->LerpSpeedToApply = 0.00f;
    this->ImageToUse = NULL;
    this->StripSlot = NULL;
    this->ComicIcon = NULL;
    this->bExistAnimation = false;
    this->bAllowKeepPlaying = false;
    this->StripAnimation = NULL;
    this->CurrentStripTime = 0.00f;
    this->bBeginToCountTime = false;
    this->bCanPlayAudio = false;
    this->StripLoopSound = NULL;
    this->StripOneShotSound = NULL;
    this->CurrentOneShotFadeOutDuration = 0.00f;
    this->CurrentOneShotSoundFadeOutVolume = 0.00f;
    this->CurrentLoopSoundFadeOutDuration = 0.00f;
    this->CurrentLoopSoundFadeOutVolume = 0.00f;
    this->CurrentDefaultContentUI = NULL;
}

