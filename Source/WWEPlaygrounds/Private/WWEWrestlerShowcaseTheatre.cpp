#include "WWEWrestlerShowcaseTheatre.h"
#include "Components/SceneCaptureComponent2D.h"
#include "Components/SceneComponent.h"

AWWEWrestlerShowcaseTheatre::AWWEWrestlerShowcaseTheatre() {
    this->HandleOffset = 0.00f;
    this->TimeToScroll = 0.50f;
    this->CharacterBoxClass = NULL;
    this->TheatreRoot = CreateDefaultSubobject<USceneComponent>(TEXT("TheatreRoot"));
    this->CameraPivot = CreateDefaultSubobject<USceneComponent>(TEXT("CameraPivot"));
    this->Camera = CreateDefaultSubobject<USceneCaptureComponent2D>(TEXT("Camera"));
    this->Scroller = CreateDefaultSubobject<USceneComponent>(TEXT("Scroller"));
    this->Handle0 = CreateDefaultSubobject<USceneComponent>(TEXT("Handle_0"));
    this->Handle1 = CreateDefaultSubobject<USceneComponent>(TEXT("Handle_1"));
    this->Handle2 = CreateDefaultSubobject<USceneComponent>(TEXT("Handle_2"));
    this->Handle3 = CreateDefaultSubobject<USceneComponent>(TEXT("Handle_3"));
    this->Handle4 = CreateDefaultSubobject<USceneComponent>(TEXT("Handle_4"));
    this->Handle5 = CreateDefaultSubobject<USceneComponent>(TEXT("Handle_5"));
    this->Handle6 = CreateDefaultSubobject<USceneComponent>(TEXT("Handle_6"));
    this->Handle7 = NULL;
    this->Handle8 = NULL;
    this->Handle9 = NULL;
    this->RootHandles.AddDefaulted(7);
}

