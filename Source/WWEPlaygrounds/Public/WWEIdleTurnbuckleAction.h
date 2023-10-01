#pragma once
#include "CoreMinimal.h"
#include "WWEAnimationVariation.h"
#include "WWEIdleTurnbuckleAction.generated.h"

UCLASS(Blueprintable)
class UWWEIdleTurnbuckleAction : public UWWEAnimationVariation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsForwardToRing;
    
    UWWEIdleTurnbuckleAction();
};

