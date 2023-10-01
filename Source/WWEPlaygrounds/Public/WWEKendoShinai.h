#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "WWEStaticWeapon.h"
#include "WWEKendoShinai.generated.h"

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API AWWEKendoShinai : public AWWEStaticWeapon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TEnumAsByte<EObjectTypeQuery>> ObjectsNotCloseWhenEnablingCollision;
    
    AWWEKendoShinai();
};

