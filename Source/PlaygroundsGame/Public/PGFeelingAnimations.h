#pragma once
#include "CoreMinimal.h"
#include "EPGFeeling.h"
#include "PGFeelingAnimations.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FPGFeelingAnimations {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPGFeeling Feeling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> Montages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Weight;
    
    PLAYGROUNDSGAME_API FPGFeelingAnimations();
};

