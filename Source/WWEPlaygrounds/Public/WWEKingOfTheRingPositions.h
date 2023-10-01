#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "WWEKingOfTheRingPositions.generated.h"

class UWWEKingOfTheRingPlayerStats;

USTRUCT(BlueprintType)
struct FWWEKingOfTheRingPositions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D Position;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsPositionEmpty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWEKingOfTheRingPlayerStats* PlayerStatsAssigned;
    
    WWEPLAYGROUNDS_API FWWEKingOfTheRingPositions();
};

