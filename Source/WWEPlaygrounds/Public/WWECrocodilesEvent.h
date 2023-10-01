#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "EWWECrocodileEventState.h"
#include "WWECameraSequenceData.h"
#include "WWEInteractableMapItemInterface.h"
#include "WWELevelEvent.h"
#include "WWECrocodilesEvent.generated.h"

class AActor;
class ALevelSequenceActor;
class AWWECharacterCombat;
class UAnimMontage;
class UBoxComponent;
class ULevelSequencePlayer;
class UPrimitiveComponent;
class USBAnimInstance;
class USkeletalMeshComponent;
class USphereComponent;
class UWWEDynamicMaterialComponent;

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API AWWECrocodilesEvent : public AWWELevelEvent, public IWWEInteractableMapItemInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    ULevelSequencePlayer* LevelSequencePlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ALevelSequenceActor* SequenceActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    EWWECrocodileEventState State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    AWWECharacterCombat* InteractingCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* NearSphereComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* JawBoxComponent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWWECameraSequenceData CrocodileCameraSequenceData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* NearAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* AirAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeToIdleAirAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeToIdleNearAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBAnimInstance* AnimInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWEDynamicMaterialComponent* DynamicMaterialComponent;
    
public:
    AWWECrocodilesEvent();
protected:
    UFUNCTION(BlueprintCallable)
    void WaitIdleState(float TimeToWait);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnTriggerEnter(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnSequenceFinished();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastSetState(EWWECrocodileEventState NewState);
    
    
    // Fix for true pure virtual functions not being implemented
};

