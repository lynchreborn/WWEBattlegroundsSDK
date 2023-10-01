#pragma once
#include "CoreMinimal.h"
#include "EWWEAnimInterruptionStep.h"
#include "WWEAnimationVariation.h"
#include "WWEPullFromApronAction.generated.h"

UCLASS(Blueprintable)
class UWWEPullFromApronAction : public UWWEAnimationVariation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsFaceToRing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EWWEAnimInterruptionStep> InterruptionSteps;
    
    UWWEPullFromApronAction();
};

