#pragma once
#include "CoreMinimal.h"
#include "SBFadeTransition.h"
#include "SBPauseTransition.generated.h"

UCLASS(Blueprintable)
class SABERGAME_API USBPauseTransition : public USBFadeTransition {
    GENERATED_BODY()
public:
    USBPauseTransition();
protected:
    UFUNCTION(BlueprintCallable)
    void OpenSkipPhase();
    
};

