#pragma once
#include "CoreMinimal.h"
#include "PGChampionshipCharacterState.h"
#include "PGChampionshipCommonStats.h"
#include "PGChampionshipMatch.h"
#include "PGChampionshipMode.generated.h"

USTRUCT(BlueprintType)
struct FPGChampionshipMode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPGChampionshipMatch> LastMatches;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPGChampionshipCharacterState> CharactersState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPGChampionshipCommonStats CommonStats;
    
    PLAYGROUNDSGAME_API FPGChampionshipMode();
};

