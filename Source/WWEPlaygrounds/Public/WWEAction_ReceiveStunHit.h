#pragma once
#include "CoreMinimal.h"
#include "WWEAction_AnimBase.h"
#include "WWEAction_ReceiveStunHit.generated.h"

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API UWWEAction_ReceiveStunHit : public UWWEAction_AnimBase {
    GENERATED_BODY()
public:
    UWWEAction_ReceiveStunHit();
protected:
    UFUNCTION(BlueprintCallable)
    void EndByTime();
    
};

