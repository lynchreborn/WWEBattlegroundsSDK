#pragma once
#include "CoreMinimal.h"
#include "PGChampionshipCharacterState.generated.h"

USTRUCT(BlueprintType)
struct FPGChampionshipCharacterState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UID;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 TimesUsed;
    
    PLAYGROUNDSGAME_API FPGChampionshipCharacterState();
};

