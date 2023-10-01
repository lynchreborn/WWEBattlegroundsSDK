#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "PGDailyQuestsSystemInfo.generated.h"

USTRUCT(BlueprintType)
struct FPGDailyQuestsSystemInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    FTimespan TimeToDailyQuestsReset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    FDateTime LastDailyQuestsUpdateTimestamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    int32 AvailableRerolls;
    
    PLAYGROUNDSGAME_API FPGDailyQuestsSystemInfo();
};

