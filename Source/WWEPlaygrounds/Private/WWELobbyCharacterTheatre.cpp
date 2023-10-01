#include "WWELobbyCharacterTheatre.h"
#include "Components/SceneCaptureComponent2D.h"
#include "Components/SceneComponent.h"

AWWELobbyCharacterTheatre::AWWELobbyCharacterTheatre() {
    this->CharacterClass = NULL;
    this->bAdjustByHeight = true;
    this->HeightAdjustMultiplier = 1.00f;
    this->TheatreRoot = CreateDefaultSubobject<USceneComponent>(TEXT("TheatreRoot"));
    this->CameraPivot = CreateDefaultSubobject<USceneComponent>(TEXT("CameraPivot"));
    this->Camera = CreateDefaultSubobject<USceneCaptureComponent2D>(TEXT("Camera"));
    this->SpawnPoint = CreateDefaultSubobject<USceneComponent>(TEXT("SpawnPoint"));
    this->Character = NULL;
    this->RenderTarget = NULL;
}

