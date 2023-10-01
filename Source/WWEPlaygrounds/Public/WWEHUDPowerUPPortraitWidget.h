#pragma once
#include "CoreMinimal.h"
#include "SBUserWidget.h"
#include "WWEHUDPowerUPPortraitWidget.generated.h"

class UImage;

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWEHUDPowerUPPortraitWidget : public USBUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Portrait;
    
public:
    UWWEHUDPowerUPPortraitWidget();
};

