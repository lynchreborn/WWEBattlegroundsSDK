#pragma once
#include "CoreMinimal.h"
#include "EWWEMoneyLimit.h"
#include "WWESteelCage1vs1MatchConfig.generated.h"

USTRUCT(BlueprintType)
struct FWWESteelCage1vs1MatchConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWWEMoneyLimit MoneyLimit;
    
    WWEPLAYGROUNDS_API FWWESteelCage1vs1MatchConfig();
};

