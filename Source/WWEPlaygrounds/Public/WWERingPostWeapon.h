#pragma once
#include "CoreMinimal.h"
#include "WWEStaticWeapon.h"
#include "WWERingPostWeapon.generated.h"

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API AWWERingPostWeapon : public AWWEStaticWeapon {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float WeaponRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float WeaponHalfHeight;
    
public:
    AWWERingPostWeapon();
};

