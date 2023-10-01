#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "HelicopterPostPhysicsTickFunction.generated.h"

USTRUCT(BlueprintType)
struct FHelicopterPostPhysicsTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    WWEPLAYGROUNDS_API FHelicopterPostPhysicsTickFunction();
};

template<>
struct TStructOpsTypeTraits<FHelicopterPostPhysicsTickFunction> : public TStructOpsTypeTraitsBase2<FHelicopterPostPhysicsTickFunction>
{
    enum
    {
        WithCopy = false
    };
};

