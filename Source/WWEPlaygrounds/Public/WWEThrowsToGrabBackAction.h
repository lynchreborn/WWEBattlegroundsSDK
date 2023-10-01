#pragma once
#include "CoreMinimal.h"
#include "WWEDistanceAnimationVariation.h"
#include "WWEThrowsToGrabBackAction.generated.h"

UCLASS(Blueprintable)
class UWWEThrowsToGrabBackAction : public UWWEDistanceAnimationVariation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseMidSocketRotation;
    
    UWWEThrowsToGrabBackAction();
};

