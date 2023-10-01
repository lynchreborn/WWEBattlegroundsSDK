#include "SBOptionSelector.h"

USBOptionSelector::USBOptionSelector() {
    this->IsNumericValue = true;
    this->ShowPercentSymbol = true;
    this->MinNumericValue = 0;
    this->MaxNumericValue = 100;
    this->NumericIncrement = 5;
    this->bDoValuesWrap = false;
    this->SecondStepDelay = 0.00f;
    this->StepDelay = 0.00f;
    this->StepDelayDecrement = 0.00f;
    this->MinStepDelay = 0.00f;
    this->LeftArrowImagePressed = NULL;
    this->LeftArrowImageNotPressed = NULL;
    this->RightArrowImagePressed = NULL;
    this->RightArrowImageNotPressed = NULL;
    this->TextblockValue = NULL;
    this->TextblockPercent = NULL;
    this->LeftArrowIcon = NULL;
    this->RightArrowIcon = NULL;
    this->bCanBeModifiable = true;
}

