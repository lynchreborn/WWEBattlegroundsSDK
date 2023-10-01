#pragma once
#include "CoreMinimal.h"
#include "WWEBaseMatchConfig.h"
#include "WWETripleThreatMatchConfig.generated.h"

USTRUCT(BlueprintType)
struct FWWETripleThreatMatchConfig : public FWWEBaseMatchConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPinOnlyInTheRing;
    
    WWEPLAYGROUNDS_API FWWETripleThreatMatchConfig();
};

