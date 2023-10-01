#pragma once
#include "CoreMinimal.h"
#include "WWEAnimationVariation.h"
#include "WWERotateOnTurnbuckleAction.generated.h"

UCLASS(Blueprintable)
class UWWERotateOnTurnbuckleAction : public UWWEAnimationVariation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsFacingRing;
    
    UWWERotateOnTurnbuckleAction();
};

