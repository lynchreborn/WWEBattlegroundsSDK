#pragma once
#include "CoreMinimal.h"
#include "WWECharismaActionCheck.h"
#include "WWECharismaActionWithParameters.h"
#include "WWECharismaActionWithRestrictions.generated.h"

USTRUCT(BlueprintType)
struct WWEPLAYGROUNDS_API FWWECharismaActionWithRestrictions : public FWWECharismaActionWithParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWWECharismaActionCheck ChecksToPerformAction;
    
    FWWECharismaActionWithRestrictions();
};

