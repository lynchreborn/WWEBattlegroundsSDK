#pragma once
#include "CoreMinimal.h"
#include "EWWECountOut.h"
#include "WWEBaseMatchConfig.h"
#include "WWETornadoTagMatchConfig.generated.h"

USTRUCT(BlueprintType)
struct FWWETornadoTagMatchConfig : public FWWEBaseMatchConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPinOnlyInTheRing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWWECountOut CountOut;
    
    WWEPLAYGROUNDS_API FWWETornadoTagMatchConfig();
};

