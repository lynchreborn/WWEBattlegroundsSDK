#pragma once
#include "CoreMinimal.h"
#include "CoordinateRange.h"
#include "SimpleRange.h"
#include "MatchmakingZone.generated.h"

USTRUCT(BlueprintType)
struct FMatchmakingZone {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Country;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Latitude;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Longitude;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCoordinateRange LatitudeRange;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCoordinateRange LongitudeRange;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSimpleRange UtcOffsetRange;
    
    PLAYGROUNDSGAME_API FMatchmakingZone();
};

