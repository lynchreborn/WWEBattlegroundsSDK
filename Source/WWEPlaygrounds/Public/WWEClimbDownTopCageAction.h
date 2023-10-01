#pragma once
#include "CoreMinimal.h"
#include "WWEAnimationVariation.h"
#include "WWEClimbDownTopCageAction.generated.h"

UCLASS(Blueprintable)
class UWWEClimbDownTopCageAction : public UWWEAnimationVariation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFacingClockwise;
    
    UWWEClimbDownTopCageAction();
};

