#pragma once
#include "CoreMinimal.h"
#include "EWWEDirection.h"
#include "WWEAnimationVariation.h"
#include "WWECageHitAction.generated.h"

UCLASS(Blueprintable)
class UWWECageHitAction : public UWWEAnimationVariation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWWEDirection DirectionToHit;
    
    UWWECageHitAction();
};

