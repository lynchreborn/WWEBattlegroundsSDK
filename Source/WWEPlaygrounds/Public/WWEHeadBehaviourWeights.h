#pragma once
#include "CoreMinimal.h"
#include "PGMinMaxFloat.h"
#include "WWEHeadBehaviourWeights.generated.h"

USTRUCT(BlueprintType)
struct FWWEHeadBehaviourWeights {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OpponentWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPGMinMaxFloat TimeLookingAtOpponent;
    
    WWEPLAYGROUNDS_API FWWEHeadBehaviourWeights();
};

