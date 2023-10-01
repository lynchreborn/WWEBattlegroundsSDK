#pragma once
#include "CoreMinimal.h"
#include "SBUserWidget.h"
#include "WWELeaderboardKOTRReward.generated.h"

class UImage;
class USBStylizedText;

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWELeaderboardKOTRReward : public USBUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBStylizedText* TitleReward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBStylizedText* Quantity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Currency;
    
public:
    UWWELeaderboardKOTRReward();
};

