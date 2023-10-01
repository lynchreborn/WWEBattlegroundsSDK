#include "WWEWrestlerDetailsTheatre.h"
#include "Components/SceneComponent.h"

void AWWEWrestlerDetailsTheatre::EnableCharacterPhysics(bool bEnable) {
}

AWWEWrestlerDetailsTheatre::AWWEWrestlerDetailsTheatre() {
    this->HandleOffset = 0.00f;
    this->TimeToScroll = 0.50f;
    this->CharacterBoxClass = NULL;
    this->TheatreRoot = CreateDefaultSubobject<USceneComponent>(TEXT("TheatreRoot"));
    this->Scroller = CreateDefaultSubobject<USceneComponent>(TEXT("Scroller"));
    this->Handles.AddDefaulted(10);
    this->RootHandles.AddDefaulted(10);
}

