#include "WWECharacterTheatre.h"
#include "Components/SceneCaptureComponent2D.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"

void AWWECharacterTheatre::SetMenuIdleAnimationIndex() {
}

AWWECharacterTheatre::AWWECharacterTheatre() {
    this->CharacterClass = NULL;
    this->TheatreRoot = CreateDefaultSubobject<USceneComponent>(TEXT("TheatreRoot"));
    this->CameraPivot = CreateDefaultSubobject<USceneComponent>(TEXT("CameraPivot"));
    this->Camera = CreateDefaultSubobject<USceneCaptureComponent2D>(TEXT("Camera"));
    this->SpawnPoint = CreateDefaultSubobject<USceneComponent>(TEXT("SpawnPoint"));
    this->Character = NULL;
    this->RenderTarget = NULL;
    this->RenderMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("RenderMesh"));
    this->CachedIdleAnimationIndex = 0;
}

