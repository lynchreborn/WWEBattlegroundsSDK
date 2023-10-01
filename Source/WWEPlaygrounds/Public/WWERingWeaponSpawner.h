#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "EWWEFightingStyle.h"
#include "Templates/SubclassOf.h"
#include "WWEInteractableWeaponSpawner.h"
#include "WWERingWeaponSpawner.generated.h"

class AWWEInteractableWeapon;
class AWWERingWeaponSpawner;
class UObject;
class UWWEArenaItemParameters;

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API AWWERingWeaponSpawner : public AWWEInteractableWeaponSpawner {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CooldownBetweenSpawns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<UWWEArenaItemParameters>, float> SpawnRatesProbabilities;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EWWEFightingStyle, int32> ExtraWeaponsPastLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    int32 NumberOfWeaponsPulledOut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    FTimerHandle CooldownTimerHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bHasCooldownFinished;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TArray<FString> AvailableWeaponsID;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TArray<AWWEInteractableWeapon*> CachedUnusedWeapons;
    
public:
    AWWERingWeaponSpawner();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AWWERingWeaponSpawner* GetRingWeaponSpawner(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanActivateWeapon(const EWWEFightingStyle FightingStyle) const;
    
    UFUNCTION(BlueprintCallable)
    AWWEInteractableWeapon* ActivateWeapon(EWWEFightingStyle FightingStyle);
    
};

