#pragma once
#include "CoreMinimal.h"
#include "SBFadeTransition.h"
#include "SBFadeAudioTransition.generated.h"

UCLASS(Blueprintable)
class SABERGAME_API USBFadeAudioTransition : public USBFadeTransition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FXFadeSpeed;
    
public:
    USBFadeAudioTransition();
};

