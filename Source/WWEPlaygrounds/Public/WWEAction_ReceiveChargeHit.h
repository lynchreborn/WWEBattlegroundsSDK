#pragma once
#include "CoreMinimal.h"
#include "WWEAction_ReceiveHit.h"
#include "WWEAction_ReceiveChargeHit.generated.h"

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API UWWEAction_ReceiveChargeHit : public UWWEAction_ReceiveHit {
    GENERATED_BODY()
public:
    UWWEAction_ReceiveChargeHit();
};

