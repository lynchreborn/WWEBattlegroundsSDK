#include "WWEGameSettings.h"

FWWEGameplayInitialSettings UWWEGameSettings::GetGameplayInitialSettings() const {
    return FWWEGameplayInitialSettings{};
}

void UWWEGameSettings::FillRoyalRumbleCharacterParameters(const int32 MaxIndex, EWWEGender InGender) {
}

void UWWEGameSettings::FillCampaignCharacterParameters(TArray<FString> MatchWrestlers) {
}

UWWEGameSettings::UWWEGameSettings() {
    this->PlaygroundsList.AddDefaulted(1);
    this->AILevelOverride = NULL;
    this->bShowDebugHitInfo = false;
    this->bAllowSkipAllComics = false;
    this->bSkipTutorials = false;
}

