#include "WWEWrestlersMainCharacterBox.h"
#include "Components/WidgetComponent.h"

AWWEWrestlersMainCharacterBox::AWWEWrestlersMainCharacterBox() {
    this->MyGridSlot = NULL;
    this->NumOfOutfitsWidget = CreateDefaultSubobject<UWidgetComponent>(TEXT("NumOfOutfitsWidget"));
}

