#pragma once
#include "CoreMinimal.h"
#include "ESBPopupSceneClosingReason.h"
#include "PopupSceneClosedWithReasonDelegate.h"
#include "SBWidgetScene.h"
#include "SBPopupScene.generated.h"

UCLASS(Blueprintable)
class SABERGAME_API USBPopupScene : public USBWidgetScene {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FPopupSceneClosedWithReason PopupCloseDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ESBPopupSceneClosingReason CloseReason;
    
    USBPopupScene();
};

