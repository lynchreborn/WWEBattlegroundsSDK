#pragma once
#include "CoreMinimal.h"
#include "WWEAction_ComplexBase.h"
#include "WWEAction_RotateAndTaunt.generated.h"

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API UWWEAction_RotateAndTaunt : public UWWEAction_ComplexBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bTauntInCooldown;
    
public:
    UWWEAction_RotateAndTaunt();
};

