#include "WWECharacterCombat.h"
#include "SBBlinkComponent.h"
#include "SBFresnelComponent.h"
#include "Net/UnrealNetwork.h"
#include "WWEAIAggroComponent.h"
#include "WWECharismaComponent.h"
#include "WWEDynamicMaterialComponent.h"

void AWWECharacterCombat::UsePowerUpSlotCheat_Implementation(UWWEPowerUpBase* PowerUp, bool bNoCoolDown) {
}
bool AWWECharacterCombat::UsePowerUpSlotCheat_Validate(UWWEPowerUpBase* PowerUp, bool bNoCoolDown) {
    return true;
}

void AWWECharacterCombat::TryToCaptureCustomCharacterPhotomaton() {
}

void AWWECharacterCombat::StopFresnel() {
}

void AWWECharacterCombat::ServerWantToBlock_Implementation(bool bLock) {
}
bool AWWECharacterCombat::ServerWantToBlock_Validate(bool bLock) {
    return true;
}

void AWWECharacterCombat::ServerSetRandomActionType_Implementation(EWWEActionTypes ActionType) {
}
bool AWWECharacterCombat::ServerSetRandomActionType_Validate(EWWEActionTypes ActionType) {
    return true;
}

void AWWECharacterCombat::ServerSetInputAxis_Implementation(FVector Axis, FVector RawAxis) {
}
bool AWWECharacterCombat::ServerSetInputAxis_Validate(FVector Axis, FVector RawAxis) {
    return true;
}

void AWWECharacterCombat::ServerChangeTargetRivalWithDirection_Implementation(FVector Direction) {
}
bool AWWECharacterCombat::ServerChangeTargetRivalWithDirection_Validate(FVector Direction) {
    return true;
}

void AWWECharacterCombat::ServerChangeTargetRival_Implementation() {
}
bool AWWECharacterCombat::ServerChangeTargetRival_Validate() {
    return true;
}

void AWWECharacterCombat::ResetStunnedAfterStandUp() {
}

void AWWECharacterCombat::ResetReducedSpeedModifier() {
}

void AWWECharacterCombat::ResetReceiveHitComboCount() {
}

void AWWECharacterCombat::ReleaseFromReceiveCarryCharacter(bool B) {
}

void AWWECharacterCombat::OnRep_TargetRival(const AWWECharacterCombat* PrevTargetRival) {
}

void AWWECharacterCombat::OnRep_InstigatorRival(AWWECharacterCombat* PrevInstigatorRival) {
}

void AWWECharacterCombat::OnReadyToStartMatch() {
}

void AWWECharacterCombat::OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void AWWECharacterCombat::OnCapsuleHitEvent(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}

void AWWECharacterCombat::MulticastTeleportCharacterToRing_Implementation(FVector Location) {
}

void AWWECharacterCombat::MulticastSetTargetRival_Implementation(AWWECharacterCombat* Rival, bool bShowOnHUD, bool bRotateTo, FVector Location) {
}

void AWWECharacterCombat::MulticastSetRootMotionMode_Implementation(TEnumAsByte<ERootMotionMode::Type> Value) {
}

void AWWECharacterCombat::MulticastSetReducedSpeedModifierInTargetRival_Implementation(float ModifierFactor) {
}

void AWWECharacterCombat::MulticastSetReducedDamageModifier_Implementation(float ModifierFactor) {
}

void AWWECharacterCombat::MulticastSetRecoveryHealthModifier_Implementation(float ModifierFactor) {
}

void AWWECharacterCombat::MulticastSetPlaneConstraintEnabled_Implementation(bool bEnabled) {
}

void AWWECharacterCombat::MulticastSetOnCageWallForGrabExit_Implementation() {
}

void AWWECharacterCombat::MulticastSetInputAxis_Implementation(FVector Axis, FVector RawAxis) {
}

void AWWECharacterCombat::MulticastSetIncreaseInputModifier_Implementation(float ModifierFactor, const UWWEActionNode* InBindedAction) {
}

void AWWECharacterCombat::MulticastSetIncapacitateUsePowerUpsModifier_Implementation() {
}

void AWWECharacterCombat::MulticastSetFreezeOnFloor_Implementation(bool bFreeze) {
}

void AWWECharacterCombat::MulticastSetFillMiniGame_Implementation(bool bEnable) {
}

void AWWECharacterCombat::MulticastSetDamageWeaponsModifier_Implementation(float ModifierFactor) {
}

void AWWECharacterCombat::MulticastSetDamageToReflectModifier_Implementation(float ModifierFactor) {
}

void AWWECharacterCombat::MulticastSetDamageToDoModifier_Implementation(float ModifierFactor) {
}

void AWWECharacterCombat::MulticastSetDamageToComboHitModifier_Implementation(float ModifierFactor, float TimeDilationModifier) {
}

void AWWECharacterCombat::MulticastSaveChosenActionType_Implementation(EWWEActionTypes ActionType) {
}

void AWWECharacterCombat::MulticastRestoreCollisionAfterCurrentFlight_Implementation() {
}

void AWWECharacterCombat::MulticastPrepareTeleportCharacterToRing_Implementation() {
}

void AWWECharacterCombat::MulticastPlaySequenceIndex_Implementation(int32 Index) {
}

void AWWECharacterCombat::MulticastPickUpGroundMoney_Implementation(AWWEMoneySack* MoneySack) {
}

void AWWECharacterCombat::MulticastOnExitRingTriggerZone_Implementation(EWWEDirection NewWall) {
}

void AWWECharacterCombat::MulticastOnExitRingEntryZone_Implementation(EWWEDirection NewWall) {
}

void AWWECharacterCombat::MulticastOnEnterRingTriggerZone_Implementation(EWWEDirection NewWall) {
}

void AWWECharacterCombat::MulticastOnEnterRingEntryZone_Implementation(EWWEDirection NewWall) {
}

void AWWECharacterCombat::MulticastOnCharacterLoseGame_Implementation() {
}

void AWWECharacterCombat::MulticastGainHealth_Implementation(float LifePoints) {
}

void AWWECharacterCombat::MulticastFeedbackReleaseFromCarriedByCharacter_Implementation(bool _bFeedbackReleaseFromCarriedByCharacter) {
}

void AWWECharacterCombat::MulticastDrainStaminaToRivals_Implementation(float StaminaPercentage) {
}

void AWWECharacterCombat::MulticastChangeCharacterState_Implementation(EWWECharacterState NewState) {
}

void AWWECharacterCombat::MulticastActiveUnstoppableMode_Implementation() {
}

void AWWECharacterCombat::MulticastActiveInmunityMode_Implementation() {
}

void AWWECharacterCombat::MulticastActiveImpossibleToDoCounterModifier_Implementation() {
}

void AWWECharacterCombat::MulticastActiveBrawlerSuccessionWeapon_Implementation(AWWEInteractableWeapon* _Weapon) {
}

void AWWECharacterCombat::HideCounterButton() {
}

void AWWECharacterCombat::EndDynamicMaterial() {
}

void AWWECharacterCombat::EnableSprintByTime() {
}

void AWWECharacterCombat::DenyTauntTurnbuckleBecauseThrow() {
}

void AWWECharacterCombat::ClientSetCharacterAndRingBlink_Implementation(const float Time, const FLinearColor LinearColor, const float BlinkInterval, AWWECharacterCombat* CharacterToBlink, const EWWERingBlink RingBlink, const bool bEnable) {
}

void AWWECharacterCombat::CheckSpecialMatchLoseGame() {
}

void AWWECharacterCombat::CheckPlayCameraSequence() {
}

void AWWECharacterCombat::CheckIfCanPlayCommentOfCurrentInteractableWeapon() {
}

void AWWECharacterCombat::ChangeCharacterState(EWWECharacterState NewState) {
}

void AWWECharacterCombat::BeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AWWECharacterCombat::AutoStandUpActionByTime(bool bForceToStandUp) {
}

void AWWECharacterCombat::AutoStandUpAction(bool bForceToStandUp) {
}

void AWWECharacterCombat::ActiveMaximumPowerPointsCheat_Implementation() {
}
bool AWWECharacterCombat::ActiveMaximumPowerPointsCheat_Validate() {
    return true;
}

void AWWECharacterCombat::ActiveMaximumHeatPointsCheat_Implementation() {
}
bool AWWECharacterCombat::ActiveMaximumHeatPointsCheat_Validate() {
    return true;
}

void AWWECharacterCombat::ActiveConcretePowerUpCheat_Implementation(UWWEPowerUpBase* PowerUp, bool bNoCoolDown) {
}
bool AWWECharacterCombat::ActiveConcretePowerUpCheat_Validate(UWWEPowerUpBase* PowerUp, bool bNoCoolDown) {
    return true;
}

void AWWECharacterCombat::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AWWECharacterCombat, CharismaComponent);
    DOREPLIFETIME(AWWECharacterCombat, OwnSpecialWeapon);
    DOREPLIFETIME(AWWECharacterCombat, TargetRival);
    DOREPLIFETIME(AWWECharacterCombat, InstigatorRival);
    DOREPLIFETIME(AWWECharacterCombat, ActionComponent);
    DOREPLIFETIME(AWWECharacterCombat, bIsInSprint);
    DOREPLIFETIME(AWWECharacterCombat, bIsBlocking);
    DOREPLIFETIME(AWWECharacterCombat, bWantToBlock);
    DOREPLIFETIME(AWWECharacterCombat, ClimbInput);
    DOREPLIFETIME(AWWECharacterCombat, CurrentCountMiniGame);
    DOREPLIFETIME(AWWECharacterCombat, ExtraCountMiniGame);
    DOREPLIFETIME(AWWECharacterCombat, InRangeWeapons);
}

AWWECharacterCombat::AWWECharacterCombat() {
    this->CrosshairSpeedMultiplier = 3.00f;
    this->bSequencePlayed = false;
    this->bCinematicPlayed = false;
    this->CachedCageWallDirection = EWWEDirection::None;
    this->bFacingClockwise = false;
    this->CurrentMatchMode = ESBMatchMode::None;
    this->bCanPinInsideRing = true;
    this->bCanPinOutsideRing = true;
    this->bCountDownOutsideRing = true;
    this->AIAggroComponent = CreateDefaultSubobject<UWWEAIAggroComponent>(TEXT("AI Aggro Component"));
    this->bCharacterWasFinishedLoading = false;
    this->CharismaComponent = CreateDefaultSubobject<UWWECharismaComponent>(TEXT("Charisma Component"));
    this->OwnSpecialWeapon = NULL;
    this->CurrentBrawlerWeapon = NULL;
    this->bShowDebugTrajectories = false;
    this->HeadLookAtInterpolationSpeed = 16.00f;
    this->SpineLookAtInterpolationSpeed = 15.00f;
    this->MovementYawSpeed = 400.00f;
    this->ReceiveHitYawSpeed = 1700.00f;
    this->RotateToYawSpeed = 800.00f;
    this->UpDownRingYawSpeed = 1500.00f;
    this->FlyYawSpeed = 200.00f;
    this->AngleThresholdToRotateOnBlock = 20.00f;
    this->NormalSpeed = 0.00f;
    this->SprintSpeed = 0.00f;
    this->CannotSprintByTimeSpeed = 100.00f;
    this->AfterReboundSprintSpeed = 0.00f;
    this->IrishWhipSprintSpeed = 0.00f;
    this->CarryingHeavyWeaponSpeed = 0.00f;
    this->CarryingOtherCharacterSpeed = 0.00f;
    this->BackwardSpeed = 0.00f;
    this->ApronSpeed = 0.00f;
    this->CageTopSpeed = 0.00f;
    this->MultiplierBlockSpeed = 0.00f;
    this->MinSprintTimeToShove = 0.60f;
    this->StunnedAfterStandUpTimeout = 2.00f;
    this->MaxDistanceRunningThrow = 300.00f;
    this->MaxAngleRunningThrow = 40.00f;
    this->MaxDistanceToRopesInSpringboard = 450.00f;
    this->MaxAngleToTargetRivalInSpringboard = 140.00f;
    this->MaxDistanceToTargetRivalInSpringboard = 450.00f;
    this->MaxDistanceTurnbuckleHit = 100.00f;
    this->PercentageOfTimeToEnqueAction = 0.50f;
    this->MaxClimbHeight = 515.00f;
    this->LimitCageZ = 700.00f;
    this->CageWidth = 430.00f;
    this->MinClimbHeight = 300.00f;
    this->CageHalfLength = 450.00f;
    this->CharacterScaleOffset = 50.00f;
    this->SwitchWallTriggerOffset = -30.00f;
    this->SwitchTopTriggerOffset = -45.00f;
    this->MaxTopRopesOutsideAngle = 75.00f;
    this->bRestoreCharacterCollisionWhenNoOverlap = false;
    this->bRestoreCharacterCollisionWhenNoOverlapWalls = false;
    this->bRestoreCharacterCollisionWhenNoOverlapObjects = false;
    this->CachedCapsuleComp = NULL;
    this->ResidualPlayerController = NULL;
    this->MovementLocked = 0;
    this->OwnedWeapon = NULL;
    this->ThrowWeaponAutoTargetAngle = 25.00f;
    this->ThrowCharacterAutoTargetAngle = 25.00f;
    this->RivalAngleToRotateWhenHitWithWeapon = 180.00f;
    this->RivalDistanceToRotateWhenHitWithWeapon = 200.00f;
    this->PinMinigameSound = NULL;
    this->TimeToPickUpMoney = 3.00f;
    this->bIsPickingUpMoney = false;
    this->BlinkIntervalTime = 0.30f;
    this->bBlinkFlag = false;
    this->bPendingToDestroy = false;
    this->bCanDestroyInKOTR = false;
    this->bCanReceiveAnyHit = false;
    this->BlinkComponent = CreateDefaultSubobject<USBBlinkComponent>(TEXT("BlinkComponent"));
    this->FresnelComponent = CreateDefaultSubobject<USBFresnelComponent>(TEXT("FresnelComponent"));
    this->BlinkDynamicMaterialComponent = CreateDefaultSubobject<UWWEDynamicMaterialComponent>(TEXT("BlinkDynamicMaterialComponent"));
    this->bIsSprintParticleActive = false;
    this->CachedCarryRival = NULL;
    this->TargetRival = NULL;
    this->InstigatorRival = NULL;
    this->LastInstigatorRival = NULL;
    this->SpecialThrowTarget = NULL;
    this->SpecialTopRopesTarget = NULL;
    this->TargetWeapon = NULL;
    this->AIHeadBehaviourComponent = NULL;
    this->CrosshairComponent = NULL;
    this->ActionComponent = NULL;
    this->PhysicalAnimationComponent = NULL;
    this->HairPhysicalAnimationComponent = NULL;
    this->SweepComponent = NULL;
    this->TargetRivalIndex = -1;
    this->bPinLoser = false;
    this->MatchResult = EWWECharacterMatchResult::Unfinished;
    this->ReceiveHitPower = EWWEPowerAction::COUNT;
    this->HitVariation = -1;
    this->ConfiguredHitVariation = -1;
    this->HitSectionIndex = -1;
    this->CounterVariation = -1;
    this->ServerNextThrowVariation = -1;
    this->ServerCounteractThrowVariation = -1;
    this->PotentialSignatureMoveIndex = -1;
    this->CurrentSignatureMoveIndex = -1;
    this->CurrentSignatureVariationIndex = -1;
    this->CurrentAutoMoveLocation = EWWEAutoMoveKeyLocation::None;
    this->bFailedNoStamina = false;
    this->bIsBeingCarriedByAnotherCharacter = false;
    this->bIsBeingSpecialCarriedByAnotherCharacter = false;
    this->bFeedbackReleaseFromCarriedByCharacter = false;
    this->bIsCarryingACharacter = false;
    this->bIsSpecialCarryingACharacter = false;
    this->RandomActionType = EWWEActionTypes::None;
    this->ChosenActionType = EWWEActionTypes::None;
    this->InputActionResult = EWWEInputResult::None;
    this->LastRandomHUDActionType = EWWEActionTypes::None;
    this->bIsCharacterFaceUp = false;
    this->bIsInSprint = false;
    this->bIsInSprintAfterRebound = false;
    this->TimeSprinting = 0.00f;
    this->bShouldShoveInSprint = false;
    this->bIsBlocking = false;
    this->bCanPerformCounteractAfterBlocking = false;
    this->bCanBlockInCurrentAnimation = false;
    this->bWantToBlock = false;
    this->bCurrentBlockBreaked = false;
    this->bWantToRotateInBlock = false;
    this->bForceSprint = false;
    this->bForceOrientation = false;
    this->bForceYawCorrection = false;
    this->ForceYawCorrectionSpeed = 0.00f;
    this->ForceYawCorrectionDegrees = 0.00f;
    this->bPretendGetOutOfApronToRing = false;
    this->InputDirection = EWWEDirection::None;
    this->bIsOnTurnbuckleMinigameStunned = false;
    this->ForceActorToOrientation = NULL;
    this->bWaitingToThrowInProgress = false;
    this->bUseTranslationCurveForRotation = false;
    this->bCheckCollisionToBreakAdjustLocation = false;
    this->bBreakAdjustLocationByCollision = false;
    this->AttachedActorWithTranslationBone = EWWEAttachedActorWithTranslationBone::TargetRival;
    this->bDenyRotationByAnim = false;
    this->bHasDumpNotifyWithoutConsume = false;
    this->bHasStandUpStunnedNotifyWithoutConsume = false;
    this->bAutoStandUpInstantly = false;
    this->bTempModifiedHarshlyRopeCollision = false;
    this->bTempDisabledHarshlyRopeCollision = false;
    this->bOnRingBeforeApron = false;
    this->TimeToResetComboActionIndex = 0.30f;
    this->TimeToResetReceiveHitComboCount = 1.50f;
    this->TimeBetweenGrabActionAndThrowAction = 0.70f;
    this->TimeToBreakBlock = 1.00f;
    this->TimeDurationFeedbackReleaseFromCarriedByCharacter = 0.40f;
    this->TimeDurationFirstSec = 1.00f;
    this->TimeDurationSecondSec = 1.00f;
    this->TimeDurationThirdSec = 1.00f;
    this->TimeDurationBellSec = 0.20f;
    this->TimeDurationEndSec = 0.01f;
    this->bInMiniGame = false;
    this->bFillMiniGame = false;
    this->bStandUpByTime = false;
    this->MiniGameCountdown = 0.00f;
    this->CurrentCountMiniGame = 0.00f;
    this->ExtraCountMiniGame = 0.00f;
    this->MaxCountNeededMiniGame = 10.00f;
    this->MinCountNeededMiniGame = 2.00f;
    this->ExtraIncrementCountMiniGame = 10.00f;
    this->DistanceToTravel = 230.00f;
    this->MaxDistancePullFromTurnbuckle = 250.00f;
    this->ImpulseToAddToMainTurnbuckle = 1000.00f;
    this->ImpulseToAddToSecondaryTurnbuckle = 500.00f;
    this->ParryTime = 0.20f;
    this->DistanceToConsiderCloseTeammate = 200.00f;
    this->MaxTimeToEndGrab = 2.00f;
    this->CurrentLevelEvent = NULL;
    this->RopesReboundNearRingWalls = EWWEDirection::None;
    this->HitAnimationPlayRate = 0.00f;
    this->HitFramesToResetAnimationPlayRate = 0.00f;
    this->CurrentTurnbuckle = EWWETurnbuckleLocation::None;
    this->LastTurnbuckleHit = EWWETurnbuckleHitsType::Combo;
    this->bOnReceivePushPostRebound = false;
    this->CharacterMaterial = NULL;
    this->MasterActionIndex = 0;
    this->HitEventActor = NULL;
    this->bDisableRopesReboundInIrishWhip = false;
    this->bThrowWeaponButtonPressed = false;
    this->ControlledFlightYawSpeed = 0.00f;
    this->bDisableCollisionDuringNextFlight = false;
    this->bRestoreCollisionAfterCurrentFlight = false;
    this->bIsInControlledFlight = false;
    this->ControlledFlightZInitialSpeed = 0.00f;
    this->ControlledFlightZMaxSpeed = 0.00f;
    this->ControlledFlightZAcceleration = 0.00f;
    this->XYMovementCurve = NULL;
    this->CurrentHelicopterFallZSpeed = 0.00f;
    this->ThrowTargetSelected = NULL;
    this->bIsOutOfRingToCount = false;
    this->bWasOnRing = false;
    this->bUseCountDownOutOfRing = false;
    this->bCharacterIsPreparedForMatch = false;
    this->bGetFirstLocationTagTeam = false;
    this->NormalWrestlerHPToAnimIdle = 0.50f;
    this->TaggedWrestlerHPToAnimIdle = 0.50f;
    this->bCannotSprintByTime = false;
    this->PowerUpSound = NULL;
    this->PowerUpSoundFadeOut = 0.00f;
    this->PowerUpSoundVolumeFade = 0.00f;
    this->ShoveInstigator = NULL;
    this->PowerUpHud = NULL;
    this->FreezeOnFloor = 0;
    this->ReceiveHitComboCount = 0;
    this->bIsTaggedWrestler = true;
    this->bHitSuccessfully = false;
    this->bDumpAfterUpDownRing = false;
    this->CachedSteelCage = NULL;
    this->TimeDilationOnHitDefaultDuration = 0.00f;
    this->TimeDilationOnHitAmount = 0.01f;
    this->TimeDilationOnCounterDefaultDuration = 0.00f;
    this->TimeDilationOnCounterAmount = 0.10f;
    this->TimeDilationOnCantReceiveHitAmount = 0.20f;
    this->TimeDilationOnCantReceiveHitDuration = 0.00f;
    this->TimeDilationOnHitModifier = 0.00f;
    this->bPlayedEntrance = false;
    this->bPlayingEntrance = false;
    this->bStunnedAfterStandUp = false;
    this->bStunnedAfterIrishWhipToTurnbuckle = false;
    this->TimeToCheckIfCanPlayCommentOfCurrentInteractableWeapon = 10.00f;
    this->bCheatEnableSignature = false;
    this->bCheatEnableFinisher = false;
    this->CurrentChangeApronSideTime = 0.00f;
    this->CurrentChangeApronSideDirection = EWWEDirection::None;
    this->bWantToImpulse = false;
    this->AllRounderAfterRunningKickAttacker = NULL;
    this->ConnectedInstigator = NULL;
    this->ConnectedRival = NULL;
    this->bSearchingCharacterToConnectWith = false;
    this->bIgnoredByCamera = false;
    this->bTowardOutApronPositionLeft = true;
    this->LastInputHeight = EWWEActionHeight::None;
    this->CombinationThrowRivalToPerformTaunt = NULL;
    this->CurrentAnimNotify_CanReceiveAction = EWWECanReceiveAction::None;
    this->bDumpedByFinisher = false;
    this->DumpedTimeBySpecialAction = 0.00f;
    this->DumpedBySpecialKick = NULL;
    this->CombatStartTimestamp = 0.00f;
    this->HighFiveTimestamp = 0.00f;
    this->ExitRingTimestamp = 0.00f;
    this->LastHitBlockedTimestamp = 0.00f;
    this->LastCharacterWithDamageModifierDebuff = NULL;
    this->bOnCounterTutorial = false;
    this->BlendStartCapsuleRadius = 0.00f;
    this->CapsuleRadiusCurrentBlendTime = 0.00f;
    this->CapsuleRadiusTotalBlendTime = 0.00f;
    this->StunResistanceStacks = 0;
    this->StunResistanceTimestamp = 0.00f;
}

