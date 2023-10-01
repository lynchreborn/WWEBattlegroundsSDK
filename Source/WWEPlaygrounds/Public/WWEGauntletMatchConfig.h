#pragma once
#include "CoreMinimal.h"
#include "EWWECountOut.h"
#include "EWWENumberSuperstarts.h"
#include "WWEBaseMatchConfig.h"
#include "WWEGauntletMatchConfig.generated.h"

USTRUCT(BlueprintType)
struct FWWEGauntletMatchConfig : public FWWEBaseMatchConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPinOnlyInTheRing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWWECountOut CountOut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWWENumberSuperstarts NumberOfSuperStars;
    
    WWEPLAYGROUNDS_API FWWEGauntletMatchConfig();
};

