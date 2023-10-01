#pragma once
#include "CoreMinimal.h"
#include "WWEPowerUpPerTimeParameters.h"
#include "WWEEnergyThiefParams.generated.h"

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API UWWEEnergyThiefParams : public UWWEPowerUpPerTimeParameters {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TotalWavesSpawned[3];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float EnergyForEachWave[3];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float RadiusAffected[3];
    
public:
    UWWEEnergyThiefParams();
};

