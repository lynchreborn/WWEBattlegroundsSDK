#include "WWEProgressionManager.h"

void UWWEProgressionManager::UnlockReward(FWWEProgressionReward RewardToUnlock, bool bUpdateFeaturedStat, bool bHasToSave, bool bCheckAchievements, EWWESaveType SaveType) {
}

void UWWEProgressionManager::ToggleDebugPrint() {
}

void UWWEProgressionManager::SetParamsForScreenPopUp(FWWEProgressionReward RewardUnlocked, FText ContextText, bool bLongContextText) {
}

void UWWEProgressionManager::ResetAllPointsPools() {
}

void UWWEProgressionManager::PushRewardScreenPopUp(FWWEProgressionReward RewardUnlocked, FText ContextText, bool bLongContextText, UObject* CallbackTarget, const FName& CallbackName) {
}

void UWWEProgressionManager::OnlyPushScreenPopUp(UObject* CallbackTarget, const FName& CallbackName) {
}

bool UWWEProgressionManager::IsRewardEmpty(FWWEProgressionReward RewardToUnlock) {
    return false;
}

void UWWEProgressionManager::Init() {
}

int32 UWWEProgressionManager::GetUserNumberOfLevels() {
    return 0;
}

int32 UWWEProgressionManager::GetUserMaxExp() {
    return 0;
}

int32 UWWEProgressionManager::GetUserLevelExpFor(int32 Exp) {
    return 0;
}

int32 UWWEProgressionManager::GetUserExpUntilThisLevel(int32 Exp) {
    return 0;
}

int32 UWWEProgressionManager::GetUserExpForNextLevel(int32 Exp) {
    return 0;
}

int32 UWWEProgressionManager::GetTotalPointsPool(EWWEPointsPoolType PoolType, EWWEPointsPoolCategory PoolCategory) {
    return 0;
}

void UWWEProgressionManager::AddPointsFromResult(bool bWin, AWWECharacterCombat* CharacterCombat) {
}

void UWWEProgressionManager::AddPointsFromConditionFromCharacter(EWWEUserProgressionCondition Condition, AWWECharacterCombat* Character) {
}

UWWEProgressionManager::UWWEProgressionManager() {
    this->VisualUserXP = 0;
    this->UserLevel = 1;
    this->bIsDebugPrint = false;
    this->DefaultContentProgression = NULL;
}

