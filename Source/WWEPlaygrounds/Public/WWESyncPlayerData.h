#pragma once
#include "CoreMinimal.h"
#include "WWESyncPlayerSlotSettings.h"
#include "WWESyncPlayerData.generated.h"

USTRUCT(BlueprintType)
struct FWWESyncPlayerData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    int32 PlayerId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    FWWESyncPlayerSlotSettings PlayerSlotSettings;
    
    WWEPLAYGROUNDS_API FWWESyncPlayerData();
};

