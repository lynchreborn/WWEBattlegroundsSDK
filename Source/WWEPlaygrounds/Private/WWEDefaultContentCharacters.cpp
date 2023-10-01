#include "WWEDefaultContentCharacters.h"

UWWECharacterParameters* UWWEDefaultContentCharacters::GetPlayerParamsByIndex(int32 _PlayerIndex, bool FromInitialCharacters) const {
    return NULL;
}

UWWECharacterParameters* UWWEDefaultContentCharacters::GetPlayerParamsByID(const FString& _PlayerID) const {
    return NULL;
}

FWWECharacterTextureMaps UWWEDefaultContentCharacters::GetCharacterTextureMapsByGenderAndType(EWWEGender Gender, EPGCharacterBody Body) const {
    return FWWECharacterTextureMaps{};
}

TSoftObjectPtr<USkeletalMesh> UWWEDefaultContentCharacters::GetCharacterMeshByGenderAndType(EWWEGender Gender, EPGCharacterBody Body) const {
    return NULL;
}

int32 UWWEDefaultContentCharacters::GetCharacterIndexByID(const FString& CharacterID) const {
    return 0;
}

UWWEDefaultContentCharacters::UWWEDefaultContentCharacters() {
    this->HeightOfShortestFighter = 154.00f;
    this->HeightOfTallestFighter = 234.00f;
    this->MinBodyScale = 1.00f;
    this->MaxBodyScale = 1.20f;
    this->MinOffsetKneesOnTurnbuckle = 185.00f;
    this->MaxOffsetKneesOnTurnbuckle = 220.00f;
    this->MinHeadScale = 1.00f;
    this->MaxHeadScale = 1.20f;
    this->MinScaledPlayRate = 0.75f;
    this->MaxScaledPlayRate = 1.00f;
    this->LaunchedCharacterVelocity = 600.00f;
    this->LaunchedCharacterVelocityNear = 300.00f;
    this->CrowdSupportTotalPoints = 0.00f;
    this->InvisibleMaterialsForPhysics = NULL;
    this->FinalSkinMaterial[0] = NULL;
    this->FinalSkinMaterial[1] = NULL;
    this->CharacterEditorRTSize = 4096;
    this->GameplayRTSize = 2048;
    this->StatsByFightingStyle[0] = NULL;
    this->StatsByFightingStyle[1] = NULL;
    this->StatsByFightingStyle[2] = NULL;
    this->StatsByFightingStyle[3] = NULL;
    this->StatsByFightingStyle[4] = NULL;
    this->CharacterParamsByFightingStyle[0] = NULL;
    this->CharacterParamsByFightingStyle[1] = NULL;
    this->CharacterParamsByFightingStyle[2] = NULL;
    this->CharacterParamsByFightingStyle[3] = NULL;
    this->CharacterParamsByFightingStyle[4] = NULL;
    this->SpeedRatiosByFightingStyle[0] = 0.00f;
    this->SpeedRatiosByFightingStyle[1] = 0.00f;
    this->SpeedRatiosByFightingStyle[2] = 0.00f;
    this->SpeedRatiosByFightingStyle[3] = 0.00f;
    this->SpeedRatiosByFightingStyle[4] = 0.00f;
    this->MaxNumberOfOutfitConfigurations = 3;
}

