#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "Animation/AnimEnums.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "ESBMatchMode.h"
#include "SBSoftAttachableFX.h"
#include "EWWEActionHeight.h"
#include "EWWEActionTypes.h"
#include "EWWEAttachedActorWithTranslationBone.h"
#include "EWWEAutoMoveKeyLocation.h"
#include "EWWECanReceiveAction.h"
#include "EWWECharacterMatchResult.h"
#include "EWWECharacterState.h"
#include "EWWEDirection.h"
#include "EWWEFightingStyle.h"
#include "EWWEInputResult.h"
#include "EWWEPowerAction.h"
#include "EWWERingBlink.h"
#include "EWWETurnbuckleHitsType.h"
#include "EWWETurnbuckleLocation.h"
#include "Templates/SubclassOf.h"
#include "WWECameraSequenceData.h"
#include "WWECharacterGameplay.h"
#include "WWEControlledFlightInternalValues.h"
#include "WWEDebugDamageText.h"
#include "WWEForEnemiesPowerUpModifiers.h"
#include "WWESelfPowerUpModifiers.h"
#include "WWESkillTreeModifiers.h"
#include "WWECharacterCombat.generated.h"

class AActor;
class AWWECharacterCombat;
class AWWEInteractableWeapon;
class AWWELevelEvent;
class AWWEMoneySack;
class AWWEPlayerControllerGameplay;
class AWWESteelCage;
class UAudioComponent;
class UBoxComponent;
class UCapsuleComponent;
class UCurveFloat;
class UMaterialInstanceDynamic;
class UParticleSystemComponent;
class UPrimitiveComponent;
class USBBlinkComponent;
class USBFresnelComponent;
class USoundBase;
class UWWEAIAggroComponent;
class UWWEAIHeadBehaviourComponent;
class UWWEActionComponent;
class UWWEActionNode;
class UWWECharismaComponent;
class UWWECrosshair;
class UWWEDynamicMaterialComponent;
class UWWEHUDPowerUpWidget;
class UWWEHairPhysicalAnimComponent;
class UWWEPhysicalAnimationComponent;
class UWWEPowerUpBase;
class UWWESweepComponent;

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API AWWECharacterCombat : public AWWECharacterGameplay {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CrosshairSpeedMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bSequencePlayed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bCinematicPlayed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    EWWEDirection CachedCageWallDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bFacingClockwise;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    ESBMatchMode CurrentMatchMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bCanPinInsideRing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bCanPinOutsideRing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bCountDownOutsideRing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWEAIAggroComponent* AIAggroComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bCharacterWasFinishedLoading;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Replicated, meta=(AllowPrivateAccess=true))
    UWWECharismaComponent* CharismaComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EWWEFightingStyle, TSubclassOf<AWWEInteractableWeapon>> SpecialWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<AWWEInteractableWeapon>> BrawlerSuccessionWeapons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    AWWEInteractableWeapon* OwnSpecialWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    AWWEInteractableWeapon* CurrentBrawlerWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TArray<AWWEInteractableWeapon*> OwnBrawlerSuccessionWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bShowDebugTrajectories: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TArray<FWWECameraSequenceData> PossibleSequences;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HeadLookAtInterpolationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpineLookAtInterpolationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MovementYawSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReceiveHitYawSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RotateToYawSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UpDownRingYawSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FlyYawSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AngleThresholdToRotateOnBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    float NormalSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    float SprintSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    float CannotSprintByTimeSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    float AfterReboundSprintSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    float IrishWhipSprintSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    float CarryingHeavyWeaponSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    float CarryingOtherCharacterSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    float BackwardSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    float ApronSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    float CageTopSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MultiplierBlockSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinSprintTimeToShove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StunnedAfterStandUpTimeout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDistanceRunningThrow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxAngleRunningThrow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDistanceToRopesInSpringboard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxAngleToTargetRivalInSpringboard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDistanceToTargetRivalInSpringboard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDistanceTurnbuckleHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PercentageOfTimeToEnqueAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    float MaxClimbHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LimitCageZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CageWidth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinClimbHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CageHalfLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CharacterScaleOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SwitchWallTriggerOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SwitchTopTriggerOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxTopRopesOutsideAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    uint8 bRestoreCharacterCollisionWhenNoOverlap: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    uint8 bRestoreCharacterCollisionWhenNoOverlapWalls: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    uint8 bRestoreCharacterCollisionWhenNoOverlapObjects: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* CachedCapsuleComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    FVector OriginalMeshTranslationOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    FQuat OriginalMeshRotationOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    AWWEPlayerControllerGameplay* ResidualPlayerController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    int32 MovementLocked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    AWWEInteractableWeapon* OwnedWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ThrowWeaponAutoTargetAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ThrowCharacterAutoTargetAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RivalAngleToRotateWhenHitWithWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RivalDistanceToRotateWhenHitWithWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* PinMinigameSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeToPickUpMoney;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bIsPickingUpMoney;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor BlinkColorTagTeam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlinkIntervalTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bBlinkFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bPendingToDestroy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bCanDestroyInKOTR;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TMap<UClass*, float> ReceiverDamageModifierDebuff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bCanReceiveAnyHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    USBBlinkComponent* BlinkComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    USBFresnelComponent* FresnelComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    UWWEDynamicMaterialComponent* BlinkDynamicMaterialComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    uint8 bIsSprintParticleActive: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TArray<UParticleSystemComponent*> SprintParticleComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    AWWECharacterCombat* CachedCarryRival;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, ReplicatedUsing=OnRep_TargetRival, meta=(AllowPrivateAccess=true))
    AWWECharacterCombat* TargetRival;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, ReplicatedUsing=OnRep_TargetRival, meta=(AllowPrivateAccess=true))
    AWWECharacterCombat* InstigatorRival;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    AWWECharacterCombat* LastInstigatorRival;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    AWWECharacterCombat* SpecialThrowTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    AWWECharacterCombat* SpecialTopRopesTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    AWWEInteractableWeapon* TargetWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    UWWEAIHeadBehaviourComponent* AIHeadBehaviourComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    UWWECrosshair* CrosshairComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Replicated, Transient, meta=(AllowPrivateAccess=true))
    UWWEActionComponent* ActionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWEPhysicalAnimationComponent* PhysicalAnimationComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWEHairPhysicalAnimComponent* HairPhysicalAnimationComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWESweepComponent* SweepComponent;
    
    UPROPERTY(EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    int8 TargetRivalIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bPinLoser;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    EWWECharacterMatchResult MatchResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    EWWEPowerAction ReceiveHitPower;
    
    UPROPERTY(EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    int8 HitVariation;
    
    UPROPERTY(EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    int8 ConfiguredHitVariation;
    
    UPROPERTY(EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    int8 HitSectionIndex;
    
    UPROPERTY(EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    int8 CounterVariation;
    
    UPROPERTY(EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    int8 ServerNextThrowVariation;
    
    UPROPERTY(EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    int8 ServerCounteractThrowVariation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    int32 PotentialSignatureMoveIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    int32 CurrentSignatureMoveIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    int32 CurrentSignatureVariationIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    EWWEAutoMoveKeyLocation CurrentAutoMoveLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bFailedNoStamina;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bIsBeingCarriedByAnotherCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bIsBeingSpecialCarriedByAnotherCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bFeedbackReleaseFromCarriedByCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bIsCarryingACharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bIsSpecialCarryingACharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    EWWEActionTypes RandomActionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    EWWEActionTypes ChosenActionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    EWWEInputResult InputActionResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    EWWEActionTypes LastRandomHUDActionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bIsCharacterFaceUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool bIsInSprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bIsInSprintAfterRebound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    float TimeSprinting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bShouldShoveInSprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool bIsBlocking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bCanPerformCounteractAfterBlocking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bCanBlockInCurrentAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bWantToBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bCurrentBlockBreaked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bWantToRotateInBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bForceSprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bForceOrientation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bForceYawCorrection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    float ForceYawCorrectionSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    float ForceYawCorrectionDegrees;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bPretendGetOutOfApronToRing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    EWWEDirection InputDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    FVector LastActionInputAxis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    FVector LastActionRawInputAxis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FVector ClimbInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bIsOnTurnbuckleMinigameStunned;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    FVector ForceLocationToRotate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    FVector CachedActorLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    AActor* ForceActorToOrientation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bWaitingToThrowInProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bUseTranslationCurveForRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bCheckCollisionToBreakAdjustLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bBreakAdjustLocationByCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    EWWEAttachedActorWithTranslationBone AttachedActorWithTranslationBone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bDenyRotationByAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bHasDumpNotifyWithoutConsume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bHasStandUpStunnedNotifyWithoutConsume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bAutoStandUpInstantly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    FName GroundHitBoneNameToAdjustLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bTempModifiedHarshlyRopeCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bTempDisabledHarshlyRopeCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    FVector GoToApronLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bOnRingBeforeApron;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    FVector HighFiveTeamFinalPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeToResetComboActionIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeToResetReceiveHitComboCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeBetweenGrabActionAndThrowAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeToBreakBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeDurationFeedbackReleaseFromCarriedByCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeDurationFirstSec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeDurationSecondSec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeDurationThirdSec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeDurationBellSec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeDurationEndSec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bInMiniGame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bFillMiniGame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bStandUpByTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    float MiniGameCountdown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    float CurrentCountMiniGame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    float ExtraCountMiniGame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxCountNeededMiniGame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinCountNeededMiniGame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExtraIncrementCountMiniGame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceToTravel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDistancePullFromTurnbuckle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ImpulseToAddToMainTurnbuckle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ImpulseToAddToSecondaryTurnbuckle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ParryTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceToConsiderCloseTeammate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxTimeToEndGrab;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TEnumAsByte<EObjectTypeQuery>> ObjectToTrace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TArray<EWWEDirection> NearRingWalls;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> LevelEventsOverlapping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    AWWELevelEvent* CurrentLevelEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    EWWEDirection RopesReboundNearRingWalls;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TArray<EWWEDirection> NearRingEntries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TArray<UBoxComponent*> OverlappedWalls;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TArray<AWWECharacterCombat*> OverlappedCharacters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    float HitAnimationPlayRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    float HitFramesToResetAnimationPlayRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSBSoftAttachableFX> HitFXArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    EWWETurnbuckleLocation CurrentTurnbuckle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    EWWETurnbuckleHitsType LastTurnbuckleHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bOnReceivePushPostRebound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* CharacterMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    int32 MasterActionIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    AActor* HitEventActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bDisableRopesReboundInIrishWhip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    FName LastSectionNameMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<AWWEInteractableWeapon*> InRangeWeapons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bThrowWeaponButtonPressed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ControlledFlightYawSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    uint8 bDisableCollisionDuringNextFlight: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    uint8 bRestoreCollisionAfterCurrentFlight: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    FWWEControlledFlightInternalValues LocalControlledFlight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bIsInControlledFlight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ControlledFlightZInitialSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ControlledFlightZMaxSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ControlledFlightZAcceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* XYMovementCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    float CurrentHelicopterFallZSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    FVector OriginalHelicopterFallLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    FVector ThrowTargetLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    FWWESelfPowerUpModifiers SelfPowerUpModifiers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    FWWEForEnemiesPowerUpModifiers EnemiesPowerUpModifiers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    FWWESkillTreeModifiers SkillTreeModifiers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UPrimitiveComponent*> ThrowCharacterTargets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* ThrowTargetSelected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bIsOutOfRingToCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bWasOnRing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bUseCountDownOutOfRing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bCharacterIsPreparedForMatch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bGetFirstLocationTagTeam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NormalWrestlerHPToAnimIdle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TaggedWrestlerHPToAnimIdle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bCannotSprintByTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    UAudioComponent* PowerUpSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    float PowerUpSoundFadeOut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    float PowerUpSoundVolumeFade;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    AWWECharacterCombat* ShoveInstigator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    UWWEHUDPowerUpWidget* PowerUpHud;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    int32 FreezeOnFloor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    int32 ReceiveHitComboCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bIsTaggedWrestler;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bHitSuccessfully;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bDumpAfterUpDownRing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    AWWESteelCage* CachedSteelCage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeDilationOnHitDefaultDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeDilationOnHitAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeDilationOnCounterDefaultDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeDilationOnCounterAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeDilationOnCantReceiveHitAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeDilationOnCantReceiveHitDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    float TimeDilationOnHitModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bPlayedEntrance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bPlayingEntrance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    FTimerHandle PhotomatonTimerHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bStunnedAfterStandUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bStunnedAfterIrishWhipToTurnbuckle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    FTimerHandle CheckIfCanPlayCommentOfCurrentInteractableWeaponTimerHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeToCheckIfCanPlayCommentOfCurrentInteractableWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bCheatEnableSignature;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bCheatEnableFinisher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    float CurrentChangeApronSideTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    EWWEDirection CurrentChangeApronSideDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bWantToImpulse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    AWWECharacterCombat* AllRounderAfterRunningKickAttacker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    AWWECharacterCombat* ConnectedInstigator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    AWWECharacterCombat* ConnectedRival;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bSearchingCharacterToConnectWith;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bIgnoredByCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bTowardOutApronPositionLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    EWWEActionHeight LastInputHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    AWWECharacterCombat* CombinationThrowRivalToPerformTaunt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    EWWECanReceiveAction CurrentAnimNotify_CanReceiveAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bDumpedByFinisher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    float DumpedTimeBySpecialAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    AWWECharacterCombat* DumpedBySpecialKick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    float CombatStartTimestamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    float HighFiveTimestamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    float ExitRingTimestamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    float LastHitBlockedTimestamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    FVector CachedLocationBeforeHelicopter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    AWWECharacterCombat* LastCharacterWithDamageModifierDebuff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bOnCounterTutorial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TArray<FWWEDebugDamageText> DebugDamageTexts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    float BlendStartCapsuleRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    float CapsuleRadiusCurrentBlendTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    float CapsuleRadiusTotalBlendTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    int32 StunResistanceStacks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    float StunResistanceTimestamp;
    
public:
    AWWECharacterCombat();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void UsePowerUpSlotCheat(UWWEPowerUpBase* PowerUp, bool bNoCoolDown);
    
protected:
    UFUNCTION(BlueprintCallable)
    void TryToCaptureCustomCharacterPhotomaton();
    
public:
    UFUNCTION(BlueprintCallable)
    void StopFresnel();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerWantToBlock(bool bLock);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetRandomActionType(EWWEActionTypes ActionType);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetInputAxis(FVector Axis, FVector RawAxis);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerChangeTargetRivalWithDirection(FVector Direction);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerChangeTargetRival();
    
    UFUNCTION(BlueprintCallable)
    void ResetStunnedAfterStandUp();
    
protected:
    UFUNCTION(BlueprintCallable)
    void ResetReducedSpeedModifier();
    
public:
    UFUNCTION(BlueprintCallable)
    void ResetReceiveHitComboCount();
    
    UFUNCTION(BlueprintCallable)
    void ReleaseFromReceiveCarryCharacter(bool B);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_TargetRival(const AWWECharacterCombat* PrevTargetRival);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_InstigatorRival(AWWECharacterCombat* PrevInstigatorRival);
    
    UFUNCTION(BlueprintCallable)
    void OnReadyToStartMatch();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnCapsuleHitEvent(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastTeleportCharacterToRing(FVector Location);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastSetTargetRival(AWWECharacterCombat* Rival, bool bShowOnHUD, bool bRotateTo, FVector Location);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastSetRootMotionMode(TEnumAsByte<ERootMotionMode::Type> Value);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastSetReducedSpeedModifierInTargetRival(float ModifierFactor);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastSetReducedDamageModifier(float ModifierFactor);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastSetRecoveryHealthModifier(float ModifierFactor);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastSetPlaneConstraintEnabled(bool bEnabled);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastSetOnCageWallForGrabExit();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastSetInputAxis(FVector Axis, FVector RawAxis);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastSetIncreaseInputModifier(float ModifierFactor, const UWWEActionNode* InBindedAction);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastSetIncapacitateUsePowerUpsModifier();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastSetFreezeOnFloor(bool bFreeze);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastSetFillMiniGame(bool bEnable);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastSetDamageWeaponsModifier(float ModifierFactor);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastSetDamageToReflectModifier(float ModifierFactor);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastSetDamageToDoModifier(float ModifierFactor);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastSetDamageToComboHitModifier(float ModifierFactor, float TimeDilationModifier);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastSaveChosenActionType(EWWEActionTypes ActionType);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastRestoreCollisionAfterCurrentFlight();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastPrepareTeleportCharacterToRing();
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastPlaySequenceIndex(int32 Index);
    
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastPickUpGroundMoney(AWWEMoneySack* MoneySack);
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastOnExitRingTriggerZone(EWWEDirection NewWall);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastOnExitRingEntryZone(EWWEDirection NewWall);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastOnEnterRingTriggerZone(EWWEDirection NewWall);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastOnEnterRingEntryZone(EWWEDirection NewWall);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastOnCharacterLoseGame();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastGainHealth(float LifePoints);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastFeedbackReleaseFromCarriedByCharacter(bool _bFeedbackReleaseFromCarriedByCharacter);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastDrainStaminaToRivals(float StaminaPercentage);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastChangeCharacterState(EWWECharacterState NewState);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastActiveUnstoppableMode();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastActiveInmunityMode();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastActiveImpossibleToDoCounterModifier();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastActiveBrawlerSuccessionWeapon(AWWEInteractableWeapon* _Weapon);
    
    UFUNCTION(BlueprintCallable)
    void HideCounterButton();
    
private:
    UFUNCTION(BlueprintCallable)
    void EndDynamicMaterial();
    
public:
    UFUNCTION(BlueprintCallable)
    void EnableSprintByTime();
    
    UFUNCTION(BlueprintCallable)
    void DenyTauntTurnbuckleBecauseThrow();
    
protected:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSetCharacterAndRingBlink(const float Time, const FLinearColor LinearColor, const float BlinkInterval, AWWECharacterCombat* CharacterToBlink, const EWWERingBlink RingBlink, const bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void CheckSpecialMatchLoseGame();
    
public:
    UFUNCTION(BlueprintCallable)
    void CheckPlayCameraSequence();
    
    UFUNCTION(BlueprintCallable)
    void CheckIfCanPlayCommentOfCurrentInteractableWeapon();
    
    UFUNCTION(BlueprintCallable)
    void ChangeCharacterState(EWWECharacterState NewState);
    
private:
    UFUNCTION(BlueprintCallable)
    void BeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
public:
    UFUNCTION(BlueprintCallable)
    void AutoStandUpActionByTime(bool bForceToStandUp);
    
    UFUNCTION(BlueprintCallable)
    void AutoStandUpAction(bool bForceToStandUp);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ActiveMaximumPowerPointsCheat();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ActiveMaximumHeatPointsCheat();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ActiveConcretePowerUpCheat(UWWEPowerUpBase* PowerUp, bool bNoCoolDown);
    
};

