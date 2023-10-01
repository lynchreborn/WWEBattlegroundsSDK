#pragma once
#include "CoreMinimal.h"
#include "WWETabCounterIndicator.h"
#include "WWEArenaTabCounterIndicator.generated.h"

class USBGrayableImage;

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWEArenaTabCounterIndicator : public UWWETabCounterIndicator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBGrayableImage* NotificationIcon;
    
    UWWEArenaTabCounterIndicator();
};

