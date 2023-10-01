#pragma once
#include "CoreMinimal.h"
#include "WWEAnimationVariation.h"
#include "WWECageTopElectrocutedAction.generated.h"

UCLASS(Blueprintable)
class UWWECageTopElectrocutedAction : public UWWEAnimationVariation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRight;
    
    UWWECageTopElectrocutedAction();
};

