#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "InteractableWeaponPostPhysicsTickFunction.generated.h"

USTRUCT(BlueprintType)
struct FInteractableWeaponPostPhysicsTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    WWEPLAYGROUNDS_API FInteractableWeaponPostPhysicsTickFunction();
};

template<>
struct TStructOpsTypeTraits<FInteractableWeaponPostPhysicsTickFunction> : public TStructOpsTypeTraitsBase2<FInteractableWeaponPostPhysicsTickFunction>
{
    enum
    {
        WithCopy = false
    };
};

