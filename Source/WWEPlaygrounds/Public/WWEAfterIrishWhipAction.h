#pragma once
#include "CoreMinimal.h"
#include "EWWEActionHeight.h"
#include "WWEDistanceAnimationVariation.h"
#include "WWEAfterIrishWhipAction.generated.h"

UCLASS(Blueprintable)
class UWWEAfterIrishWhipAction : public UWWEDistanceAnimationVariation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Direction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWWEActionHeight ComboHeight;
    
    UWWEAfterIrishWhipAction();
};

