#include "WWEAction_AnimBase.h"
#include "Net/UnrealNetwork.h"

void UWWEAction_AnimBase::MulticastRivalChangeNextSection_Implementation(EWWEAnimationSections SectionName, EWWEAnimationSections NextSectionName) {
}

void UWWEAction_AnimBase::MulticastJumpToSectionFromCurrentMontage_Implementation(const EWWEAnimationSections SectionName, const bool bSetNextSection, const EWWEAnimationSections NextSectionName) {
}

void UWWEAction_AnimBase::MulticastInstigatorRivalJumpToSectionFromCurrentMontage_Implementation(const EWWEAnimationSections SectionName, const bool bSetNextSection, const EWWEAnimationSections NextSectionName) {
}

void UWWEAction_AnimBase::MulticastChangeNextSection_Implementation(EWWEAnimationSections SectionName, EWWEAnimationSections NextSectionName) {
}

void UWWEAction_AnimBase::MulticastAnyRivalJumpToSectionFromCurrentMontage_Implementation(AWWECharacterCombat* Rival, const EWWEAnimationSections SectionName, const bool bSetNextSection, const EWWEAnimationSections NextSectionName) {
}

void UWWEAction_AnimBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UWWEAction_AnimBase, bSignatureMove);
}

UWWEAction_AnimBase::UWWEAction_AnimBase() {
    this->CachedAnimInstance = NULL;
    this->CurrentOrderID = 0;
    this->CurrentMontage = NULL;
    this->ForcedVariation = NULL;
    this->StartSection = TEXT("Default");
    this->NextSection = TEXT("WWEEndSection");
    this->StaminaCostAnimBegin = 0.00f;
    this->bAutoPlayMontage = true;
    this->bGetRandomVariation = true;
    this->bRecoverHPPercentage = false;
    this->HPRecoverPercentage = 0.00f;
    this->MinigameType = EWWEMinigame::None;
    this->bSignatureMove = false;
    this->bCheckIfVariationIsEnabledForCharacter = true;
    this->bCompensatePlayRateLag = false;
    this->bDisableCollisionWithCharactersNoOverlapOnStart = false;
    this->bRestoreCollisionWithCharactersNoOverlapOnEnd = false;
    this->bRestoreCollisionWithWallsNoOverlapOnEnd = false;
    this->bRestoreCollisionWithObjectsNoOverlapOnEnd = false;
    this->bCheckDumpedOnEnd = false;
    this->bSignatureMoveAllowed = false;
}

