#pragma once
#include "CoreMinimal.h"
#include "EWWEClashType.h"
#include "WWEDistanceAnimationVariation.h"
#include "WWEClashAnimation.generated.h"

UCLASS(Blueprintable)
class UWWEClashAnimation : public UWWEDistanceAnimationVariation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWWEClashType ClashType;
    
    UWWEClashAnimation();
};

