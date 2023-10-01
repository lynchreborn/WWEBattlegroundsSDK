#include "WWEOutfitCharacterBox.h"
#include "Components/WidgetComponent.h"

AWWEOutfitCharacterBox::AWWEOutfitCharacterBox() {
    this->IsOutfitSelectedWidget = CreateDefaultSubobject<UWidgetComponent>(TEXT("IsOutfitSelectedWidget"));
    this->CanAddNewOutfitWidget = CreateDefaultSubobject<UWidgetComponent>(TEXT("CanAddNewOutfitWidget"));
}

