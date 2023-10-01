#pragma once
#include "CoreMinimal.h"
#include "EWWECountOut.h"
#include "EWWEEnterRingCountOut.h"
#include "WWEBaseMatchConfig.h"
#include "WWETagTeamMatchConfig.generated.h"

USTRUCT(BlueprintType)
struct FWWETagTeamMatchConfig : public FWWEBaseMatchConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPinOnlyInTheRing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWWECountOut CountOut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWWEEnterRingCountOut EnterRingCountOut;
    
    WWEPLAYGROUNDS_API FWWETagTeamMatchConfig();
};

