#pragma once
#include "CoreMinimal.h"
#include "EWWEMoneyLimit.h"
#include "WWESteelCage2vs2MatchConfig.generated.h"

USTRUCT(BlueprintType)
struct FWWESteelCage2vs2MatchConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWWEMoneyLimit MoneyLimit;
    
    WWEPLAYGROUNDS_API FWWESteelCage2vs2MatchConfig();
};

