#pragma once
#include "CoreMinimal.h"
#include "SBUserWidget.h"
#include "Templates/SubclassOf.h"
#include "SBPlatformTiedIconText.generated.h"

class UOverlay;
class USBPlatformTiedIcon;

UCLASS(Blueprintable, EditInlineNew)
class SABERGAME_API USBPlatformTiedIconText : public USBUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBPlatformTiedIcon> PlatformIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* PlatformIconWidgetContainer;
    
    USBPlatformTiedIconText();
};

