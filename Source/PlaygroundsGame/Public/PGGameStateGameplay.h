#pragma once
#include "CoreMinimal.h"
#include "ESBTeam.h"
#include "SBGameStateGameplay.h"
#include "PGRepGameplayPlayerSlot.h"
#include "Templates/SubclassOf.h"
#include "PGGameStateGameplay.generated.h"

class APGCameraGameplay;
class APGCrowdManager;
class APGLevelSequenceActor;
class ULevelStreamingDynamic;

UCLASS(Blueprintable)
class PLAYGROUNDSGAME_API APGGameStateGameplay : public ASBGameStateGameplay {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ULevelStreamingDynamic*> RequiredArenaLevelsToLoad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APGLevelSequenceActor* StartupSequenceActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<APGLevelSequenceActor*> CinematicSequenceActors;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_TeamScores, meta=(AllowPrivateAccess=true))
    TArray<int32> TeamScores;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_TeamRounds, meta=(AllowPrivateAccess=true))
    TArray<int32> TeamRounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_TeamCurrencies, meta=(AllowPrivateAccess=true))
    TArray<int32> TeamCurrencies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APGCrowdManager* CrowdManager;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    int32 RemainingTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bWantsToStartMatch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_SurrenderTeam, meta=(AllowPrivateAccess=true))
    ESBTeam SurrenderTeam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<APGCameraGameplay>> CameraClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<APGCameraGameplay*> CameraGameplay;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSpawnPawns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bWasSendGameplayPlayerSlots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bWasReceivedGameplayPlayerSlots;
    
    APGGameStateGameplay();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool TeamScoresAreZero() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool TeamScoresAreEqual() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool TeamRoundsAreZero() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool TeamRoundsAreEqual() const;
    
    UFUNCTION(BlueprintCallable)
    void SetSurrenderTeam(ESBTeam SurrenderTeamIn);
    
    UFUNCTION(BlueprintCallable)
    void ResetTeamScores();
    
    UFUNCTION(BlueprintCallable)
    void ResetTeamRounds();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_TeamScores();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_TeamRounds();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_TeamCurrencies();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SurrenderTeam();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastAddPlayerSlotsPG(const TArray<FPGRepGameplayPlayerSlot>& RepGameplayPlayerSlots);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESBTeam GetWinningTeam(bool bIgnoreRounds, bool bIgnoreSurrender) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTotalRoundsPlayed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESBTeam GetSurrenderTeam() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESBTeam GetLosingTeam(bool bIgnoreRounds, bool bIgnoreSurrender) const;
    
};

