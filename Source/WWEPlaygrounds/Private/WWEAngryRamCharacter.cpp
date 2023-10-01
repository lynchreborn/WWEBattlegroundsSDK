#include "WWEAngryRamCharacter.h"
#include "Net/UnrealNetwork.h"

void AWWEAngryRamCharacter::SetControlledByAICharacter(AWWECharacterCombat* AICharacter) {
}

void AWWEAngryRamCharacter::OnExitRingTriggerZone(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void AWWEAngryRamCharacter::OnEnterRingTriggerZone(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AWWEAngryRamCharacter::MulticastRamRemoveWallZone_Implementation(EWWEDirection NewWall, bool IsEntry) {
}

void AWWEAngryRamCharacter::MulticastRamAddWallZone_Implementation(EWWEDirection NewWall, bool IsEntry) {
}

void AWWEAngryRamCharacter::MulticastPerformRotateAction_Implementation(float ForcedYaw) {
}

void AWWEAngryRamCharacter::MulticastPerformAction_Implementation(EWWEAngryRamAction Action) {
}

void AWWEAngryRamCharacter::CharacterRemovedFromGame(AWWECharacterCombat* RemoveCharacter) {
}

void AWWEAngryRamCharacter::CharacterAddedToGame(AWWECharacterCombat* NewCharacter) {
}

void AWWEAngryRamCharacter::ChangeControllerToPlayerController(AWWEPlayerControllerCombat* _PlayerController) {
}

void AWWEAngryRamCharacter::ChangeAngryRamState(EWWEAngryRamState NewState) {
}

void AWWEAngryRamCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AWWEAngryRamCharacter, RotateAngleCos);
    DOREPLIFETIME(AWWEAngryRamCharacter, StunAngleCos);
    DOREPLIFETIME(AWWEAngryRamCharacter, AngleAttackCos);
    DOREPLIFETIME(AWWEAngryRamCharacter, bIsRotating);
    DOREPLIFETIME(AWWEAngryRamCharacter, bIsCameraRelevant);
    DOREPLIFETIME(AWWEAngryRamCharacter, bIsInSprint);
}

AWWEAngryRamCharacter::AWWEAngryRamCharacter() {
    this->WalkSpeed = 0.00f;
    this->RunSpeed = 0.00f;
    this->OffsetYawn = 0.00f;
    this->RotateAngleFromBehind = 0.00f;
    this->StunAngle = 0.00f;
    this->JumpForce = 100.00f;
    this->ForwardJumpVelocity = 10.00f;
    this->DistanceAttack = 100.00f;
    this->AngleAttack = 90.00f;
    this->DistanceUpDownRing = 10.00f;
    this->DistanceRequiredAfterAttack = 0.00f;
    this->BodyCapsule = NULL;
    this->CurrentRamState = EWWEAngryRamState::None;
    this->CachedCapsuleComp = NULL;
    this->RotateAngleCos = 0.00f;
    this->StunAngleCos = 0.00f;
    this->AngleAttackCos = 0.00f;
    this->bIsRotating = false;
    this->bIsCameraRelevant = false;
    this->bIsInSprint = false;
    this->AIControllerCached = NULL;
    this->PlayerControllerCached = NULL;
    this->PlayerPawnCached = NULL;
    this->bControlledByAICharacter = false;
}

