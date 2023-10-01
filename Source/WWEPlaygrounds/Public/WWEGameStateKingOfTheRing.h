#pragma once
#include "CoreMinimal.h"
#include "ESBTeam.h"
#include "EWWEActionNodeResult.h"
#include "WWEGameStateCombat.h"
#include "WWEPointsForKickOut.h"
#include "WWEGameStateKingOfTheRing.generated.h"

class AWWECharacterCombat;
class AWWEPlayerStateGameplay;
class UWWEActionNode;
class UWWEHUDKingOfTheRingWidget;

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API AWWEGameStateKingOfTheRing : public AWWEGameStateCombat {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxPlayersFighting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PointsForSecond;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWWEPointsForKickOut> PointsForKickOut;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_NextPlayerIdToFight, meta=(AllowPrivateAccess=true))
    int32 NextPlayerIdToFight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    int32 HotjoinPlayerIdToFight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_OnRingPlayerStates, meta=(AllowPrivateAccess=true))
    TArray<AWWEPlayerStateGameplay*> OnRingPlayerStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<AWWEPlayerStateGameplay*> OnWaitingPlayerStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_PlayerToRingCountdownTime, meta=(AllowPrivateAccess=true))
    int32 PlayerToRingCountdownTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeToTeleportNextFighter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeDoingTeleportToRing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeHotjoinToRing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeDelayTeleportToRing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWWEHUDKingOfTheRingWidget* HUDKingOfTheRingWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TArray<AWWECharacterCombat*> HotjoinCharactersToRingList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bHotjoinCountdownActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bCountdownActive;
    
    UPROPERTY(EditAnywhere, Transient, ReplicatedUsing=OnRep_CountdownTimerUpdated, meta=(AllowPrivateAccess=true))
    uint32 CountdownTimer;
    
public:
    AWWEGameStateKingOfTheRing();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateKOTBCountdown();
    
public:
    UFUNCTION(BlueprintCallable)
    void ServerDestroyCharacterWhenReady(UWWEActionNode* ActionNode, EWWEActionNodeResult Result, bool bFirstActionOfStack);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ResetCounter(bool bFirstTime);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_PlayerToRingCountdownTime();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_OnRingPlayerStates();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_NextPlayerIdToFight();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CountdownTimerUpdated();
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastShowResetRewardsOnEndCountdown(int32 PlayerId);
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastSetPlayerWinning(AWWEPlayerStateGameplay* WinnerPlayerState);
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastResetPlayerStateStats();
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastPlayerWaitingToRing(AWWEPlayerStateGameplay* PlayerState);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastPlayerFinishMatch(AWWEPlayerStateGameplay* PlayerState);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastOnClearSlot(int32 PlayerSlotId);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastOnCharacterLoseGame(ESBTeam _Team, AWWECharacterCombat* Character, AWWEPlayerStateGameplay* PlayerState);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastDestroyCharacterWhenReady(AWWECharacterCombat* CharacterCombat, const bool bForceDestroy);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastAddPlayerToWainting(AWWEPlayerStateGameplay* PlayerState);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastAddPlayerToRing(AWWEPlayerStateGameplay* PlayerState, const bool bFromHotjoin);
    
};

