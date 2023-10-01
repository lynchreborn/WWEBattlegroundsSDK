#include "WWEControlComponentCombat.h"

void UWWEControlComponentCombat::UpTurnbuckle() {
}

void UWWEControlComponentCombat::UpDownRing() {
}

void UWWEControlComponentCombat::Submission() {
}

void UWWEControlComponentCombat::StandUpStunned() {
}

void UWWEControlComponentCombat::ServerSetClimbInput_Implementation(FVector ClimbInput) {
}
bool UWWEControlComponentCombat::ServerSetClimbInput_Validate(FVector ClimbInput) {
    return true;
}

void UWWEControlComponentCombat::ServerSaveChosenAction_Implementation(EWWEActionTypes ActionType) {
}
bool UWWEControlComponentCombat::ServerSaveChosenAction_Validate(EWWEActionTypes ActionType) {
    return true;
}

void UWWEControlComponentCombat::ServerRequestSprint_Implementation(const bool _bRequestSprint) {
}
bool UWWEControlComponentCombat::ServerRequestSprint_Validate(const bool _bRequestSprint) {
    return true;
}

void UWWEControlComponentCombat::ServerRequestHelp_Implementation(const bool _bRequestHelp) {
}
bool UWWEControlComponentCombat::ServerRequestHelp_Validate(const bool _bRequestHelp) {
    return true;
}

void UWWEControlComponentCombat::ServerProcessLocalEndAction_Implementation(EWWEInputAction ActionInput) {
}
bool UWWEControlComponentCombat::ServerProcessLocalEndAction_Validate(EWWEInputAction ActionInput) {
    return true;
}

void UWWEControlComponentCombat::ServerProcessAction_Implementation(EWWEInputAction ActionInput, FVector InputAxis, bool bSkipCombinationMode) {
}
bool UWWEControlComponentCombat::ServerProcessAction_Validate(EWWEInputAction ActionInput, FVector InputAxis, bool bSkipCombinationMode) {
    return true;
}

void UWWEControlComponentCombat::ServerFillMinigame_Implementation(bool bEnable) {
}
bool UWWEControlComponentCombat::ServerFillMinigame_Validate(bool bEnable) {
    return true;
}

void UWWEControlComponentCombat::ServerCombinationSignatureReleased_Implementation() {
}
bool UWWEControlComponentCombat::ServerCombinationSignatureReleased_Validate() {
    return true;
}

void UWWEControlComponentCombat::ServerCombinationSignaturePressed_Implementation() {
}
bool UWWEControlComponentCombat::ServerCombinationSignaturePressed_Validate() {
    return true;
}

void UWWEControlComponentCombat::ServerCombinationModeReleased_Implementation() {
}
bool UWWEControlComponentCombat::ServerCombinationModeReleased_Validate() {
    return true;
}

void UWWEControlComponentCombat::ServerCombinationModePressed_Implementation() {
}
bool UWWEControlComponentCombat::ServerCombinationModePressed_Validate() {
    return true;
}

void UWWEControlComponentCombat::ServerCheckCombinationMode_Implementation(const TArray<EWWECombinationInput>& CombinationInput, const EWWECombinationActionType ActionType) {
}
bool UWWEControlComponentCombat::ServerCheckCombinationMode_Validate(const TArray<EWWECombinationInput>& CombinationInput, const EWWECombinationActionType ActionType) {
    return true;
}

void UWWEControlComponentCombat::ServerAxisMiniGame_Implementation(bool bLeft) {
}
bool UWWEControlComponentCombat::ServerAxisMiniGame_Validate(bool bLeft) {
    return true;
}

void UWWEControlComponentCombat::Release() {
}

void UWWEControlComponentCombat::GoToApron() {
}

void UWWEControlComponentCombat::ClearThrowCombinationMode() {
}

void UWWEControlComponentCombat::ClearCombinationMode() {
}

void UWWEControlComponentCombat::CheckCombinationMode(bool bThrowCombination) {
}

UWWEControlComponentCombat::UWWEControlComponentCombat() {
    this->MinValueAxisMinigame = 0.30f;
    this->bAxisMinigameIsLeft = false;
    this->bCombinationModeEnabled = false;
    this->bCombinationSignatureEnabled = false;
    this->bInitiedIrishWhip = false;
    this->bPickWeaponTriggered = false;
    this->bBlockRightThumbstickX = false;
    this->bBlockRightThumbstickY = false;
}

