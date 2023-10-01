#pragma once
#include "CoreMinimal.h"
#include "SBWidgetScene.h"
#include "WWEIngameMenuScene.generated.h"

class APlayerController;

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API UWWEIngameMenuScene : public USBWidgetScene {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APlayerController* FocusedPlayerController;
    
    UWWEIngameMenuScene();
};

