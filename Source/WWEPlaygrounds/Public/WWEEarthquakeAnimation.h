#pragma once
#include "CoreMinimal.h"
#include "WWEAnimationVariation.h"
#include "WWEEarthquakeAnimation.generated.h"

UCLASS(Blueprintable)
class UWWEEarthquakeAnimation : public UWWEAnimationVariation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDumped;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsFaceUp;
    
    UWWEEarthquakeAnimation();
};

