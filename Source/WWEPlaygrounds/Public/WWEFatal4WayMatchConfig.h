#pragma once
#include "CoreMinimal.h"
#include "WWEBaseMatchConfig.h"
#include "WWEFatal4WayMatchConfig.generated.h"

USTRUCT(BlueprintType)
struct FWWEFatal4WayMatchConfig : public FWWEBaseMatchConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPinOnlyInTheRing;
    
    WWEPLAYGROUNDS_API FWWEFatal4WayMatchConfig();
};

