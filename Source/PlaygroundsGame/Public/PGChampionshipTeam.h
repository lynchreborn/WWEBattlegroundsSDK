#pragma once
#include "CoreMinimal.h"
#include "PGChampionshipTeam.generated.h"

USTRUCT(BlueprintType)
struct FPGChampionshipTeam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> CharacterUIDs;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 Score;
    
    PLAYGROUNDSGAME_API FPGChampionshipTeam();
};

