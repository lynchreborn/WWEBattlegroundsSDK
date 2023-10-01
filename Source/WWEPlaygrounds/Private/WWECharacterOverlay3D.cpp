#include "WWECharacterOverlay3D.h"
#include "Components/SceneComponent.h"
#include "Components/WidgetComponent.h"


void AWWECharacterOverlay3D::OnControllerConnectionChanged(bool bConnected, int32 UserID, int32 GamepadIndex) {
}

AWWECharacterOverlay3D::AWWECharacterOverlay3D() {
    this->PlayerIndex = 0;
    this->PlayerId = TEXT("P1");
    this->Health = 1.00f;
    this->Stamina = 1.00f;
    this->Heat = 0.00f;
    this->IconIndex = 0;
    this->DefaultBlinkTime = 0.00f;
    this->OverlayMesh = NULL;
    this->ArrowMesh = NULL;
    this->OverlayMaterial = NULL;
    this->ColorBarMaterial = NULL;
    this->FullHeatSoundCue = NULL;
    this->FullHeatEffectInstance = NULL;
    this->ParentCharacter = NULL;
    this->RootSceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->PlayerIndicatorTextComponent = CreateDefaultSubobject<UWidgetComponent>(TEXT("PlayerIndicatorText"));
    this->bBlockZAxis = false;
    this->BlockedZAxis = 0.00f;
}

