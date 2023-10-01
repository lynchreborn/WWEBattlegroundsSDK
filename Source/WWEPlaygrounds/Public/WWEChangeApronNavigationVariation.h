#pragma once
#include "CoreMinimal.h"
#include "WWEAnimationVariation.h"
#include "WWEChangeApronNavigationVariation.generated.h"

UCLASS(Blueprintable)
class UWWEChangeApronNavigationVariation : public UWWEAnimationVariation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bToRight;
    
    UWWEChangeApronNavigationVariation();
};

