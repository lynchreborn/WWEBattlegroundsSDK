#pragma once
#include "CoreMinimal.h"
#include "PGChampionshipCharacterData.generated.h"

USTRUCT(BlueprintType)
struct FPGChampionshipCharacterData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Rarity;
    
    PLAYGROUNDSGAME_API FPGChampionshipCharacterData();
};

