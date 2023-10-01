#pragma once
#include "CoreMinimal.h"
#include "PGChampionshipMatchStats.h"
#include "PGChampionshipMode.h"
#include "PGChampionshipMatchMode.generated.h"

USTRUCT(BlueprintType)
struct FPGChampionshipMatchMode : public FPGChampionshipMode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPGChampionshipMatchStats MatchStats;
    
    PLAYGROUNDSGAME_API FPGChampionshipMatchMode();
};

