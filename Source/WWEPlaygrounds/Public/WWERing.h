#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "PGReadyToPlayInterface.h"
#include "EWWE3x3Cells.h"
#include "EWWEDirection.h"
#include "EWWERingPhysicsState.h"
#include "EWWERingRope.h"
#include "EWWERingState.h"
#include "EWWETurnbuckleLocation.h"
#include "WWEPhysicsHandleWithHandler.h"
#include "WWERopeSocketList.h"
#include "WWERing.generated.h"

class ATriggerBox;
class AWWECharacterCombat;
class UBoxComponent;
class UParticleSystemComponent;
class UPrimitiveComponent;
class USceneComponent;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API AWWERing : public AActor, public IPGReadyToPlayInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector RopeInertiaTensorScaleWithAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USceneComponent* RingRootComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* FL_LeftApronPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* FL_RightApronPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* FR_LeftApronPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* FR_RightApronPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* BL_LeftApronPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* BL_RightApronPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* BR_LeftApronPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* BR_RightApronPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* LeftBackCornerEntry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* BackRightCornerEntry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* RightFrontCornerEntry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* FrontLeftCornerEntry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TArray<UParticleSystemComponent*> VictoryParticleComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UBoxComponent* StageComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TMap<EWWEDirection, UBoxComponent*> WallComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<EWWEDirection, ATriggerBox*> OutsideWallComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TMap<EWWEDirection, UBoxComponent*> TriggerComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TMap<EWWEDirection, UBoxComponent*> EntryComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<EWWETurnbuckleLocation, FVector> CornerLocations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FWWEPhysicsHandleWithHandler> PhysicsHandles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 LastPhysicsHandleID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<EWWERingRope, FWWERopeSocketList> RopeSockets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 DynamicSocketNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<EWWETurnbuckleLocation> TurnbuckleBussy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<EWWE3x3Cells, FVector> CellLocations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FName> RopesOnCheck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    float Health;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    float MaxHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bEnabledRingDestruction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    EWWERingState State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    int32 RopesBlinkCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    int32 PostsBlinkCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebug;
    
public:
    AWWERing();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void ResetPhysics();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnTriggerExit(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnTriggerEnter(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintCallable)
    void OnRopeHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable)
    void OnMatchRestarted();
    
    UFUNCTION(BlueprintCallable)
    void OnMatchFinished(const AWWECharacterCombat* WinnerCharacter);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastReceiveExplosionInTurnbuckle(const EWWETurnbuckleLocation& Location, bool bDetachRopes, bool bSpawnWeapon, EWWERingPhysicsState PhysicsState);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastReceiveExplosion(const FVector& Location, float Radius, bool bDetachRopes, bool bSpawnWeapon, EWWERingPhysicsState PhysicsState);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastDamageRing(float Damage);
    
    UFUNCTION(BlueprintCallable)
    void EnableBody(const USkeletalMeshComponent* Mesh, const FName& BoneName, bool Enable);
    
    UFUNCTION(BlueprintCallable)
    void DisableAndRestoreBody(const USkeletalMeshComponent* Mesh, const FName& BoneName, float Seconds);
    
    UFUNCTION(BlueprintCallable)
    void CheckBodyPosition(const USkeletalMeshComponent* Mesh, const FName& BoneName, bool BreakOnBadPosition, float Seconds);
    
    
    // Fix for true pure virtual functions not being implemented
};

