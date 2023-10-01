#pragma once
#include "CoreMinimal.h"
#include "SBRootUserWidget.h"
#include "SBTransitionableElement.h"
#include "WWEDailyQuestsRewardsScreen.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWEDailyQuestsRewardsScreen : public USBRootUserWidget, public ISBTransitionableElement {
    GENERATED_BODY()
public:
    UWWEDailyQuestsRewardsScreen();
    
    // Fix for true pure virtual functions not being implemented
};

