#pragma once
#include "CoreMinimal.h"
#include "SBFadeTransition.h"
#include "WWENoFadeTransition.generated.h"

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API UWWENoFadeTransition : public USBFadeTransition {
    GENERATED_BODY()
public:
    UWWENoFadeTransition();
};

