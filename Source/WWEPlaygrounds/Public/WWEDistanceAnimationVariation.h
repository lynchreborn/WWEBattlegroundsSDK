#pragma once
#include "CoreMinimal.h"
#include "WWEAnimationVariation.h"
#include "WWEDistanceAnimationVariation.generated.h"

UCLASS(Blueprintable)
class UWWEDistanceAnimationVariation : public UWWEAnimationVariation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExtraDistanceOffset;
    
    UWWEDistanceAnimationVariation();
};

