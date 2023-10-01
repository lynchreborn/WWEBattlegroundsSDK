#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "WWEInteractableMapItemInterface.h"
#include "WWELCharacterInsideLavaInfo.h"
#include "WWELCharacterInsideLavaInfoClient.h"
#include "WWELavaPitColliders.h"
#include "WWELevelEvent.h"
#include "WWELavaPitEvent.generated.h"

class AActor;
class ALevelSequenceActor;
class AWWECharacterCombat;
class UAudioComponent;
class ULevelSequence;
class ULevelSequencePlayer;
class UPrimitiveComponent;
class USceneComponent;
class USoundCue;

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API AWWELavaPitEvent : public AWWELevelEvent, public IWWEInteractableMapItemInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USceneComponent* LavaRootComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<ULevelSequence>> LavaPitStartSequences;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<ULevelSequence>> LavaPitStopSequences;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ULevelSequence> TrainSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CooldownMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CooldownMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LavaPitTimeMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LavaPitTimeMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DelayActivateLavaPits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinLavaPitsActives;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxLavaPitsActives;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TotalOfLavaPits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LavaDamagePerSecond;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundCue> SoundLavaPit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundCue> SoundLavaPitEnds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundCue> SoundFireCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    FTimerHandle StartEventHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    FTimerHandle DelayActivateLavaPitsTimerHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    FTimerHandle StopEventHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TArray<FWWELavaPitColliders> LavaColliders;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TArray<FWWELCharacterInsideLavaInfo> CharactersInsideLava;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TArray<FWWELCharacterInsideLavaInfoClient> CharactersInsideLavaClient;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TArray<int32> ActiveLavaPits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TArray<ULevelSequence*> CachedLavaPitStartSequences;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TArray<ULevelSequence*> CachedLavaPitStopSequences;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    ULevelSequence* CachedTrainSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TArray<ULevelSequencePlayer*> LevelSequencePlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TArray<ALevelSequenceActor*> SequenceActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    ULevelSequencePlayer* TrainLevelSequencePlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    ALevelSequenceActor* TrainSequenceActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TMap<FString, UAudioComponent*> AudioComponentsFireCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    UAudioComponent* AudioComponentLavaPit;
    
public:
    AWWELavaPitEvent();
protected:
    UFUNCTION(BlueprintCallable)
    void WaitForMatchStart();
    
    UFUNCTION(BlueprintCallable)
    void StopLavaPitEvent();
    
    UFUNCTION(BlueprintCallable)
    void StartTrainSequence();
    
    UFUNCTION(BlueprintCallable)
    void StartLavaPitEvent();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnTriggerExit(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnTriggerEnter(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnSequenceFinished();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastStopTrainSequence();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastOnCharacterExitLava(AWWECharacterCombat* Character);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastOnCharacterEnterLava(AWWECharacterCombat* Character);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastDisableLavaPits();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastActivateTrainSequence();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastActivateLavaPits(const TArray<int32>& LavaPitsIndexes);
    
    
    // Fix for true pure virtual functions not being implemented
};

