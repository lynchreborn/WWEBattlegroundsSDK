#include "WWEGameStateCombat.h"
#include "Net/UnrealNetwork.h"

void AWWEGameStateCombat::StopCharacterMusic(bool bUseFade, float FadeDuration) {
}

void AWWEGameStateCombat::StartCountdownAfterLoading() {
}

void AWWEGameStateCombat::SetCanSkipCinematicByTimerToTrue() {
}

void AWWEGameStateCombat::PlayCrowdChantEntrance(const AWWECharacterCombat* Character) {
}

void AWWEGameStateCombat::PlayCharacterSequence() {
}

void AWWEGameStateCombat::PlayCameraShakeSequenceEvent(FName CameraShakeTag) {
}

void AWWEGameStateCombat::OpenTutorialWithDelay() {
}

void AWWEGameStateCombat::OnTutorialPopupClosed(ESBPopupSceneClosingReason Reason) {
}

void AWWEGameStateCombat::OnTutorialEndTransitionClosed() {
}

void AWWEGameStateCombat::OnTimeDilationTransitionEnd(float TargetTimeDilation) {
}

void AWWEGameStateCombat::OnSetTimeDilation(float TargetTimeDilation) {
}

void AWWEGameStateCombat::OnRep_WrestlersCountdownSettingsReplicated() {
}

void AWWEGameStateCombat::OnRep_SteelCageMoney() {
}

void AWWEGameStateCombat::OnRep_EntranceCountTime() {
}

void AWWEGameStateCombat::OnPlayerNicknameSanitized(ASBPlayerState* InPlayerState) {
}

void AWWEGameStateCombat::OnExternalUIChange(bool bIsOpening) {
}

void AWWEGameStateCombat::OnCharacterFinishedLoading(AWWECharacterCombat* CharacterCombat) {
}

void AWWEGameStateCombat::NotifyAttackDone_Implementation(AWWECharacterCombat* CharacterAttacker, AWWECharacterCombat* CharacterReceiver) {
}

void AWWEGameStateCombat::MulticastSteelCageReset_Implementation() {
}

void AWWEGameStateCombat::MulticastSteelCageElectrify_Implementation() {
}

void AWWEGameStateCombat::MulticastSteelCageActivateSiren_Implementation() {
}

void AWWEGameStateCombat::MulticastRestartAmbientSound_Implementation() {
}

void AWWEGameStateCombat::MulticastResetAllCharactersHair_Implementation() {
}

void AWWEGameStateCombat::MulticastReassignPlayerSlotToAI_Implementation(APlayerState* PlayerState, int32 NewPlayerId) {
}

void AWWEGameStateCombat::MulticastPrepareCharacterAfterMatchHasStarted_Implementation() {
}

void AWWEGameStateCombat::MulticastPlayerDisconnected_Implementation(ASBPlayerState* ExitingPlayerState) {
}

void AWWEGameStateCombat::MulticastOnCharacterFinishedLoading_Implementation(AWWECharacterCombat* CharacterCombat) {
}

void AWWEGameStateCombat::MulticastMatchRestarted_Implementation() {
}

void AWWEGameStateCombat::MulticastMatchFinished_Implementation(ESBTeam WinningTeam) {
}

void AWWEGameStateCombat::MulticastDestroyedWeapon_Implementation(AWWEInteractableWeapon* Weapon) {
}

void AWWEGameStateCombat::MulticastCharacterDisconnected_Implementation(ESBTeam _Team, AWWECharacterCombat* Character) {
}

void AWWEGameStateCombat::InitialCharacterCommentSound(AWWECharacterCombat* Character) {
}

void AWWEGameStateCombat::DeactivateCameraBoostPostprocess() {
}

void AWWEGameStateCombat::CustomCharacterPhotomaton(AWWECharacterCombat* Character, uint32 IndexSettings) {
}

void AWWEGameStateCombat::CheckResultScreen() {
}

void AWWEGameStateCombat::CaptureCustomCharacterInCurrentPose(AWWECharacterCombat* Character, uint32 IndexSettings) {
}

void AWWEGameStateCombat::ActivateCameraBoostPostprocess(EWWEActionTypes ActionType) {
}

void AWWEGameStateCombat::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AWWEGameStateCombat, bIsRingDestroyed);
    DOREPLIFETIME(AWWEGameStateCombat, bIsCameraFlipped);
    DOREPLIFETIME(AWWEGameStateCombat, WrestlersCountdownSettingsReplicated);
    DOREPLIFETIME(AWWEGameStateCombat, SteelCageMoney);
    DOREPLIFETIME(AWWEGameStateCombat, EntranceCountdownStartTimeStamp);
}

AWWEGameStateCombat::AWWEGameStateCombat() {
    this->bDebugUseOutOfRingCountDown = true;
    this->CommentatorClass = NULL;
    this->InitialGameplayState = EWWEGameplayState::FightingAndMoving;
    this->bIsRingDestroyed = false;
    this->bIsCameraFlipped = false;
    this->bSuccessLoadingSteelCage = false;
    this->CommentatorManager = NULL;
    this->SoundCrowdMood = NULL;
    this->ElectricCageMinTimeout = 60.00f;
    this->ElectricCageMaxTimeout = 120.00f;
    this->ElectricCageWarningTime = 3.00f;
    this->ElectricCageDuration = 5.00f;
    this->PhotomatonIsBussyForThisCharacter = NULL;
    this->CachedSteelCage = NULL;
    this->EntranceCountdownStartTimeStamp = 0.00f;
    this->LevelSequenceActor = NULL;
    this->LevelSequencePlayer = NULL;
    this->EntranceAudioComponent = NULL;
    this->EntranceCrowdAudioComponent = NULL;
    this->EntranceCommentAudioComponent = NULL;
    this->PhotomatonCustomCharacter = NULL;
    this->bCanSkipCinematicByTimer = false;
    this->TimeToCanSkipCinematic = 0.75f;
    this->EndMatchSoundMix = NULL;
    this->CameraBoostPPDynamic = NULL;
    this->bCameraBoostPPActivated = false;
    this->CameraBoostPPCurrentTime = 0.00f;
    this->CurrentCameraBoostPPIntensity = 0.00f;
    this->WinnerCharacterToPlayMusic = NULL;
    this->LastSignatureTimestamp = 0.00f;
    this->bInitialCountDownIsFinished = false;
    this->CurrentTutorialScreen = NULL;
    this->bAnyPlayerDisconnected = false;
    this->bInitialCountdownWasStarted = false;
}

