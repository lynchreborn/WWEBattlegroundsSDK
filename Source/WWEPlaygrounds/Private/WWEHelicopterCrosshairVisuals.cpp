#include "WWEHelicopterCrosshairVisuals.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"

AWWEHelicopterCrosshairVisuals::AWWEHelicopterCrosshairVisuals() {
    this->RootSceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->GroundSnappedCrosshair = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("GroundSnappedCrosshair"));
    this->RegularCrosshair = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("RegularCrosshair"));
    this->GroundHeight = 0.00f;
    this->HideRegularTolerance = 0.00f;
}

