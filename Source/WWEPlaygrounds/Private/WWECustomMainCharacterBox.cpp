#include "WWECustomMainCharacterBox.h"
#include "Components/WidgetComponent.h"

AWWECustomMainCharacterBox::AWWECustomMainCharacterBox() {
    this->BuyNewCustomCharacterWidget = CreateDefaultSubobject<UWidgetComponent>(TEXT("BuyNewCustomCharacterWidget"));
    this->CreateNewCustomCharacterWidget = CreateDefaultSubobject<UWidgetComponent>(TEXT("CreateNewCustomCharacterWidget"));
}

