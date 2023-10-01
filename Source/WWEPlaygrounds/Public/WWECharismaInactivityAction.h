#pragma once
#include "CoreMinimal.h"
#include "EWWEUserProgressionCondition.h"
#include "WWECharismaActionWithParameters.h"
#include "WWECharismaInactivityAction.generated.h"

USTRUCT(BlueprintType)
struct WWEPLAYGROUNDS_API FWWECharismaInactivityAction : public FWWECharismaActionWithParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<EWWEUserProgressionCondition> ActionsThatCancelInactivity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InactivityTimeNeeded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bIsInactivityAvailable;
    
    FWWECharismaInactivityAction();
};

