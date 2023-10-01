#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "EWWEBagpiperStates.h"
#include "WWEInteractableMapItemInterface.h"
#include "WWEBagpiper.generated.h"

class AWWEInteractableWeapon;
class UAnimMontage;
class UChildActorComponent;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API AWWEBagpiper : public AActor, public IWWEInteractableMapItemInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLimitSpawneableBagpipes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxSpawneableBagpipes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AttachSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor BagpipesBlinkColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* MainSM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* BagpipesSkeletalMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UChildActorComponent* WeaponSpawnerChildActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* NewPipeAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* BagpipeStolenAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* WokeUpAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* GoToSleepAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* BagpipesNewPipeAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* BagpipesBagpipeStolenAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* BagpipesWokeUpAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* BagpipesGoToSleepAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    AWWEInteractableWeapon* CurrentBagpipes;
    
public:
    AWWEBagpiper();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION()
    void WaitNextState(float TimeToWait, EWWEBagpiperStates NewState);
    
    UFUNCTION(BlueprintCallable)
    void WaitAnimInstanceState(float WaitTime, bool bIsPlaying, bool bIsAwake);
    
    UFUNCTION()
    void OnEndGetNewBagpipeAnim(UAnimMontage* AnimMontage, bool bInterrupted, EWWEBagpiperStates NewState);
    
    UFUNCTION(NetMulticast, Reliable)
    void MulticastSetState(EWWEBagpiperStates NewState);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastSetBagpipesProperties(AWWEInteractableWeapon* Bagpipes);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastChangeAnimInstanceStates(bool bIsPlaying, bool bIsAwake);
    
    UFUNCTION(BlueprintCallable)
    void InitBagpiper();
    
    UFUNCTION(BlueprintCallable)
    void GetNewBagpipes();
    
    
    // Fix for true pure virtual functions not being implemented
};

