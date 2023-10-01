#include "WWECharacterGameplay.h"
#include "Net/UnrealNetwork.h"

void AWWECharacterGameplay::SetNoSpendingPowerUpPoints_Implementation(bool IsNoSpendingPowerUpPoints) {
}
bool AWWECharacterGameplay::SetNoSpendingPowerUpPoints_Validate(bool IsNoSpendingPowerUpPoints) {
    return true;
}

void AWWECharacterGameplay::OnRep_CurrentState() {
}

void AWWECharacterGameplay::MulticastBackPreviousStateProducedByPowerUp_Implementation() {
}

void AWWECharacterGameplay::MulticastActiveCoolDownPowerUpTime_Implementation() {
}

int32 AWWECharacterGameplay::GetPlayerNumber() const {
    return 0;
}

void AWWECharacterGameplay::ClientNoStaminaBlink_Implementation() {
}

void AWWECharacterGameplay::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AWWECharacterGameplay, CurrentState);
    DOREPLIFETIME(AWWECharacterGameplay, LastState);
    DOREPLIFETIME(AWWECharacterGameplay, CurrentHealth);
    DOREPLIFETIME(AWWECharacterGameplay, CurrentStamina);
    DOREPLIFETIME(AWWECharacterGameplay, CurrentHeat);
    DOREPLIFETIME(AWWECharacterGameplay, CurrentPowerUpPoints);
    DOREPLIFETIME(AWWECharacterGameplay, CurrentPowerUpCoolDown);
    DOREPLIFETIME(AWWECharacterGameplay, bIsNoSpendingPowerUpPoints);
}

AWWECharacterGameplay::AWWECharacterGameplay() {
    this->bPointCameraAtSkeletal = false;
    this->bAllowAdjustLocation = false;
    this->CurrentState = EWWECharacterState::None;
    this->LastState = EWWECharacterState::None;
    this->bIsPerformingMovement = false;
    this->MovementStopThreshold = 0.00f;
    this->BehaviorTree = NULL;
    this->BlackboardData = NULL;
    this->CurrentAction = EWWECharacterAction::None;
    this->bOverlayInitialized = false;
    this->CurrentHealth = 0.00f;
    this->CurrentStamina = 0.00f;
    this->CurrentHeat = 0.00f;
    this->CurrentPowerUpPoints = 0.00f;
    this->PowerUpCoolDownDuration = 0.00f;
    this->CurrentPowerUpCoolDown = 0.00f;
    this->bIsPowerUpActivated = false;
    this->bDisableCoolDownPowerUp = false;
    this->bIsNoSpendingPowerUpPoints = false;
    this->CurrentPowerUp = NULL;
    this->bBlinkStamina = false;
    this->bControlledByGameLogicThisTick = false;
    this->CachedRing = NULL;
    this->TargetRotateYaw = 0.00f;
    this->CurrentYawRotateSpeed = -1.00f;
    this->bPurgeRotationAfterUpdate = false;
    this->LastPhysicsHandleID = 0;
    this->CurrentDeltaYaw = 0.00f;
    this->_CachedOverlayWidget = NULL;
    this->LastStaminaFailAudioComp = NULL;
    this->BodyDynamicMaterial = NULL;
    this->HeadDynamicMaterial = NULL;
}

