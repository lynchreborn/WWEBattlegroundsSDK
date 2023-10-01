#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "WWEPowerUpPerTime.h"
#include "WWEEnergyThiefPowerUp.generated.h"

class AWWECharacterCombat;
class UParticleSystemComponent;

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API UWWEEnergyThiefPowerUp : public UWWEPowerUpPerTime {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    int32 TotalWavesSpawned;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    int32 EnergyForEachWave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    int32 RadiusAffected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    FTimerHandle TimerHandleSpawnWave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    AWWECharacterCombat* CachedCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TMap<UParticleSystemComponent*, AWWECharacterCombat*> HittedCharactersFX;
    
public:
    UWWEEnergyThiefPowerUp();
protected:
    UFUNCTION(BlueprintCallable)
    void OnParticleSystemTick();
    
    UFUNCTION(BlueprintCallable)
    void OnParticleSystemEnd(UParticleSystemComponent* ParticleSystem);
    
};

