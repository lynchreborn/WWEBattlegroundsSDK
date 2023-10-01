#pragma once
#include "CoreMinimal.h"
#include "EWWEFightingStyle.h"
#include "WWECrowdCharacter.h"
#include "WWECrowdWeaponSpawnCharacter.generated.h"

class AActor;
class AWWEInteractableWeapon;
class AWWEStandaloneWeaponSpawner;

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API AWWECrowdWeaponSpawnCharacter : public AWWECrowdCharacter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AWWEStandaloneWeaponSpawner* Spawner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinTimeToWaitAfterSpawning;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxTimeToWaitAfterSpawning;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinTimeToWaitAfterBeingReady;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxTimeToWaitAfterBeingReady;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EWWEFightingStyle, float> DistancesConsideredClose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PropBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWaitForCharacterGrabLastWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSpawnOnlyWhenCharacterIsRendered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldLastWeaponHaveDespawned;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaximumNumberOfWeaponsToSpawnAnother;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinimumDistanceToAnyPlayerToSpawnWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AWWEInteractableWeapon* LastInteractableWeaponInGame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> PlayersInGame;
    
public:
    AWWECrowdWeaponSpawnCharacter();
    UFUNCTION(BlueprintCallable)
    void SpawnInteractableWeapon();
    
private:
    UFUNCTION(BlueprintCallable)
    void SetIsWaitingAfterSpawningWeapon(bool bIsWaiting);
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastSpawnInteractableWeapon();
    
};

