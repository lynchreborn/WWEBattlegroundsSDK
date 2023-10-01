#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "EWWECoffinState.h"
#include "WWECameraSequenceData.h"
#include "WWEInteractableMapItemInterface.h"
#include "WWELevelEvent.h"
#include "WWECoffinEvent.generated.h"

class AActor;
class ALevelSequenceActor;
class AWWECharacterCombat;
class UAnimMontage;
class UBoxComponent;
class ULevelSequencePlayer;
class UPrimitiveComponent;
class USBAnimInstance;
class USkeletalMeshComponent;
class UWWEDynamicMaterialComponent;

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API AWWECoffinEvent : public AWWELevelEvent, public IWWEInteractableMapItemInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    ULevelSequencePlayer* LevelSequencePlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ALevelSequenceActor* SequenceActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    EWWECoffinState State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    AWWECharacterCombat* InteractingCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* CoffinBoxComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FlyToCoffinMaxHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CoffinMidsocketZOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FlightSpeed;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWWECameraSequenceData CoffinCameraSequenceData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* CoffinAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeToIdle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBAnimInstance* AnimInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWEDynamicMaterialComponent* DynamicMaterialComponent;
    
public:
    AWWECoffinEvent();
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
    void MulticastSetState(EWWECoffinState NewState);
    
    
    // Fix for true pure virtual functions not being implemented
};

