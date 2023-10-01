#pragma once
#include "CoreMinimal.h"
#include "PGSeasonMatch.h"
#include "PGSeasonWeek.generated.h"

USTRUCT(BlueprintType)
struct FPGSeasonWeek {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPGSeasonMatch> Matches;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFinished;
    
    PLAYGROUNDSGAME_API FPGSeasonWeek();
};

