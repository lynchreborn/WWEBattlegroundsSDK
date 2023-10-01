#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "CharacterPostPhysicsTickFunction.generated.h"

USTRUCT(BlueprintType)
struct FCharacterPostPhysicsTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    WWEPLAYGROUNDS_API FCharacterPostPhysicsTickFunction();
};

template<>
struct TStructOpsTypeTraits<FCharacterPostPhysicsTickFunction> : public TStructOpsTypeTraitsBase2<FCharacterPostPhysicsTickFunction>
{
    enum
    {
        WithCopy = false
    };
};

