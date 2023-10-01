#pragma once
#include "CoreMinimal.h"
#include "PGSeasonMatch.h"
#include "PGSeasonPlayOffMatch.generated.h"

USTRUCT(BlueprintType)
struct FPGSeasonPlayOffMatch : public FPGSeasonMatch {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 VictoriesTeam1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 VictoriesTeam2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 CurrentRound;
    
    PLAYGROUNDSGAME_API FPGSeasonPlayOffMatch();
};

