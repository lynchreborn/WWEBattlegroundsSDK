#include "SBStylizedText.h"
#include "Templates/SubclassOf.h"

void USBStylizedText::SetStyle(TSubclassOf<USBTextStyle> NewStyle) {
}

void USBStylizedText::SetStlJustification(TEnumAsByte<ETextJustify::Type> NewStlJustification) {
}

USBStylizedText::USBStylizedText() {
    this->Style = NULL;
    this->StlMinDesiredWidth = 0.00f;
    this->StyleTextScale = 1.00f;
    this->bForceUpperCase = false;
    this->bStlAutoWrapText = false;
    this->StlLineHeightPercentage = 1.00f;
    this->StlJustification = ETextJustify::Left;
    this->BreakLineSubString = TEXT("<br>");
    this->bSkypArabicFix = false;
}

