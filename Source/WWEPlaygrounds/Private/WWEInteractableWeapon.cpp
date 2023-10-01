#include "WWEInteractableWeapon.h"
#include "Components/AudioComponent.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Net/UnrealNetwork.h"
#include "WWEDynamicMaterialComponent.h"

void AWWEInteractableWeapon::OnRep_WeaponState() {
}

void AWWEInteractableWeapon::OnRep_WeaponLifeType() {
}

void AWWEInteractableWeapon::OnRep_OwnerCharacter() {
}

void AWWEInteractableWeapon::OnRep_bActiveWeapon() {
}

void AWWEInteractableWeapon::OnHitCallback(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}

void AWWEInteractableWeapon::MulticastSpawnExplosionFX_Implementation() {
}

void AWWEInteractableWeapon::HideWeapon() {
}

AWWECharacterCombat* AWWEInteractableWeapon::GetOwnerCharacter() const {
    return NULL;
}

void AWWEInteractableWeapon::CheckAndUpdateRemainingLife(bool bDecrementLife) {
}

void AWWEInteractableWeapon::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AWWEInteractableWeapon, LastOwnerCharacter);
    DOREPLIFETIME(AWWEInteractableWeapon, WeaponState);
    DOREPLIFETIME(AWWEInteractableWeapon, WeaponLifeType);
    DOREPLIFETIME(AWWEInteractableWeapon, bActiveWeapon);
    DOREPLIFETIME(AWWEInteractableWeapon, ReplicatedOwnerCharacter);
}

AWWEInteractableWeapon::AWWEInteractableWeapon() {
    this->WeaponMaterial = EWWEHitWeaponMaterial::Metal;
    this->WeaponHitExtraDamageValue = 0.00f;
    this->WeaponHitByThrowDamageValue = 0.00f;
    this->WeaponThrowStaminaCostMultiplier = 1.00f;
    this->WeaponHitStaminaCostMultiplier = 1.00f;
    this->WeaponHitDamageMultiplier = 1.00f;
    this->WeaponInitialLifeType = EWWEInteractableWeaponLifeType::Invalid;
    this->WeaponLifeValue = 0;
    this->WeaponBlinkingTime = 0.00f;
    this->WeaponPickUpRadius = 0.00f;
    this->ReleaseToRingImpulse = -15.00f;
    this->bRequiresSpawnCreationFX = true;
    this->CreationSound = NULL;
    this->DestroySound = NULL;
    this->CombinationMode = EWWECombinationList::None;
    this->WeaponObjectType = EWWETypeObjects::None;
    this->WeaponType = EWWEInteractableWeaponType::Light;
    this->StatsOnHit = EWWEStats::MaximumHealth;
    this->StatsOnThrow = EWWEStats::MaximumHealth;
    this->bCarryWeaponOrientedToMovement = true;
    this->bCarryWeaponEnableLookAt = true;
    this->bDestroyOnCollision = true;
    this->bDestroyOnNextCollision = true;
    this->bOverrideThrowVelocity = true;
    this->ThrowAngularVelocitySettings = EWWEInteractableWeaponAngularVelocitySettings::UsePhysics;
    this->CollisionComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CollisionComponent"));
    this->PickUpCollisionComponent = CreateDefaultSubobject<USphereComponent>(TEXT("PickUpCollisionComponent"));
    this->AudioComponent = CreateDefaultSubobject<UAudioComponent>(TEXT("AudioComponent"));
    this->DynamicMaterialComponent = CreateDefaultSubobject<UWWEDynamicMaterialComponent>(TEXT("DynamicMaterialComponent"));
    this->bRelocateWhenGrabbing = false;
    this->bRotateWhenGrabbing = false;
    this->bScaleWhenGrabbing = false;
    this->bSnapRotationOnGrab = false;
    this->bCanBeGrabbedBackwards = false;
    this->bShouldAlwaysUseDefaultSnapOffsetReductionTime = false;
    this->bShouldAttachAfterDefaultSnapOffsetReductionTime = true;
    this->DefaultSnapOffsetReductionTime = 0.20f;
    this->DelayBeforeSnapOffset = 0.00f;
    this->CurrentGrabMontage = NULL;
    this->OwnerCharacter = NULL;
    this->LastOwnerCharacter = NULL;
    this->SnapOffsetReductionTotalTime = 0.00f;
    this->SnapOffsetReductionRemainingTime = -1.00f;
    this->AttachOffsetReductionRemainingTime = -1.00f;
    this->SnapOffsetReductionAngle = 0.00f;
    this->bGrabbingBackward = false;
    this->WeaponState = EWWEWeaponState::COUNT;
    this->WeaponLifeType = EWWEInteractableWeaponLifeType::Invalid;
    this->bActiveWeapon = false;
    this->bUsedAtLeastOnce = false;
    this->bGrabbedAtLeastOnce = false;
    this->LastMeshIndex = -1;
    this->bDoExplosion = false;
    this->RemainingLife = -1;
    this->bForceOrientateToTarget = false;
    this->bIsBlinking = false;
    this->bIsLightSweeping = false;
    this->bIsCameraRelevant = false;
    this->RelevantTimeout = 1.00f;
    this->ReplicatedOwnerCharacter = NULL;
}

