#include "WWEActionNode.h"
#include "Net/UnrealNetwork.h"

void UWWEActionNode::StopReceiverDamageModifierDebuff() {
}

void UWWEActionNode::ServerPerformAction_Implementation(int32 Variation, FWWELaunchNodeParameters Params) {
}
bool UWWEActionNode::ServerPerformAction_Validate(int32 Variation, FWWELaunchNodeParameters Params) {
    return true;
}

void UWWEActionNode::ServerEndActionForAll_Implementation(EWWEActionNodeResult Result) {
}
bool UWWEActionNode::ServerEndActionForAll_Validate(EWWEActionNodeResult Result) {
    return true;
}


void UWWEActionNode::MulticastShowCounterResult_Implementation(bool bCounterDone, bool bPressedButFailed) {
}

void UWWEActionNode::MulticastPerformAction_Implementation(int32 Variation, FWWELaunchNodeParameters Params) {
}

void UWWEActionNode::MulticastManageOnSubActionEndResult_Implementation(EWWEActionNodeResult Result) {
}

void UWWEActionNode::MulticastManageOnAfterActionEndResult_Implementation(EWWEActionNodeResult Result) {
}

void UWWEActionNode::MulticastManageOnActionEndResult_Implementation(EWWEActionNodeResult Result) {
}

void UWWEActionNode::MulticastEndActionForAll_Implementation(EWWEActionNodeResult Result) {
}

bool UWWEActionNode::EndActionForAll(EWWEActionNodeResult Result) {
    return false;
}

void UWWEActionNode::EndAction(EWWEActionNodeResult Result, UWWEActionNode* Cause) {
}

void UWWEActionNode::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UWWEActionNode, CurrentVariation);
    DOREPLIFETIME(UWWEActionNode, PreviousVariation);
}

UWWEActionNode::UWWEActionNode() {
    this->CurrentVariation = -1;
    this->PreviousVariation = -1;
    this->CurrentDamageModifier = 0;
    this->CurrentDamageReceived = 0.00f;
    this->CurrentSignatureDamage = 0.00f;
    this->CachedCharacter = NULL;
    this->CharParams = NULL;
    this->CachedActionComp = NULL;
    this->CachedBlackboard = NULL;
    this->CurrentInstigator = NULL;
    this->bIsClientCaster = false;
    this->StaminaCostActionBegin = 0.00f;
    this->bWasCombo = false;
    this->TotalHitNotifies = 0;
    this->bHasHitNotifies = false;
    this->SkillTreeDamageModifierDebug = 0.00f;
    this->PowerUpsDamageModifierDebug = 0.00f;
    this->SkillTreeHeatModifierDebug = 0.00f;
    this->bHasLocalControlOverMovement = false;
    this->bIsRunning = false;
    this->RepKey = 0;
    this->bIsChoreographyAction = false;
    this->bDisableMovement = false;
    this->bIsTickable = false;
    this->bIsAdjustLocationAllowed = false;
    this->ActionFamily = EWWEActionFamily::None;
    this->ImpactType = EWWEImpactType::None;
    this->IsOffensiveAction = false;
    this->bCanApplyDamage = false;
    this->bWithoutHumanInstigator = false;
    this->bApplyDamageOnHit = false;
    this->bUseDamageOnDemand = false;
    this->BindedDamageStat = EWWEStats::COUNT;
    this->bCalcDamageForHitNotify = false;
    this->bCalculateDamgeAtAnimBegin = true;
    this->bCalculateDamgeAtAnimEnd = false;
    this->bCanUpdateLookAtInCurrentAction = false;
    this->bCanUseIKFoot = true;
    this->bCounterReceived = false;
    this->bDoesActionGiveXP = false;
    this->bGiveXPToInstigator = false;
    this->ActionProgressionCondition = EWWEUserProgressionCondition::Punch;
    this->bOnActionHitAddXP = false;
    this->bOnActionEndAddXP = false;
    this->bOnActionEndAndSuccessAddXP = false;
    this->bDoesActionCauseCrowdReaction = false;
    this->ActionCondition = EWWEUserProgressionCondition::Punch;
    this->WhenToCauseCrowdReaction = 0;
    this->bOnNextAddXPDisabled = false;
    this->bCurrentOrientRotationToMovement = false;
    this->bCanReceiveNormalHit = false;
    this->bCanReceiveAnyHit = false;
    this->bWasSignatureDamage = false;
    this->DefaultNewActionMode = EWWENewActionMode::AbortCurrent;
    this->bShouldPerformReceivedMulticast = true;
    this->bReplicateClosestWeapon = false;
    this->bReplicateYaw = false;
    this->bReplicateInputAxis = false;
    this->bCheckReceivedActionMulticast = false;
    this->bCheckClientFlagOnReceivedMulticast = true;
    this->bCheckVariationOnReceivedMulticast = false;
    this->bReplicateFromClientToServer = true;
    this->bResetOnStart = false;
    this->bResetOnEnd = false;
    this->bCanBeEnqueued = false;
    this->bOrientRotationToMovement = false;
    this->bIsDamageAction = false;
    this->bIsPainAction = false;
    this->bCanBeGrabbed = false;
    this->bCanCrossRingWalls = true;
    this->bCanCrossCharacters = true;
    this->bMustUseOnlyCapsuleToSweep = false;
    this->bTranslationMeshEnabled = false;
    this->bDecreaseStaminaOnSprint = false;
    this->bInteractWithRopes = false;
    this->bShouldCollideHarshlyWithRopes = false;
    this->bShouldCollideAllTimeWithRopes = false;
    this->bShouldIgnoreRopes = false;
    this->bResetRopeInteractionsOnEnd = false;
    this->bIsBlockBreaker = false;
    this->HUDButtonActionTypeIcon = EWWEActionTypes::None;
    this->bHUDButtonShowed = false;
    this->CauseOfCallOnActionEnd = NULL;
    this->bBlocksStaminaRegen = false;
}

