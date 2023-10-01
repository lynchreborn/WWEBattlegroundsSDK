#pragma once
#include "CoreMinimal.h"
#include "WWEAction_ComplexBase.h"
#include "WWEAction_ThrowWeapon.generated.h"

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API UWWEAction_ThrowWeapon : public UWWEAction_ComplexBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float TimeWhenStartedCharging;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float TimeWhenStoppedCharging;
    
public:
    UWWEAction_ThrowWeapon();
};

