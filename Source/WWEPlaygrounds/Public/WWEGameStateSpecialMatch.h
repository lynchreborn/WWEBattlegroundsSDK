#pragma once
#include "CoreMinimal.h"
#include "ESBTeam.h"
#include "WWEGameStateCombat.h"
#include "WWEGameStateSpecialMatch.generated.h"

class UWWENextRivalWidget;
class UWWEPlayerSlot;
class UWWERivalsCounter;

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API AWWEGameStateSpecialMatch : public AWWEGameStateCombat {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TArray<UWWEPlayerSlot*> PendingPlayerSlotsToSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, ReplicatedUsing=OnRep_CountdownToSpawnReplicated, meta=(AllowPrivateAccess=true))
    int32 CountdownToSpawnReplicated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    int32 CountdownToSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeDurationSecondsCountDown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxSecondsCountdownToSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 IfThereAreFourWrestlersStopCountdownAt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumRandomWrestlersToSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    UWWENextRivalWidget* NextRivalWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    UWWERivalsCounter* RivalsCounterWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    uint8 MaxRivals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bWantToLoadNextCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bReadyToSpawnCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bCharacterFinishInPhotomaton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    UWWEPlayerSlot* PlayerSlotToSpawn;
    
public:
    AWWEGameStateSpecialMatch();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_CountdownToSpawnReplicated();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastSetTeamToPlayerSlot(const int32 IndexPlayerSlot, const ESBTeam Team);
    
};

