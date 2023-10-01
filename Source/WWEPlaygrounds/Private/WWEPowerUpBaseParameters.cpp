#include "WWEPowerUpBaseParameters.h"

UWWEPowerUpBaseParameters::UWWEPowerUpBaseParameters() {
    this->bIgnoreSettingsAndAttachToOverlay3D = false;
    this->SoundLibrary = NULL;
    this->StartFXSound = NULL;
    this->EndFXSound = NULL;
    this->ImpactFXSound = NULL;
    this->ActionFXSound = NULL;
    this->ReceiveImpactFXSound = NULL;
    this->FxFadeOut = 0.00f;
    this->FadeVolumeLevel = 0.00f;
    this->DeactiveIconTexture = NULL;
    this->OffIconTexture = NULL;
    this->HUDActiveIconTexture = NULL;
    this->CommonActiveIconTexture = NULL;
    this->bBronzeWasModified = false;
    this->bSilverWasModified = false;
    this->bGoldWasModified = false;
    this->PowerUpWeaponDependency = EWWEPowerUpWeaponDependency::Incompatible;
    this->PowerUpAnimType = EWWEPowerUpAnimType::Default;
    this->CachedPowerUpItemWidgetImageUnselected = NULL;
    this->CachedPowerUpItemWidgetImageSelected = NULL;
    this->bHasMaterials = false;
    this->bModifySkin = false;
    this->bModifyHair = false;
    this->bModifyCloth = false;
    this->bUseFresnel = false;
    this->bShowLevelDescription = false;
    this->bShowDurationDescription = false;
    this->bShowDistanceDescription = false;
    this->ValueSign = EWWEPowerUpValueSign::PlusSign;
}

