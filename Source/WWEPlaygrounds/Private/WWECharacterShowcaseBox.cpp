#include "WWECharacterShowcaseBox.h"
#include "Components/SceneComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/StaticMeshComponent.h"
#include "SBItemAssetLoader.h"
#include "Components/WidgetComponent.h"

AWWECharacterShowcaseBox::AWWECharacterShowcaseBox() {
    this->bCharacterSelectedChannel0 = false;
    this->bCharacterSelectedChannel1 = true;
    this->bCharacterUnselectedChannel0 = true;
    this->bCharacterUnselectedChannel1 = false;
    this->bCharacterBoxTopSelectedChannel0 = false;
    this->bCharacterBoxTopSelectedChannel1 = true;
    this->bCharacterBoxTopUnselectedChannel0 = true;
    this->bCharacterBoxTopUnselectedChannel1 = false;
    this->bCharacterBoxBottomSelectedChannel0 = false;
    this->bCharacterBoxBottomSelectedChannel1 = true;
    this->bCharacterBoxBottomUnselectedChannel0 = true;
    this->bCharacterBoxBottomUnselectedChannel1 = false;
    this->bCharacterBoxGlassSelectedChannel0 = false;
    this->bCharacterBoxGlassSelectedChannel1 = true;
    this->bCharacterBoxGlassUnselectedChannel0 = true;
    this->bCharacterBoxGlassUnselectedChannel1 = false;
    this->SelectedForwardDistance = 100.00f;
    this->TimeMoveForward = 0.50f;
    this->TimeMoveBack = 0.50f;
    this->CharacterClass = NULL;
    this->BoxRarity = ESBItemRarity::Common;
    this->Loader = CreateDefaultSubobject<USBItemAssetLoader>(TEXT("Loader"));
    this->bIsCharacterBoxLoaded = false;
    this->bIsCharacterLoaded = false;
    this->BoxRoot = CreateDefaultSubobject<USceneComponent>(TEXT("BoxRoot"));
    this->BoxMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("BoxMesh"));
    this->BottomMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BottomMesh"));
    this->CharacterInfoWidget = CreateDefaultSubobject<UWidgetComponent>(TEXT("CharacterInfoWidget"));
    this->CharacterRarityWidget = CreateDefaultSubobject<UWidgetComponent>(TEXT("CharacterRarityWidget"));
    this->Character = NULL;
    this->MyGridSlot = NULL;
    this->NumOfOutfitsWidget = NULL;
    this->MyParams = NULL;
}

