#pragma once
#include "CoreMinimal.h"
#include "SBFadeTransition.h"
#include "SBResetGameplayTransition.generated.h"

UCLASS(Blueprintable)
class SABERGAME_API USBResetGameplayTransition : public USBFadeTransition {
    GENERATED_BODY()
public:
    USBResetGameplayTransition();
};

