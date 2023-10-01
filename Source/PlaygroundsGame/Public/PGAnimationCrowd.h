#pragma once
#include "CoreMinimal.h"
#include "PGAnimationCrowd.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FPGAnimationCrowd {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* AnimExecuted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Rate;
    
    PLAYGROUNDSGAME_API FPGAnimationCrowd();
};

