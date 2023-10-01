#pragma once
#include "CoreMinimal.h"
#include "WWEItemReward.h"
#include "WWEArenaReward.generated.h"

class UPGArenaParameters;

USTRUCT(BlueprintType)
struct FWWEArenaReward : public FWWEItemReward {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPGArenaParameters* ResourceArena;
    
    WWEPLAYGROUNDS_API FWWEArenaReward();
};

