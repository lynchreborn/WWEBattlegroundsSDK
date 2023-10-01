#pragma once
#include "CoreMinimal.h"
#include "EWWEAIChance.h"
#include "WWEBTDecorator.h"
#include "WWEBTDecorator_CheckProbability.generated.h"

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API UWWEBTDecorator_CheckProbability : public UWWEBTDecorator {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWWEAIChance ProbabilityConfig;
    
public:
    UWWEBTDecorator_CheckProbability();
};

