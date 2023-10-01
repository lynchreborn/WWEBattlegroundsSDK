#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ESBControllerType.h"
#include "SBUserWidget.h"
#include "WWEMovablePlatformPanelWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWEMovablePlatformPanelWidget : public USBUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESBControllerType, FVector2D> PanelLocation;
    
    UWWEMovablePlatformPanelWidget();
};

