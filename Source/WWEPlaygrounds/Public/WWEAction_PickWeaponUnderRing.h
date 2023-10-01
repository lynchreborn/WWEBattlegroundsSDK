#pragma once
#include "CoreMinimal.h"
#include "WWEAction_ComplexBase.h"
#include "WWEAction_PickWeaponUnderRing.generated.h"

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API UWWEAction_PickWeaponUnderRing : public UWWEAction_ComplexBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Threshold;
    
public:
    UWWEAction_PickWeaponUnderRing();
};

