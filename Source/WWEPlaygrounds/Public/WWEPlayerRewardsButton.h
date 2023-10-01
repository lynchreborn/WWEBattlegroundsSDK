#pragma once
#include "CoreMinimal.h"
#include "SBStandaloneButton.h"
#include "EWWEPlayerRewardButton.h"
#include "WWEPlayerRewardsButton.generated.h"

class USBStylizedText;

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWEPlayerRewardsButton : public USBStandaloneButton {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBStylizedText* Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWWEPlayerRewardButton ButtonAction;
    
public:
    UWWEPlayerRewardsButton();
};

