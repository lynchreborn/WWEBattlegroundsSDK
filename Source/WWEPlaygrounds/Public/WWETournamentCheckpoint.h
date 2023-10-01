#pragma once
#include "CoreMinimal.h"
#include "WWETournamentTax.h"
#include "WWETournamentCheckpoint.generated.h"

USTRUCT(BlueprintType)
struct FWWETournamentCheckpoint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    int32 ExtraLives;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    FWWETournamentTax RespawnTax;
    
    WWEPLAYGROUNDS_API FWWETournamentCheckpoint();
};

