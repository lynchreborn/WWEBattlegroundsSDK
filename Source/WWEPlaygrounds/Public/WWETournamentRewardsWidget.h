#pragma once
#include "CoreMinimal.h"
#include "SBUserWidget.h"
#include "WWETournamentRewardsWidget.generated.h"

class UWWERewardsList;
class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWETournamentRewardsWidget : public USBUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWERewardsList* RewardsList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* SingleTick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* MultipleTicks;
    
public:
    UWWETournamentRewardsWidget();
};

