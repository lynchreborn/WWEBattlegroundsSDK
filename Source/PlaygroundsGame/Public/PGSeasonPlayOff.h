#pragma once
#include "CoreMinimal.h"
#include "EPGSeasonPlayOffStates.h"
#include "PGSeasonPlayOffMatch.h"
#include "PGSeasonPlayOff.generated.h"

USTRUCT(BlueprintType)
struct FPGSeasonPlayOff {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPGSeasonPlayOffMatch> Round8thMatchs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPGSeasonPlayOffMatch> Round4thMatchs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPGSeasonPlayOffMatch> RoundSemifinalMatchs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPGSeasonPlayOffMatch RoundFinalMatch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPGSeasonPlayOffStates State;
    
    PLAYGROUNDSGAME_API FPGSeasonPlayOff();
};

