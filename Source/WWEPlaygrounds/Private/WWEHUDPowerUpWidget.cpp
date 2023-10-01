#include "WWEHUDPowerUpWidget.h"

void UWWEHUDPowerUpWidget::ShowAddCharismaValue(int32 ValueToAdd, bool bKeyAction, bool bInactivity, bool bSuggestedAction) {
}

void UWWEHUDPowerUpWidget::SetState(EWWEPowerUpWidgetState NextState) {
}

void UWWEHUDPowerUpWidget::SetCharismaLockFlickerFast() {
}

void UWWEHUDPowerUpWidget::SetCharismaLockFlicker() {
}


void UWWEHUDPowerUpWidget::OnPlayerNicknameSanitized(ASBPlayerState* InPlayerState) {
}

EWWEPowerUpWidgetState UWWEHUDPowerUpWidget::GetState() {
    return EWWEPowerUpWidgetState::WaitingState;
}

UWWEHUDPowerUpWidget::UWWEHUDPowerUpWidget() {
    this->DebugHealthRecovery = NULL;
    this->DebugStaminaRecovery = NULL;
    this->DebugPowerUpPointsRecovery = NULL;
    this->DebugCurrentHealth = NULL;
    this->DebugCurrentStamina = NULL;
    this->TargetRivalChange = NULL;
    this->PowerUpBarWidget = NULL;
    this->CharacterPortraitWidget = NULL;
    this->PowerUpIconContainer = NULL;
    this->CrossplayPlatformIcon = NULL;
    this->CrownIcon = NULL;
    this->BackgroundBar = NULL;
    this->BorderBar = NULL;
    this->BackGroundPortrait = NULL;
    this->PortraitBorder = NULL;
    this->PortraitBorderAlone = NULL;
    this->ShadowContainer = NULL;
    this->FrameBarContainer = NULL;
    this->CharacterName = NULL;
    this->UserNickname = NULL;
    this->WaitingPlayerText = NULL;
    this->UserNameAlone = NULL;
    this->TagTeamCountdown = NULL;
    this->ActionsTooltip = NULL;
    this->CharismaBar = NULL;
    this->TagTeamHandIcon = NULL;
    this->CharismaGainPosition_A = NULL;
    this->CharismaGainEnd = NULL;
    this->CharismaGainRay = NULL;
    this->PrestigeSlot = NULL;
    this->FullPortraitCanvas = NULL;
    this->RivalPortrait = NULL;
    this->CharismaPositiveMaterial = NULL;
    this->CharismaNegativeMaterial = NULL;
    this->CharismaPositiveDynamicMaterial = NULL;
    this->CharismaNegativeDynamicMaterial = NULL;
    this->CharismaPositiveEndMaterial = NULL;
    this->CharismaNegativeEndMaterial = NULL;
    this->CharismaPositiveEndDynamicMaterial = NULL;
    this->CharismaNegativeEndDynamicMaterial = NULL;
    this->DefaultPortrait = NULL;
    this->BlueBackground = NULL;
    this->BlueBackgroundBar = NULL;
    this->RedBackground = NULL;
    this->RedBackgroundBar = NULL;
    this->BackgroundHUDShadow = NULL;
    this->CurrentActive = -1;
    this->MaxCharacterUserName = 0;
    this->HideCountdownDelay = 0.50f;
    this->PercentageBarSpeed = 0.00f;
    this->PercentageBarTextSpeed = 0.00f;
    this->CurrentContainerState = EWWEPowerUpWidgetState::WaitingState;
    this->OwnerPlayerId = 0;
    this->OwnerCharacter = NULL;
    this->FillCrowdBarAchievementChecked = false;
    this->bIsAddingCharismaFromKeyAction = false;
    this->StartGainCharismaAnimationTime = 0.00f;
    this->EndGainCharismaAnimationTime = 0.00f;
    this->bPlayingGainCharismaAnimation = false;
    this->bPlayingGainWithMaxCharisma = false;
    this->CurrentTargetRival = NULL;
}

