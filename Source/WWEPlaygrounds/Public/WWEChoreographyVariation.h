#pragma once
#include "CoreMinimal.h"
#include "WWEAnimationVariation.h"
#include "WWEChoreographyVariation.generated.h"

UCLASS(Blueprintable)
class UWWEChoreographyVariation : public UWWEAnimationVariation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWWEAnimationVariation* MatchedVariation;
    
    UWWEChoreographyVariation();
};

