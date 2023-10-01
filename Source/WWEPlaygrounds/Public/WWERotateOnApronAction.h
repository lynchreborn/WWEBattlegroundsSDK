#pragma once
#include "CoreMinimal.h"
#include "WWEAnimationVariation.h"
#include "WWERotateOnApronAction.generated.h"

UCLASS(Blueprintable)
class UWWERotateOnApronAction : public UWWEAnimationVariation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsFacingRing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRightPosition;
    
    UWWERotateOnApronAction();
};

