#include "SBTextRenderActor.h"
#include "SBTextRenderComponent.h"

ASBTextRenderActor::ASBTextRenderActor() {
    this->OriginalText = FText::FromString(TEXT("NFLText"));
    this->TextRender = CreateDefaultSubobject<USBTextRenderComponent>(TEXT("OriginalTextRenderComponent"));
}

