#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "Templates/SubclassOf.h"
#include "WWEInteractableWeaponSpawner.h"
#include "WWEStandaloneWeaponSpawner.generated.h"

class AWWEInteractableWeapon;
class UWWEArenaItemParameters;

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API AWWEStandaloneWeaponSpawner : public AWWEInteractableWeaponSpawner {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InitialSpawnTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CooldownTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSpawnWhenNotInFrustum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowSpawnIfSpawnPointIsOccupied;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UWWEArenaItemParameters> InteractableWeaponParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    AWWEInteractableWeapon* InteractableWeaponOnSpawnPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bFirstWeaponSpawnRequested;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bFirstWeaponSpawnDone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTimerHandle SpawnTimerHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTimerHandle ResetLocationTimerHandle;
    
public:
    AWWEStandaloneWeaponSpawner();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
};

