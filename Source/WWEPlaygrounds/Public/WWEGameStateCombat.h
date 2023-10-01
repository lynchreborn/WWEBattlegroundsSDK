#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "ESBPopupSceneClosingReason.h"
#include "ESBTeam.h"
#include "EWWEActionTypes.h"
#include "EWWEGameplayState.h"
#include "OnCountdownEndEventDelegate.h"
#include "OnCountdownStartEventDelegate.h"
#include "Templates/SubclassOf.h"
#include "WWECountdownSettings.h"
#include "WWEGameStateGameplay.h"
#include "WWEGameStateCombat.generated.h"

class ALevelSequenceActor;
class APlayerState;
class ASBPlayerState;
class AWWECharacterCombat;
class AWWECommentatorManager;
class AWWECrowdMoodAmbientSound;
class AWWEInteractableWeapon;
class AWWEPhotomaton;
class AWWESteelCage;
class UAudioComponent;
class ULevelSequencePlayer;
class UMaterialInstanceDynamic;
class USoundMix;
class UWWETutorialPopupScreen;

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API AWWEGameStateCombat : public AWWEGameStateGameplay {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCountdownStartEvent OnStartEntranceCountdown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCountdownEndEvent OnEndEntranceCountdown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bDebugUseOutOfRingCountDown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AWWECommentatorManager> CommentatorClass;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EWWEGameplayState InitialGameplayState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bIsRingDestroyed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bIsCameraFlipped;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bSuccessLoadingSteelCage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_WrestlersCountdownSettingsReplicated, meta=(AllowPrivateAccess=true))
    TArray<int32> WrestlersCountdownSettingsReplicated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TArray<FWWECountdownSettings> WrestlersCountdownSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    AWWECommentatorManager* CommentatorManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    AWWECrowdMoodAmbientSound* SoundCrowdMood;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> TagsSoundCueCrowMood;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ElectricCageMinTimeout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ElectricCageMaxTimeout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ElectricCageWarningTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ElectricCageDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTimerHandle ElectricCageTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTimerHandle PhotomatonTimerHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AWWECharacterCombat* PhotomatonIsBussyForThisCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AWWESteelCage* CachedSteelCage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, ReplicatedUsing=OnRep_SteelCageMoney, meta=(AllowPrivateAccess=true))
    TArray<float> SteelCageMoney;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, ReplicatedUsing=OnRep_EntranceCountTime, meta=(AllowPrivateAccess=true))
    float EntranceCountdownStartTimeStamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    ALevelSequenceActor* LevelSequenceActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    ULevelSequencePlayer* LevelSequencePlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    UAudioComponent* EntranceAudioComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    UAudioComponent* EntranceCrowdAudioComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    UAudioComponent* EntranceCommentAudioComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    AWWEPhotomaton* PhotomatonCustomCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TArray<AWWECharacterCombat*> EndCustomCharacterPhotomaton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bCanSkipCinematicByTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeToCanSkipCinematic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundMix* EndMatchSoundMix;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* CameraBoostPPDynamic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bCameraBoostPPActivated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    float CameraBoostPPCurrentTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    float CurrentCameraBoostPPIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    AWWECharacterCombat* WinnerCharacterToPlayMusic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    float LastSignatureTimestamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bInitialCountDownIsFinished;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTimerHandle OpenTutorialTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    UWWETutorialPopupScreen* CurrentTutorialScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bAnyPlayerDisconnected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bInitialCountdownWasStarted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTimerHandle ResultScreenCheckHandle;
    
public:
    AWWEGameStateCombat();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void StopCharacterMusic(bool bUseFade, float FadeDuration);
    
protected:
    UFUNCTION(BlueprintCallable)
    void StartCountdownAfterLoading();
    
    UFUNCTION(BlueprintCallable)
    void SetCanSkipCinematicByTimerToTrue();
    
public:
    UFUNCTION(BlueprintCallable)
    void PlayCrowdChantEntrance(const AWWECharacterCombat* Character);
    
protected:
    UFUNCTION(BlueprintCallable)
    void PlayCharacterSequence();
    
public:
    UFUNCTION(BlueprintCallable)
    void PlayCameraShakeSequenceEvent(FName CameraShakeTag);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OpenTutorialWithDelay();
    
    UFUNCTION(BlueprintCallable)
    void OnTutorialPopupClosed(ESBPopupSceneClosingReason Reason);
    
    UFUNCTION(BlueprintCallable)
    void OnTutorialEndTransitionClosed();
    
    UFUNCTION(BlueprintCallable)
    void OnTimeDilationTransitionEnd(float TargetTimeDilation);
    
    UFUNCTION(BlueprintCallable)
    void OnSetTimeDilation(float TargetTimeDilation);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_WrestlersCountdownSettingsReplicated();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_SteelCageMoney();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_EntranceCountTime();
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerNicknameSanitized(ASBPlayerState* InPlayerState);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnExternalUIChange(bool bIsOpening);
    
    UFUNCTION(BlueprintCallable)
    void OnCharacterFinishedLoading(AWWECharacterCombat* CharacterCombat);
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NotifyAttackDone(AWWECharacterCombat* CharacterAttacker, AWWECharacterCombat* CharacterReceiver);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastSteelCageReset();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastSteelCageElectrify();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastSteelCageActivateSiren();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastRestartAmbientSound();
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastResetAllCharactersHair();
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastReassignPlayerSlotToAI(APlayerState* PlayerState, int32 NewPlayerId);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastPrepareCharacterAfterMatchHasStarted();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastPlayerDisconnected(ASBPlayerState* ExitingPlayerState);
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastOnCharacterFinishedLoading(AWWECharacterCombat* CharacterCombat);
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastMatchRestarted();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastMatchFinished(ESBTeam WinningTeam);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastDestroyedWeapon(AWWEInteractableWeapon* Weapon);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastCharacterDisconnected(ESBTeam _Team, AWWECharacterCombat* Character);
    
protected:
    UFUNCTION(BlueprintCallable)
    void InitialCharacterCommentSound(AWWECharacterCombat* Character);
    
public:
    UFUNCTION(BlueprintCallable)
    void DeactivateCameraBoostPostprocess();
    
    UFUNCTION()
    void CustomCharacterPhotomaton(AWWECharacterCombat* Character, uint32 IndexSettings);
    
protected:
    UFUNCTION(BlueprintCallable)
    void CheckResultScreen();
    
public:
    UFUNCTION()
    void CaptureCustomCharacterInCurrentPose(AWWECharacterCombat* Character, uint32 IndexSettings);
    
    UFUNCTION(BlueprintCallable)
    void ActivateCameraBoostPostprocess(EWWEActionTypes ActionType);
    
};

