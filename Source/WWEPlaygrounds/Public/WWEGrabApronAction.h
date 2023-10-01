#pragma once
#include "CoreMinimal.h"
#include "WWEDistanceAnimationVariation.h"
#include "WWEGrabApronAction.generated.h"

UCLASS(Blueprintable)
class UWWEGrabApronAction : public UWWEDistanceAnimationVariation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFatality;
    
    UWWEGrabApronAction();
};

