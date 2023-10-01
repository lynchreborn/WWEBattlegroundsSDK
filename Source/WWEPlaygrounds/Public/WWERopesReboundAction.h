#pragma once
#include "CoreMinimal.h"
#include "EWWEDirection.h"
#include "WWEAnimationVariation.h"
#include "WWERopesReboundAction.generated.h"

UCLASS(Blueprintable)
class UWWERopesReboundAction : public UWWEAnimationVariation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWWEDirection Direction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ClockwiseAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWantsToRebound;
    
    UWWERopesReboundAction();
};

