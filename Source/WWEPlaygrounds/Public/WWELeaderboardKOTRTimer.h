#pragma once
#include "CoreMinimal.h"
#include "SBUserWidget.h"
#include "WWELeaderboardKOTRTimer.generated.h"

class USBStylizedText;

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWELeaderboardKOTRTimer : public USBUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBStylizedText* TimeToReset;
    
public:
    UWWELeaderboardKOTRTimer();
};

