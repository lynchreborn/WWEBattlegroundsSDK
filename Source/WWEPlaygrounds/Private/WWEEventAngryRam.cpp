#include "WWEEventAngryRam.h"
#include "Components/SceneComponent.h"
#include "WWEDynamicMaterialComponent.h"

void AWWEEventAngryRam::RechargeRemote() {
}

void AWWEEventAngryRam::CancelControlRam(AWWECharacterCombat* Character) {
}

AWWEEventAngryRam::AWWEEventAngryRam() {
    this->RemoteButtonComponent = NULL;
    this->RemoteRootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->RemotePercent = 0.00f;
    this->AngryRamCharacter = NULL;
    this->ControlTime = 0.00f;
    this->RechargeTime = 0.00f;
    this->ReservedCharacter = NULL;
    this->MoveToTarget = CreateDefaultSubobject<USceneComponent>(TEXT("MoveToTarget"));
    this->RotateToTarget = CreateDefaultSubobject<USceneComponent>(TEXT("RotateToTarget"));
    this->DynamicMaterialComponent = CreateDefaultSubobject<UWWEDynamicMaterialComponent>(TEXT("DynamicMaterialComponent"));
    this->RemoteAngryRam = NULL;
}

