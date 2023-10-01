#pragma once
#include "CoreMinimal.h"
#include "PGChampionshipBackendData.generated.h"

USTRUCT(BlueprintType)
struct FPGChampionshipBackendData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WinningStreak;
    
    PLAYGROUNDSGAME_API FPGChampionshipBackendData();
};

