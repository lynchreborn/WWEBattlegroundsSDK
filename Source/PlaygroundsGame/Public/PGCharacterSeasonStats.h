#pragma once
#include "CoreMinimal.h"
#include "PGCharacterSeasonStats.generated.h"

USTRUCT(BlueprintType)
struct FPGCharacterSeasonStats {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> Stats;
    
    PLAYGROUNDSGAME_API FPGCharacterSeasonStats();
};

