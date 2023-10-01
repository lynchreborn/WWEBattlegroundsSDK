#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "WWEStaticWeapon.h"
#include "WWEHammerWeapon.generated.h"

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API AWWEHammerWeapon : public AWWEStaticWeapon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TEnumAsByte<EObjectTypeQuery>> ObjectsNotCloseWhenEnablingCollision;
    
    AWWEHammerWeapon();
};

