#pragma once
#include "CoreMinimal.h"
#include "PGSeasonWeek.h"
#include "PGSeasonCalendar.generated.h"

USTRUCT(BlueprintType)
struct FPGSeasonCalendar {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPGSeasonWeek> Weeks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentWeek;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ConsecutiveLoses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MatchWithBreak;
    
    PLAYGROUNDSGAME_API FPGSeasonCalendar();
};

