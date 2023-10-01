#pragma once
#include "CoreMinimal.h"
#include "WWEAction_ActivePowerUp.h"
#include "WWEAction_PowerUpEarthquake.generated.h"

class UWWECommentSettings;

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API UWWEAction_PowerUpEarthquake : public UWWEAction_ActivePowerUp {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UWWECommentSettings> SpecialCommentSettings[2];
    
    UPROPERTY(EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    uint32 HowManyHitsAtSameTime;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 HowManyHitsToPlayComment;
    
public:
    UWWEAction_PowerUpEarthquake();
};

