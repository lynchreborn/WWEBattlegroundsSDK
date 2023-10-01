#pragma once
#include "CoreMinimal.h"
#include "EPGChampionshipLeague.h"
#include "PGChampionshipCommonStats.generated.h"

USTRUCT(BlueprintType)
struct FPGChampionshipCommonStats {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 Wins;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 TotalMatches;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPGChampionshipLeague BestLeaguePlayed;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 LegendaryPlayersUsed;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 EpicPlayersUsed;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 CommonPlayersUsed;
    
    PLAYGROUNDSGAME_API FPGChampionshipCommonStats();
};

