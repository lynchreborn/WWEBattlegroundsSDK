#pragma once
#include "CoreMinimal.h"
#include "EWWEAIDistance.h"
#include "EWWEComparisonType.h"
#include "WWEBTDecorator_AbortBase.h"
#include "WWEBTDecorator_CheckDistance.generated.h"

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API UWWEBTDecorator_CheckDistance : public UWWEBTDecorator_AbortBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWWEComparisonType Comparison;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWWEAIDistance DistanceConfig;
    
public:
    UWWEBTDecorator_CheckDistance();
};

