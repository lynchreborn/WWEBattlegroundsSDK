#pragma once
#include "CoreMinimal.h"
#include "SBRootUserWidget.h"
#include "WWECombatResultsEndButtons.generated.h"

class UHorizontalBox;
class USoundMix;
class UWWEPlayerRewardsButton;

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWECombatResultsEndButtons : public USBRootUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorizontalBox* ButtonsHorizontalBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWEPlayerRewardsButton* PlayAgainButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWEPlayerRewardsButton* FightRoomButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWEPlayerRewardsButton* ExitButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundMix* PostMatchSM;
    
public:
    UWWECombatResultsEndButtons();
};

