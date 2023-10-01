#include "WWEHUDPowerUpIconWidget.h"

UWWEHUDPowerUpIconWidget::UWWEHUDPowerUpIconWidget() {
    this->IconImage = NULL;
    this->Glow = NULL;
    this->PlatformIcon = NULL;
    this->RedGlow = NULL;
    this->ConfiguredDeactiveIconTexture = NULL;
    this->ConfiguredOffIconTexture = NULL;
    this->ConfiguredOnIconTexture = NULL;
    this->PreviewState = EWWEPowerIconStates::None;
    this->CurrentState = EWWEPowerIconStates::None;
    this->OriginEffectMode = 0.00f;
    this->InUseIdleAnim = NULL;
}

